//Recursion is the idea that a function can call itself
//Recursive functions are best used with a use case to avoid errors

#include <iostream>
#include <string>
using namespace std;

int factorialFinder(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x * factorialFinder(x - 1);
	}
}

int main() {
	cout << factorialFinder(5) << endl;
}