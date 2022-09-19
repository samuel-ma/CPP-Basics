#include <iostream>
#include <string>
using namespace std;

void printNumber(int x) {
	cout << "The Integer you entered is: " << x << endl;
}

void printNumber(float x) {
	cout << "The Float you entered is: " << x << endl;
}

int main() {
	int a = 44;
	float b = 22.22;

	printNumber(a);
	printNumber(b);

}