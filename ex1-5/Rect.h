//מחלקת מלבן - ממשק

#include <iostream> //במחלקה ובתכנית יש שימוש במחלקה זו
//הערה חשובה: הקישור של ספרית הקלט/פלט לא היה מתאים להיכתב כאן. זאת רק לצורך הדוגמה כעת
//עקרונית נכתוב אותו בכל קובץ בו יש לו שימוש (קבצי מימוש בד"כ ולא קבצי ממשק)

class  Rect {
	int length;
	int width;
public:
	void printArea();
	
	int getLength();
	void setLength(int myLength);
	
	int getWidth();
	void setWidth(int myWidth);
};  // end of Rect
