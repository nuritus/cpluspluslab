// MyString.h
#pragma once

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
	int len = 0;
	char* str;
public:
	MyString() : str(nullptr), len(0) {} //explicit empty constructor
	MyString(const char* s); //constructor
	MyString(const MyString& ms); //copy constructor
	MyString& operator=(const MyString& ms); //assignment operator
	~MyString(); //destructor

	MyString(MyString&& ms); // move constructor
	MyString& operator=(MyString&& ms); //move assignment operator

	bool operator==(const MyString& ms) const;
	MyString  operator+(const MyString& ms) const;
	MyString  operator* (const int) const;

	friend ostream& operator<<(ostream& os, const MyString& ms);
	friend istream& operator>>(istream& is, MyString& ms);
};
