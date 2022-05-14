//שיעור 11  דוגמא 10
//דוגמאות לאלגוריתמים


#define EXAMPLE 1

#if (EXAMPLE == 1) // min

#include <iostream>     
#include <algorithm>    
using namespace std;
int main() {
	system("color 9f");
	cout << "min(1,2)==";
	cout << min(1, 2) << '\n';
	cout << "min(2,1)==";
	cout << std::min(2, 1) << '\n';
	cout << "min('a','z')==";
	cout << std::min('a', 'z') << '\n';
	cout << "min(3.14,2.72)==";
	cout << min(3.14, 2.72) << '\n';
	return 0;
}


#elif(EXAMPLE == 2) // remove algorithm example
#include <iostream>     
#include <algorithm>    
using namespace std;
int main() {
	system("color df");
	int myints[] = { 10,20,30,30,20,10,10,20 };
	// bounds of range:
	int* pbegin = myints;
	int* pend = myints + 8;
	pend = remove(pbegin, pend, 20);
	cout << "range contains:";
	for (int* p = pbegin; p != pend; ++p)
		cout << ' ' << *p;
	return 0;
}


#elif(EXAMPLE == 3) // remove_copy example
#include <iostream>     
#include <algorithm>    
#include <vector>       
using namespace std;
int main() {
	system("color a0");
	int myints[] = { 10,20,30,30,20,10,10,20 };
	vector<int> myvector(8);
	remove_copy
	(myints, myints + 8, myvector.begin(), 20);
	cout << "myvector contains:";
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	return 0;
}

#elif(EXAMPLE == 4) // count/countif algorithm example
#include <iostream>     
#include <algorithm>    
#include <vector>      
using namespace std;
bool IsOdd(int i) { return ((i % 2) == 1); }
int main() {
	system("color 9a");
	// counting elements in array:
	int myints[] = { 5,10,15,20,15,10,5,10 };   // 8 elements
	int mycount = count(myints, myints + 8, 10);
	cout << "10 appears " << mycount << " times.\n";
	// counting elements in container:
	vector<int> myvector(myints, myints + 8);
	mycount = count(myvector.begin(), myvector.end(), 20);
	cout << "20 appears " << mycount << " times.\n";
	mycount = count_if(myvector.begin(), myvector.end(), IsOdd);
	cout << "myvector contains " << mycount << " odd values.";
	return 0;
}
#elif(EXAMPLE == 5)// all_of example
#include <iostream>    
#include <algorithm>   
#include <array>         
using namespace std;
bool divBy3(int i) { return i % 3 == 0; }
int main() {
	system("color 9b");
	array<int, 8> A = { 3,21,33,9,15,27,39,45 };
	if (all_of(A.begin(), A.end(), divBy3))
		cout << "all numbers divid by 3.\n";
	if (all_of(A.begin(), A.end(), [](int i) {return i % 2; }))//עוד לא למדנו - אבל זה קיצור קריאה לפונקציה
		cout << "odd numbers only.\n";
	return 0;
}
#elif(EXAMPLE == 7) //for_each
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void display(vector<int> vec) {
	for_each(vec.begin(), vec.end(),
		[](int s) {cout << s << ' '; });
	cout << endl;
}

int main()
{
	system("color 9c");
	vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(rand() % 100);
	display(vec);
	sort(vec.begin(), vec.end());
	display(vec);
	sort(vec.begin(), vec.end(),
		[](int i, int j) {return i > j; });
	display(vec);
	return 0;
}


#elif(EXAMPLE == 6)// any_of example
#include <iostream>     // std::cout
#include <algorithm>    // std::any_of
#include <array>        // std::array
using namespace std;
int main() {
	system("color 9e");
	array<int, 7> A = { 0,1,-1,3,-3,5,-5 };
	if (any_of(A.begin(), A.end(), [](int i) {return i < 0; }))
		cout << "array includes negative elements\n";
	return 0;
}


#endif


