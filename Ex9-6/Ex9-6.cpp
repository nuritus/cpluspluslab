//שיעור 9  דוגמא 6
//מחלקה תבניתית- רשימה
//כיצד הופכים מחלקה לגנרית

#include <iostream>
using namespace std;

template <class T>
class GList
{
public:
    bool IsEmpty() const;
    bool IsFull() const;
    int  Length() const;
    void Insert(T item);
    void Delete(T item);
    bool IsPresent(T item) const;
    void SelSort();
    void Print() const;
    GList();                   // Constructor
private:
    int      length;
    T data[MAX_LENGTH];
};

template <class T>
bool GList<T>::IsFull() const
{//… if...
    return true;
};

    template<class T>
    void GList<T>::Insert(T item)
    {
        data[length] = item;
        length++;
    }
    //...

 int main()   // Main code
 {
    GList list1;//compilation error!!!

    GList<int> list1;
    GList<float> list2;
    GList<string> list3;

    list1.Insert(356);
    list2.Insert(84.375);
    list3.Insert("Muffler bolt");
}