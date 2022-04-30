#include "DoubleEndedList.h"
//------------------------------------------------
//  class DoubleEndedList implementation
//------------------------------------------------
DoubleEndedList::DoubleEndedList() : List(), last(NULL)
{}
void DoubleEndedList::add(int val)
{
    // add an element to the front of a double 
    // ended List only need to handle addition to
    // empty List
    if (isEmpty()) {
        List::add(val);
        last = head;
    }
    else
        List::add(val);
}
void DoubleEndedList::clear()
{
    // delete all values from collection
    List::clear();
    // then set the pointer to the last element to zero
    last = NULL;
}
void DoubleEndedList::removeFirst() {
    // remove the first element 
    List::removeFirst();
    // if we remove last element
    if (isEmpty())
        last = NULL;
}

void DoubleEndedList::addToEnd(int val)
{
    // add a new element to end of a double ended List
    if (last != NULL)
    {
        last->next = new Link(val, NULL);
        last = last->next;
    }
    // otherwise, just add to front
    else //empty list
        add(val);
}
