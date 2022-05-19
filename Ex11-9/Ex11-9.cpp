//שיעור 11  דוגמא 9
// יצירת איטרטור פשוט למחלקת list

#include <iostream>
using namespace std;

class List {
protected:
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
	class iterator1 {
	private: Link* ptr;
	public:  iterator1(Link* p) : ptr(p) {}
		  void operator++ (int notused)
		  {
			  ptr = ptr->next;
		  }
		  bool operator!= (iterator1 rhs)
		  {
			  return ptr != rhs.ptr;
		  }
		  int operator* ()
		  {
			  return ptr->value;
		  }
	};
	List();
	List(const List&);
	~List();
	void add(int value);
	int firstElement() const;
	bool search(const int& value) const;
	bool isEmpty() const;
	void removeFirst();
	void clear();
	iterator1 begin() { iterator1 it(head); return it; }
	iterator1 end() { iterator1 it(nullptr); return it; }

protected:	Link* head;
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

int main() {
	List lst;
	for (int i = 0; i < 10; i++)
		lst.add(rand() % 100);
	List::iterator1 it = lst.begin();
	for (; it != lst.end(); it++)
		cout << *it << ' ';
	cout << endl;
	return 0;
}
