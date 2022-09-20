#include <iostream>
#include <string>
using namespace std;

//using a function template to compare two different datatypes
template <class First, class Second>
First smaller(First a, Second b) {
	return (a < b ? a : b);
}

int main() {
	int x = 94;
	double y = 489.4;

	cout << smaller(x, y) << endl;
}
