// שיעור 2 - דוגמא 10
// קבועים בהקשר של מחלקה

class MyClass
{
private:
	int y;
public:
	void ex3()//const 
	{
		//אין התחייבות שהפונקציה לא משנה את הערך של העצם עליו היא פועלת
	}
	int ex4() const
	{
		//y = 6; //comp error!!
		//this-> ex3(); //comp error!!
		return y; //ok
	};
	const int* ex5()
	{	
		y = 8; 
		return &y;
	};
};

int main()
{
	MyClass a;
	 //int* b = a.ex5(); //comp error!!
	 const int* c = a.ex5();

}
