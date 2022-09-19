#include <string>
#include <iostream>
using namespace std;

void passByValue(int x) {
	x = 99;
}

void passByReference(int* x) {
	*x = 55;
}

int main() {
	int betty = 10;
	int sandy = 30;

	passByValue(betty);
	passByReference(&sandy);

	cout << "Betty is now " << betty << endl;
	cout << "Sandy is now " << sandy << endl;

}