// שיעור 3 - דוגמא 4
// מחלקת מחרוזת-שלי
// בנאי הזזה

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
	//move constructor
	MyString(MyString&& s);
};

// in MyString.cpp:
MyString::MyString(const char* p)
{
	len = strlen(p);
	data = new char[len + 1];
	strcpy_s(data, len + 1, p);
}
MyString::MyString(const MyString& s) :
										MyString(s.data)
{
	cout << "cctor\n";
}


MyString::MyString(MyString&& s) {
	cout << "move ctor" << endl;
	// steal (dont copy) rvalue's data
	data = s.data;
	len = s.len;
	s.data = nullptr;
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

