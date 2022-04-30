//שיעור 9  דוגמא 6
//תבניתיות וירושה



template <class T>
class Father {
	T* data;
};

template <class T>
class Child : public Father<T>
{ };

class Girl : public Father<int>
{ };

int main() {
	Child <int> zuzik;

	Girl kuskus;

	Father <int>* abale;
	Abale = &kuskus; //comp error
	abale = new Girl(); //comp error


}