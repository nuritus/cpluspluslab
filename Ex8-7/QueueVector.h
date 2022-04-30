#include "Vector.h"
#include"Queue.h"

//-------------------------------------------------------
//  class QueueVector
//  Queue implemented using vector operations
//-------------------------------------------------------
class QueueVector : public Queue
{
public:
    // constructor requires a starting size
    QueueVector(int max);
    QueueVector(const QueueVector&);

    // implement Queue protocol
    void clear();
    int dequeue();
    void enqueue(int value);
    int front() const;
    bool isEmpty() const;

private:
    Vector data;
    int nextSlot;
    int firstUse;
};

