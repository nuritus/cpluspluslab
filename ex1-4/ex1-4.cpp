// שיעור 1 - דוגמא 4
// מחלקה להגדרת מלבן
// הפשטת נתונים - שדות פרטיים, מתודות אחזור והצבה
//Lesson 1 - Example 4
//Class - Rectangle
//Data Abstraction - using private attributes
//Usage of settersand getters

#include <iostream>
using namespace std;

class  Rect {
//private:
    int length;
    int width;

public:
//    void printArea();
   
    int getLength()
    {
        
        return length;
    }
    void setLength(int myLength)
    {
       
        if (myLength > 0)
            this->length = myLength;
        else
            this->width = 5;

    }
    int getWidth()
    {
        return width;
    }
    void setWidth(int myWidth)
    {
        if (myWidth > 0)
            width = myWidth;
        else
            width = 5;
    
    }
};  // end of Rect

void Rect::printArea()
{

}
int main() {
    Rect r;
    //r.length = 4;
    r.setLength(4); 
    cout << r.getLength();
    r.printArea();
 
    
    return 0;
}

