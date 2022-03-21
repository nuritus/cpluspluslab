//����� 6  ����� 6
//����� ����� ������� 
//��� ���� ��� ��� ���� ���, �� �� �����

#include <iostream>
using namespace std;

class Document {
	string name;  // Doc name.
public:
	void setName(string myname) {
		name = myname;
	}
	string getName() const {
		return name;
	}
	void print() const {
		cout << name << endl;
	}
};

class Book : public Document {
	long pageCount;
public:
	void setNumOfPages(long num) {
		pageCount = num;
	}
	void print() const {
		Document::print();
		cout << pageCount << endl;
	}
};


int main()
{
	Document d1;    
	Book b1;
	d1.setName("Diploma");
	b1.setName("Pinocchio" );
	b1.setNumOfPages(543);

	d1.print();
	b1.print();
	b1.Document::print();

	Document& d2 = b1;
	d2.print(); //�� �����?

	Book& b2 = d1; //error

	Book& b2 = (Book)d1; //�� �����, �� ���� ������ ���� ���� ���� ������



}


