#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	
	//simple for loop to loop to 10
	for (int x = 1; x <= 10; x++) {
		cout << x << endl;
	}

	//for loop to calculate your investments in the stock market
	float a;
	float p = 10000;
	float r = 0.03;

	for (int i = 1; i <= 30; i++) {
		a = p * pow(1 + r, i);
		cout << i << " ------ " << a << endl;
	}

}