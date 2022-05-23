#include <iostream>
#include <fstream>
#include<string>
using namespace std;

#define EX 4

#if EX==1

int main()
{
	string fname, lname;
	int age;
	ifstream in("kelet.txt");


	if (!in)
	{
		cout << "could not open file.\n";
		return 0;
	}

	while (in >> fname >> lname >> age)
	{
		cout << fname << ' ' << lname;
		if (age > 20)
			cout << "can work" << '\n';
		else
			cout << "can’t work" << '\n';
	}
	return 0;
}
#elif EX==2
int main()
{
	ifstream f1; //file for reading
	ofstream f2; //file for writing
	char name[10];	float grade;

	f1.open("students.txt"); //open file for reading, file must be exist
	if (!f1) { cout << "File could not be opened.\n"; return 0; }

	//f2.open("grades.txt", ios::in); //open file for writing, but succeed only if file exist
	f2.open("grades.txt"); //open file for writing, if not exist, create new file

	if (!f2) { cout << "File could not be opened.\n"; return 0; }

	do {
		//read into 'name' from file f1, using >> operator, 
		//read until the first stopper (\n, \t, ' ')
		f1 >> name;
		cout << "enter " << name << "'s grade ";
		cin >> grade;
		//write 'name' into file f1 using << opertor
		f2 << name << '\t' << grade << endl;
	} while (!f1.eof());

	f1.close(); //don't forget to close
	f2.close(); //don't forget to close
	return 0;
}
#elif EX==3

int main()
{
	char myline[150];
	int i = 1;
	string stline;

	ifstream txt;
	txt.open("text.txt");

	if (!txt) { cout << "File could not be opened.\n"; return 0; }

	//read from file txt using getline function
	//read until the end of line (\n)
	//read 150 chars into 'myline' 
	txt.getline(myline, 150);
	//txt.getline((char*)stline.c_str(), 150);

	while (!txt.eof())
	{
		cout << i << ":\t" << myline << endl;
		txt.getline(myline, 150);
		i++;
	}
	return 0;
}

#elif EX==4
int main()
{
	int line = 0, words = 0, chars = 0;
	ifstream txt;
	txt.open("students.txt");

	//read from file txt using get function
	//read only one char
	char c = txt.get();
	char tav = ' ';

	while (!txt.eof())
	{
		if (c != ' ' && c != '\t' && c != '\n') chars++;
		if ((c == ' ' || c == '\t' || c == '\n')
			&& tav != ' ' && tav != '\t' && tav != '\n') words++;
		if (c == '\n' && tav != '\n')
		{
			line++;	words++;
		}

		tav = c;
		c = txt.get();
	}
	cout << "# of characters: " << chars << endl;
	cout << "# of words: " << words << endl;
	cout << "# of lines: " << line << endl;
	txt.close();
	return 0;
}

#endif