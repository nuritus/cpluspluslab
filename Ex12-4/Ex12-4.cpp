#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void main()
{
	ofstream outFile("myfile.txt", ios::out | ios::binary);
	if (!outFile)
		return;
	char str1[] = "this is a block of data\n"; // יצירת מערך
	outFile.write(str1, sizeof(str1));// כתיבת המערך לקובץ
	outFile.close();
	ifstream inFile("myfile.txt", ios::in | ios::binary);
	if (!inFile)
		return;
	char str2[11]; // יצירת מערך שיקבל את הקריאה מהקובץ
	inFile.read(str2, 10); // קריאת 10 בתים מהקובץ, אל תוך המערך
	str2[10] = '\0'; //.. בכל זאת... 
	//בהדפסה בשורה הבאה נצטרך לדעת עד היכן להדפיס
	cout << str2;
	inFile.close();
}
