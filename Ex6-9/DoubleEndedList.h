#pragma once

//--------------------------------------------
// class DoubleEndedList
// a variation on Lists - can add elements 
// to the end as well as to front
//--------------------------------------------
#include "List.h"
class DoubleEndedList : public List
{
public:
	// constructors
	DoubleEndedList();

	// override the following methods from class List
	void add(int value);
	void clear();
	void removeFirst();
	// add a new element to the end of the List
	void addToEnd(int value);
protected:
	// data area -- Link to end
	Link* last;
};

