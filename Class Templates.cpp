#include <iostream>
using namespace std;

//class templates for creating generic datatypes
template <class T>
class Samy {
	T first, second;
public:
	Samy(T a, T b) {
		first = a;
		second = b;
	}
	T bigger();
};

template <class T>
T Samy<T>::bigger() {
	return (first > second ? first : second);
}

int main() {
	Samy <int> so(49, 505);
	cout << so.bigger();
}