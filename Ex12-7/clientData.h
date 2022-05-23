#pragma once
#include <iostream>
#include<string>
using namespace std;

class ClientData
{
private:
	int accountNumber;
	char name[15];
	double balance;
public:
	ClientData(int accountNum = 0, string naMe = "", double balaNce = 0.0);
	void setAccountNumber(int accountNum);
	int getAccountNumber() const;
	void setName(string tName);
	string getName() const;
	void setBalance(double balanceValue);
	double getBalance() const;
	friend ostream& operator<< (ostream&, ClientData&);
}; // end class CientData
