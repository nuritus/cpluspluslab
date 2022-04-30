#pragma once
#include "List.h"	
#include "Stack.h"

//-------------------------------------------------------
//  class StackList
//  Stack implemented using List operations
//-------------------------------------------------------

class StackList : public Stack
{
public:
    // constructors
    StackList();
    StackList(const StackList&);

    // Stack operations
    void clear();
    bool isEmpty() const;
    int pop();
    void push(int value);
    int top() const;

protected:
    // data fields
    List data;
};
