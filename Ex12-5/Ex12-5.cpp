#include <iostream>
#include <fstream>
using namespace std;

struct workers
{
	long id;
	char name[15];
	float hours;
	float salary;
};

#define EX 2

#if EX==1
int main()
{
	ofstream f1;
	f1.open("workers.bin"); //if (!f1) …
	workers  worker;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter workers name ";
		cin >> worker.name;
		cout << "enter " << worker.name << "'s id ";
		cin >> worker.id;
		cout << "enter number of hours ";
		cin >> worker.hours;
		cout << "enter a salary per hour ";
		cin >> worker.salary;

		f1.write((char*)&worker, sizeof(workers));
	}

	f1.close();

	fstream f2("workers.bin");
	f2.read((char *)&worker, sizeof(workers));
	while (!f2.eof())
	{
		cout << worker.name <<' ' << worker.id 
			<< ' ' << worker.hours << ' ' << worker.salary << endl;
		f2.read((char *)&worker, sizeof(workers));
	}

	f2.close();
	return 0;
}
#elif EX==2

int main()
{
	workers worker;
	ifstream f2("workers.bin");

	if (!f2)
	{
		cout << "could not open the file\n";
		return 0;
	}

	f2.read((char*)&worker, sizeof(workers));
	
	while (!f2.eof())
	{
		float salary;
		salary = worker.hours * worker.salary;
		if (worker.hours > 45)
			salary += (worker.hours - 45) * 0.5 * worker.salary;
		cout << worker.name << '\t' << worker.id
			<< '\t' << "salary: " << salary << endl;

		f2.read((char*)&worker, sizeof(workers));
	}

	return 0;
}
#endif