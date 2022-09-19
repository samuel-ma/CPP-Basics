#include <iostream>
#include <string>
#include "Sally.h"
using namespace std;

int main() {
	Sally a(34);
	Sally b(22);
	Sally c;

	c = a + b;
	cout << "The number for C is now " << c.num << endl;
}