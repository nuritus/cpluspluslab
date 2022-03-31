//שיעור 7  דוגמא 16
// פולימורפיזם של אלגוריתמים
// ע"י שימוש במחלקה מופשטת

#include <iostream>
using namespace std;

class SortAndPrint
{
protected:
	int size;
	virtual void swap(int i, int j) = 0;
	virtual void show(int i) = 0;
	virtual int isSmaller(int i, int j) = 0;
public:
	void setSize(int num);
	void print();
	void bubbleSort();
};

void SortAndPrint::setSize(int num)
{
	size = num;
}

void SortAndPrint::print()
{
	for (int i = 0; i < size; i++)
		show(i);
}

void SortAndPrint::bubbleSort()
{
	for (int last = size - 1; last > 0; last--)
		for (int i = 0; i < last; i++)
			if (isSmaller(i + 1, i))
				swap(i, i + 1);
}
class Numbers : public SortAndPrint
{
private:
	int* vec;
	void swap(int i, int j) override final;
	int isSmaller(int i, int j) override final;
	void show(int i) override final;
public:
	Numbers(int);
	~Numbers() { if (vec) delete[] vec; }
};

Numbers::Numbers(int numSize)
{
	setSize(numSize);
	vec = new int[numSize];
	srand((unsigned)time(nullptr));
	for (int i = 0; i < numSize; i++)
		vec[i] = rand() % 100;
}

int Numbers::isSmaller(int i, int j)
{
	return (vec[i] < vec[j]);
}

void Numbers::swap(int i, int j)
{
	int tmp = vec[i];
	vec[i] = vec[j];
	vec[j] = tmp;
}

void Numbers::show(int i)
{
	cout << i << " : " << vec[i] << endl;
}
class Strings : public SortAndPrint
{
private:
	char words[4][20];
	void swap(int i, int j) override final;
	int isSmaller(int i, int j) override final;
	void show(int i) override final;
public:
	Strings(const char*, const char*, const char*, const char*);
};

Strings::Strings(const char* w0, const char* w1, const char* w2, const char* w3)
{
	setSize(4);
	strcpy_s(words[0], strlen(w0) + 1, w0);
	strcpy_s(words[1], strlen(w1) + 1, w1);
	strcpy_s(words[2], strlen(w2) + 1, w2);
	strcpy_s(words[3], strlen(w3) + 1, w3);
}

int Strings::isSmaller(int i, int j)
{
	return strcmp(words[i], words[j]) < 0;
}

void Strings::swap(int i, int j)
{
	char tmp[20];
	strcpy_s(tmp, strlen(words[i]) + 1, words[i]);
	strcpy_s(words[i], strlen(words[j]) + 1, words[j]);
	strcpy_s(words[j], strlen(tmp) + 1, tmp);
}

void Strings::show(int i)
{
	cout << i << " : " << words[i] << endl;
}
int main()
{
	Numbers nums(5);
	cout << "Print Before Sort:\n";
	nums.print();
	nums.bubbleSort();
	cout << "Print After Sort:\n";
	nums.print();

	Strings words("Sara", "Rivka", "Rachel", "Leah");
	cout << "Print Before Sort:\n";
	words.print();
	words.bubbleSort();
	cout << "Print After Sort:\n";
	words.print();
	return 0;
}
