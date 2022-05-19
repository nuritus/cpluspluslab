//שיעור 11  דוגמא 10
// ביטויי למבדה
//מבנה, הפעלה והחזרת ערך

#include <iostream>
using namespace std;


int main() {
	[]() {cout << "hello world" << endl; } ();

	[](int i) {cout << ":" << i << ":"; } (42);

	int num = 42;
	auto func1 = [](int i) {cout << ":" << i << ":"; };
	func1(num);

	cout << [](int x, int y)->int {return x + y; } (2, 3);

	cout << [](int x, int y) {return x + y; } (2, 3);

	cout << [](int x, int y) {
		if (x > y) return x;
		else return y; } (2, 3);

		cout << [](int x, int y) {return x + y + 0.5; } (2, 3);

		cout << [](int x, int y)->double {return x + y; } (2, 3);

		cout << [](int x, int y) ->double {
			if (x > y) return x;
			else return y + 0.5; }  (2, 3);



		float arr[] = { 2.3 , -3, 4.5, -10.6 };
		void* p = &arr;
		qsort(p, 4, 4,
		[](const void* a, const void* b)->
			int {return (*(float*)b - *(float*)a); });
		for (int i = 0; i < 4; i++)
			cout << arr[i] << " ";

}
