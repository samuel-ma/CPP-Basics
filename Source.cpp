#include <iostream>
#include <string>
using namespace std;

//passing in parameters in a function

int addNumbers(int x, int y) {
	int sum = x + y;
	return sum;
}

int main() {
	cout << "Your answer is: " << addNumbers(2, 2) << endl;
	return 0;
}