//שיעור 11  דוגמא 3
//האיטרטורים מאפשרים להפעיל אלגוריתמים
//איתחולים נוספים, שימוש באיטרטור

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void main()
{
	vector<int> vec;
	vec.push_back(7); 
	vec.push_back(9);
	vec.push_back(3);  
	vec.push_back(2);
	vector<int> ::iterator it1 = vec.begin();
	vector<int> ::iterator it2 = vec.end();
	vector<int> ::iterator it3;

	for (it3 = it1; it3 != it2; ++it3)  cout << *it3 << "\t";
	
	sort(it1, it2);//ברירת מחדל - מהקטן לגדול
	
	for (it3 = it1; it3 != it2; ++it3)  cout << *it3 << "\t";
}