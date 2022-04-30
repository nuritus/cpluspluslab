#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

//------------------------------------------------
//  class List	//      arbitrary size Lists
//      permits insertion and removal 
//      only from the front of the List
//------------------------------------------------
class List
{

	//protected:
public:
	//--------------------------------------------
	//  inner class link
	//  a single element for the linked List 
	//--------------------------------------------
	class Link
	{
	public:
		// data areas
		int value;
		Link* next;

		// constructor
		Link(int linkValue = 0, Link* nextPtr = NULL);
		Link(const Link&);
		~Link() {}


	};	//end of class Link

protected:
	// data field
	Link* head;

public:
	// constructors
	List();//default
	List(const List&);//copy list
	~List();//destructor - erase list

	// operations
	void add(int value);//insert element into list
	int firstElement() const;//return value of first element
	bool search(const int& value) const;//חיפוש איבר ברשימה
	bool isEmpty() const;//check if empty
	void removeFirst();//remove first elemnt from list
	void clear();//erase list

	//operators
	friend ostream& operator<< (ostream& os, List& l);//print elements in  list


};

#endif