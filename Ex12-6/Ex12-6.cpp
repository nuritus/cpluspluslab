#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char temp;
	ifstream inFile("myfile.txt", ios::in | ios::binary);
	inFile >> temp; // 1 הסמן יתקדם ל
	inFile.get((temp)); // 2 הסמן יתקדם ל
	cout << inFile.tellg() << endl; // print : 2

	ofstream outFile("myfile.txt", ios::out | ios::binary);
	outFile << "this is 16 chars";
	cout << outFile.tellp() << endl; // print 16

	fstream File("myfile.txt", ios::out | ios::in);
	File << "this is a test";
	File.seekg(3, ios::beg);
	File.get(temp);

	cout << File.tellg() << endl;

	ifstream is("myfile.txt", ifstream::binary);
	if (is)
	{
		// get length of file:
		is.seekg(0, ios::end);
		int length = is.tellg();
		is.seekg(0, ios::beg);
		char* buffer = new char[length];// allocate memory:		
		is.read(buffer, length);// read data as a block
		is.close();
		cout.write(buffer, length);// print content to screen
		delete[] buffer;
	}

}
