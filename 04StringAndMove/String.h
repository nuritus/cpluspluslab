#pragma once
#include <iostream>
#include<cstring>
using namespace std;

class String 
{
	int _len = 0; 
	char* _data;
public:
	String() : _data(nullptr) {}
	String(const char* p);
	~String() { delete[] _data; }
	// copy constructor
	String(const String& s) : String(s._data) { cout << "cctor\n"; }
	// move constructor
	String(String&& s);

	int Length() const { return _len; }
	bool Find(const String& s) const { return strstr(_data, s._data) != nullptr; }
	//strstr - Locate substring: Returns a pointer to the first occurrence of str2 in str1, or a null pointer if str2 is not part of str1.
	
	void print() { cout << _data << endl; }
};
