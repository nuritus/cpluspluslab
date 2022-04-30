#include "QueueVector.h"

//== class QueueVector implementation ==

QueueVector::QueueVector(int size)
    : data(size + 1)	//one extra slot	
{
    clear();
}

QueueVector::QueueVector(const QueueVector& v)
    : data(v.data), nextSlot(v.nextSlot),
    firstUse(v.firstUse)
{
    // no further initialization
}

void QueueVector::clear()
{
    nextSlot = 0;
    firstUse = 0;
    data.clear();
}

int QueueVector::dequeue()
{
    // can not dequeue from an empty queue
    if (isEmpty()) throw "Queue is empty";
    int dataloc = firstUse;
    ++firstUse %= data.getCapacity();
    return data[dataloc];
}

void QueueVector::enqueue(int val)
{
    // make sure Queue has not overflowed
    if ((nextSlot + 1) % data.getCapacity() == firstUse)
        throw "the Queue is full";
    if (data.getSize() < data.getCapacity())
        data.insert(val);
    else
        data[nextSlot] = val;
    ++nextSlot %= data.getCapacity();
}

int QueueVector::front() const
{
    // can not return a value from an empty Queue
    if (isEmpty()) throw "Queue is empty";
    return data[firstUse];
}
bool QueueVector::isEmpty() const
{    // Queue is empty if next slot is
    // pointing to same location as first use
    return nextSlot == firstUse;
}
