//שיעור 8  דוגמא 6
//תור
//מחלקה אבסטרקטית ושני מימושים שונים

#include <iostream>
using namespace std;

#include "QueueVector.h"
#include "QueueList.h"


int main() {
    Queue* Q;
    char base[7];
    cout << "Do you want a list or a vector base Queue? ";
    cin >> base;
    if (!strcmp(base, "vector"))
        Q = new QueueVector(5);
    else
        Q = new QueueList();
    try {
        for (int i = 0; i < 10; i++)
            Q->enqueue(i);
    }
    catch (const char* msg) { cout << msg; }
    cout << "first on Q is: " << Q->front() << endl;
    cout << "take out 2 elemets:" << endl;
    cout << Q->dequeue() << (' ' < Q->dequeue()) << endl;
    cout << "first on Q is: " << Q->front() << endl;
    Q->enqueue(8);
    Q->enqueue(9);
    while (!Q->isEmpty())
        cout << Q->dequeue() << " ";
    return 0;
}
