#include <iostream>
#include <string>
using namespace std;

int main() {

	//a simple array initializer list
	int x[5] = {
		11,22,33,44,55
	};
	cout << x[2] << endl;

	//using a foor loop to access array indexes
	int tuna[5] = { 20, 44, 28, 95, 48 };
	int sum = 0;

	for (int x = 0; x < 5; x++) {
		sum += tuna[x];
		cout << sum << endl;
	}

}