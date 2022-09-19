#include <iostream>
#include <string>
using namespace std;

int main() {
	//simple do while loop
	cout << "Enter a number btn 1 and 10" << endl;
	int x;
	cin >> x;

	do {
		if (x >= 1 && x <= 10) {
			cout << "The number you entered is " << x << endl;
		}
		x++;
	} while (x <= 10);

}