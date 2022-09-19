#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int age = 22;

	switch (age) {
		case 16:
			cout << "You can drive now" << endl;
			break;
			
		case 18:
			cout << "You can beat now" << endl;
			break;

		case 21:
			cout << "You can drink now" << endl;
			break;

		default:
			cout << "Your still young" << endl;
	}
}