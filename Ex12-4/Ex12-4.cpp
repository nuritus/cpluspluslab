#include <iostream>
#include <fstream>
#include<string>
using namespace std;

void main()
{
	ofstream outFile("myfile.txt", ios::out | ios::binary);
	if (!outFile)
		return;
	char str1[] = "this is a block of data\n"; // ����� ����
	outFile.write(str1, sizeof(str1));// ����� ����� �����
	outFile.close();
	ifstream inFile("myfile.txt", ios::in | ios::binary);
	if (!inFile)
		return;
	char str2[11]; // ����� ���� ����� �� ������ ������
	inFile.read(str2, 10); // ����� 10 ���� ������, �� ��� �����
	str2[10] = '\0'; //.. ��� ���... 
	//������ ����� ���� ����� ���� �� ���� ������
	cout << str2;
	inFile.close();
}
