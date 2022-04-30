#include "DoubleEndedList.h"
#include "Queue.h"
//-------------------------------------------------------
//  class QueueList
//      Queue implemented using List operations
//-------------------------------------------------------
class QueueList : public Queue
{
public:
    // constructors
    QueueList();
    QueueList(const QueueList& v);

    // implement Queue protocol 
    void clear();
    int dequeue();
    void enqueue(int value);
    int front() const;
    bool isEmpty() const;

private:
    DoubleEndedList data;
};

