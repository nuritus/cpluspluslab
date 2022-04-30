#include "List.h"
//------------------------------------------------
//  class Link implementation
//------------------------------------------------
List::Link::Link(int val, Link* nxt) : value(val), next(nxt) {}

List::Link::Link(const Link& source) : value(source.value), next(source.next) {}
//--------------------------------------------
//  class List implementation
//--------------------------------------------
List::List() : head(NULL)
{
	// no further initialization
}

List::List(const List& l)
{
	Link* src, * trg;//define two pointers one for each list,src - source, trg - new list

	if (l.head == NULL)//if source is empty list
		head = NULL;
	else //list is not empty
	{
		/*Link* temp ;
		temp = new Link(l.head->value,NULL);
		head = temp;*/
		//create first element in list
		head = new Link(l.head->value, NULL);

		//two pointers will each get beginning of list
		src = l.head;
		trg = head;
		//go over source list until end of list
		while (src->next != NULL)
		{
			//create new Link, and attach to end of new list
			trg->next = new Link((src->next)->value, NULL);
			//קדם מצביעים
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
	//// empty all elements from the List
	//Link* next;//temp pointer
	//for (Link * p=head; p != NULL; p=next)
	//{
	//	// delete the element pointed to by p
	//	next=p->next;//point to next element
	//	p->next=NULL;
	//	delete p;
	//	
	//}
	//// mark that the List contains no elements
	//head=NULL;

	//without next
	// empty all elements from the List
	for (Link* p = head; p != NULL; p = head)
	{
		// delete the element pointed to by p
		head = p->next;//point to next element
		p->next = NULL;
		delete p;

	}
	// mark that the List contains no elements
	head = NULL;
}

bool List::isEmpty() const
{
	// test to see if the List is empty
	// List is empty if the pointer to the head
	// Link is null

	return head == NULL;
}
void List::add(int val)
{
	//Add a new value to the front of a Linked List
	head = new Link(val, head);
	if (head == NULL)
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
	for (Link* p = head; p != NULL; p = p->next)
		if (val == p->value)
			return true;
	// not found
	return false;
}

void List::removeFirst()
{
	if (head != NULL)
	{
		Link* p = head;
		head = head->next;
		p->next = NULL;
		delete p;
	}
}
ostream& operator<< (ostream& os, List& l)
{
	os << '\t';
	for (List::Link* p = l.head; p != NULL; p = p->next)
		os << p->value << '\t';
	os << endl;
	return os;
}

