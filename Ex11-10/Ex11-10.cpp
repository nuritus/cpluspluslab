//שיעור 11  דוגמא 10
// יצירת איטרטור מורכב למחלקת list
//למרות שהרשימה ללא ממויינת, האיטרטור עובר עליה מהקטן לגדול

#include <iostream>
using namespace std;

//------------------------------------------------
//  class List
//      arbitrary size Lists
//      permits insertion and removal 
//      only from the front of the List
//------------------------------------------------
class List
{
protected:
	//--------------------------------------------
	//  inner class link
	//  a single element for the linked List 
	//--------------------------------------------
	class Link
	{
	public:
		// constructor
		Link(int linkValue, Link* nextPtr);
		Link(const Link&);
		// data areas
		int value;
		Link* next;
	};//end of class Link
public:
	class iterator {
	private:
		Link* ptr;
		List* head;
	public:
		iterator(Link* p, List* lsthead) :
			ptr(p), head(lsthead) {}
		void operator++(int notused)
		{
			Link* min = head->head;
			while (min && min->value <= ptr->value)
				min = min->next;
			if (!min)
			{
				ptr = nullptr;
				return;
			}
			Link* p = min->next;
			while (p)
			{
				if (p->value > ptr->value &&
					p->value < min->value)
					min = p;
				p = p->next;
			}
			ptr = min;
		}
		bool operator!=(iterator rhs)
		{
			return ptr != rhs.ptr;
		}
		int operator*() {
			return ptr->value;
		}
	};

public:
	// constructors
	List();
	List(const List&);
	~List();

	// operations
	void add(int value);
	int firstElement() const;
	bool search(const int& value) const;
	bool isEmpty() const;
	void removeFirst();
	void clear();


	iterator begin()
	{
		if (isEmpty()) return end();
		Link* min = head, * p = min->next;
		while (p)
		{
			if (p->value < min->value)
				min = p;
			p = p->next;
		}
		iterator it(min, this);
		return it;
	}
	iterator end()
	{
		iterator it(nullptr, nullptr);
		return it;
	}
protected:
	// data field
	Link* head;
};



//------------------------------------------------
//  class Link implementation
//------------------------------------------------
List::Link::Link(int val, Link* nxt) : value(val), next(nxt) {}

List::Link::Link(const Link& source) : value(source.value), next(source.next) {}

//--------------------------------------------
//  class List implementation
//--------------------------------------------
List::List() : head(nullptr)
{
	// no further initialization
}

List::List(const List& l)
{
	Link* src, * trg;
	if (l.head == nullptr)
		head = nullptr;
	else
	{
		head = new Link((l.head)->value, nullptr);
		src = l.head;
		trg = head;
		while (src->next != nullptr)
		{
			trg->next = new Link
			((src->next)->value, nullptr);
			src = src->next;
			trg = trg->next;
		}
	}
}

List::~List()
{
	clear();
}

void List::clear()
{
	// empty all elements from the List
	Link* next;
	for (Link* p = head; p != nullptr; p = next)
	{
		// delete the element pointed to by p
		next = p->next;
		p->next = nullptr;
		delete p;
	}
	// mark that the List contains no elements
	head = nullptr;
}

bool List::isEmpty() const
{
	// test to see if the List is empty
	// List is empty if the pointer to the head
	// Link is null

	return head == nullptr;
}
void List::add(int val)
{
	//Add a new value to the front of a Linked List
	head = new Link(val, head);
	if (head == nullptr)
		throw "failed in memory allocation";
}

int List::firstElement() const
{
	// return first value in List
	if (isEmpty())
		throw "the List is empty, no first Element";
	return head->value;
}

bool  List::search(const  int& val) const
{
	// loop to test each element
	for (Link* p = head; p != nullptr; p = p->next)
		if (val == p->value)
			return true;
	// not found
	return false;
}

void List::removeFirst()
{
	// make sure there is a first element
	if (isEmpty())
		throw "the List is empty, no Elements to remove";
	// save pointer to the removed node
	Link* p = head;
	// reassign the first node
	head = p->next;
	p->next = nullptr;
	// recover memory used by the first element
	delete p;
}

int main()
{
	List lst;
	for (int i = 0; i < 10; i++)
	{
		int val = rand() % 100;
		lst.add(val);
		cout << val << ' ';
	}
	cout << endl;
	List::iterator it = lst.begin();
	for (; it != lst.end(); it++)
		cout << *it << ' ';
	cout << endl;
	return 0;
}


