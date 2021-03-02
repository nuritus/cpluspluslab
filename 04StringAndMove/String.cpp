#include <iostream>
#include <cstring>
using namespace std;

#include "String.h"

String::String(const char* p) 
{
	 _len = strlen(p);
	_data = new char[_len+1];
	strcpy_s(_data, _len+1, p);
}

String::String(String&& s)
{
	cout << "move ctor" << endl;
	_data = s._data; // steal (dont copy) rvalue's data
	_len = s._len;
	s._data = nullptr;
}

