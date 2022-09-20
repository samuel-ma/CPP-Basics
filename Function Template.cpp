#include <iostream>
using namespace std;

//function templates create generic datatypes
template <class samy>
samy addCrap(samy a, samy b) {
	return a + b;
}

int main() {
	int x = 43, y = 37, z;
	z = addCrap(x, y);
	cout << z << endl;
}