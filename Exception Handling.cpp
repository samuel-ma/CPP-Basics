#include <iostream>
using namespace std;

int main() {

	try {
		int momsAge = 40;
		int daughtersAge = 58;

		if (daughtersAge > momsAge) {
			throw 99;
		}
	}
	catch (int x) {
		cout << "Daughter can't be older than mom, ERROR NUMBER: " << x << endl;
	}

	try {
		int num1;
		cout << "Enter first number: " << endl;
		cin >> num1;

		int num2;
		cout << "Enter second number: " << endl;
		cin >> num2;

		if (num2 == 0) {
			throw 0;
		}

		cout << num1 / num2 << endl;
	}
	catch (...) {
		cout << "You can't divide by 0." << endl;
	}

}