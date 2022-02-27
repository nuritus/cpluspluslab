// שיעור 3 - דוגמא 3
//  מחלקת מחרוזת-שלי
// בנאי העתקה מיותר

#include <cstring>
#include "iostream"
using namespace std;

class MyString {
	int len = 0;
	char* data;
public:
	MyString() : data(nullptr) {}
	MyString(const char* p);
	~MyString() { delete[] data; }
	// copy constructor
	MyString(const MyString& s);
};
// in MyString.cpp:
MyString::MyString(const char* p) {
	len = strlen(p);
	data = new char[len + 1];
	strcpy_s(data, len + 1, p);
}
MyString::MyString(const MyString& s) : 
										MyString(s.data)//שימוש בבנאי הרגיל לצורך בנאי העתקה
{
	cout << "cctor\n";
}

MyString f() {
	MyString temp("good day");
	return temp; // cctor
}
int main() {
	MyString s3 = "how are you?";
	MyString s4 = s3; // cctor
	MyString s5 = f(); // cctor?
}

