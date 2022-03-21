//שיעור 6  דוגמא 5
//ירושה פשוטה ציבורית 
//זימון מתודות. הסתרה במקרה של שם זהה


#include <iostream>
using namespace std;

class father {
public:
	void message(){ cout << "father - message"; }
	void print() { cout << "father–print"; }
};

class child : public father {
public:
	void print() { cout << "child–print"; }
};

int main() {
	father papa;
	child zuzik;
	zuzik.message();
	papa.print();
	zuzik.print();//הסתרה של פונקציית האב

	zuzik.father::print();
}
