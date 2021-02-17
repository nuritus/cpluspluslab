//מחלקת מלבן - מימוש

# include "Rect.h" //חובה על מנת שיכיר את ההגדרה
using namespace std; //על מנת להשתמש בcout

void Rect::printArea()
{
	cout << length * width << endl;
}

int Rect::getLength()
{
	return length;
}

void Rect::setLength(int myLength)
{

	if (myLength > 0)
		this->length = myLength;
	else
		this->width = 5;

}

int Rect::getWidth()
{
	return width;
}

void Rect::setWidth(int myWidth)
{
	if (myWidth > 0)
		width = myWidth;
	else
		width = 5;
}

