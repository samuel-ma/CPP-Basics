#include <iostream>
#include <string>
using namespace std;

int main() {
	int fish = 4;
	cout << &fish << endl;

	int* fishPointer;
	fishPointer = &fish;
	cout << fishPointer << endl;

}