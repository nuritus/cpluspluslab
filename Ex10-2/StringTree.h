#pragma once
#include "SearchTree.h"
class StringTree :public SearchTree<string>
{
	void process(string& s) override;
};

//////////////////////////////
//StringTree.cpp

void StringTree::process(string& s)
{
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
}
