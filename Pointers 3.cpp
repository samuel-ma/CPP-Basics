#include <iostream>
#include <string>
using namespace std;

//How pointers work with Math

int main() {
	int sam[5];
	int* p = &sam[0];
	int* p1 = &sam[1];
	int* p2 = &sam[2];


	cout << "Pointer 0 is at " << p << endl;
	cout << "Pointer 1 is at " << p1 << endl;
	cout << "Pointer 2 is at " << p2 << endl;

	p += 2;
	cout << "Pointer 0 is at " << p << endl;

}