//שיעור 5  דוגמא 3
//שימוש במחלקת string

#define A 5 //ניתן לשנות כאן את הערך על מנת לראות את שאר הדוגמאות

#include <iostream>
using namespace std; 

#if A==3

int main()
{
	string words[] = { "lesson","4","sadna","plus", "plus" };
	string s;
	for (int i = 0; i < 5; i++) {
		char letter = words[i].at(0);
		words[i].erase(0, 1);
		words[i].append(1,letter); //המספר מציין כמה פעמים להוסיף את התו
		words[i].append("ay ");
		s += words[i];
	}
	cout << s;
}

#elif A==4

void main()
{
	string str1, str2, str3;
	str1 = "Test string: ";   // string
	str2 = 'x';               // single character
	str3 = str1 + " " + str2 + " ffff ";     // string
	cout << str3 << endl;
	string str = "Hello";
	cout << "str is : " << str << endl;
	str += ", ";
	str += ' ';
	cout << "str is : " << str << endl;
	string s;
	s = str + "World";
	cout << "s is : " << s << endl;
	char ch = '!';
	s += ch;
	cout << "s is : " << s << endl;
}


#elif A==5

void main()
{
	string present = "it is raining";
	string past = present;
	past.replace(3, 5, "was");
	//from place 3 (start from 0),
	// take 5 places and replace with "was"	 "it wasining"
	cout << past << endl;

	string word = "happy.";
	word.replace(5, 3, "!!!"); //happy!!! 
	cout << word << endl;

	string americanFormat = "March 18, 2012";
	string universalFormat;
	int space = americanFormat.find(" ");
	string month = americanFormat.substr(0, space);
	//return sub string of americanFormat, from 0 take space chars 
	cout << "month:" << month << endl;
	int psik = americanFormat.find(",");
	string day = americanFormat.substr(space, psik - space);
	cout << "day:" << day << endl;
	string year =
		americanFormat.substr(psik + 1, americanFormat.length() - (psik + 1));
	cout << "year:" << year << endl;

	//check input
	bool check = true;
	if (atoi(year.c_str()) < 1970 || atoi(year.c_str()) > 2012)
		check = false;
	if (check)
		universalFormat = day + " " + month + year;
	cout << "universalFormat:" << universalFormat << endl;
}


#endif




