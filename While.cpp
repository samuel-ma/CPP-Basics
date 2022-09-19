#include <iostream>
#include <string>
using namespace std;

int main() {

	int x = 1;
	int number;
	int sum = 0;

	while (x <= 5) {
		cin >> number;
		sum = sum + number;
		x++;
	}

	cout << "The sum is: " << sum << endl;
	
	return 0;
}