// שיעור 3 - דוגמא 2
//  מחלקת מערך - וקטור
// זיהוי בנאי מופעל והורס

#include "Vector.h"
#include <iostream>
using namespace std;

void print(Vector vec) {
	for (int i = 0; i < vec.size; i++)
		cout << vec.numbers[i] << ' ';
}

int main() {
	int nums[10];   for (int i = 0; i < 10; i++)    nums[i] = i;
	Vector   vec1,
		vec2(6),
		vec3(4, 8),
		vec4(nums),
		vec5(vec3),
		vec6 = vec1;
	print(vec6);
	return 0;
}
