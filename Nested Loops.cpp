#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;
	cout << "How old are you?" << endl;
	cin >> x;

	if (x > 22) {
		if (x > 60) {
			cout << "Your are old!" << endl;
		}
	}
	else {
		cout << "Your too young, get a job" << endl;
	}

	return 0;
}