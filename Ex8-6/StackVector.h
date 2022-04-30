#include "Vector.h"         //homework targil 2 !
#include "Stack.h"
//-------------------------------------------------------
//  class StackVector
//  Stack implemented using Vector
//  Vector will grow as necessary to avoid overflow
//-------------------------------------------------------

class StackVector : public Stack
{
public:
    // constructor requires a starting size
    StackVector(unsigned int capacity);


    // Stack operations
    void clear();
    bool isEmpty() const;
    int pop();
    void push(int value);
    int top() const;

protected:
    // data fields
    Vector data;
};


