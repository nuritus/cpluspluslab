//שיעור 6  דוגמא 7
//ירושות שונות, והרשאות גישה בהתאם
//כאשר לא כותבים כלום - זו ירושה פרטית

class Animal
{
private:   	float cagesize;
protected:	int itemnum;
public:		bool carnivorous;
};
class Fish : Animal //אם לא כותבים כלום - זו ירושה פרטית. יש לבדוק למה מותר לגשת
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
