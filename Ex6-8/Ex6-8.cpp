//����� 6  ����� 7
//������ �����, ������� ���� �����
//���� �� ������ ���� - �� ����� �����

class Animal
{
private:   	float cagesize;
protected:	int itemnum;
public:		bool carnivorous;
};
class Fish : Animal //�� �� ������ ���� - �� ����� �����. �� ����� ��� ���� ����
{
private:
	float waterdepth;
protected:
	bool freshwater;
public:
	int* feeding;
	void func() {
		carnivorous = true;
	}
};

class Amphibian : public Fish
{
public:
	void fun() {                                        }
};

int main()
{
	Amphibian catfish;
	catfish.feeding = new int[7];

}
