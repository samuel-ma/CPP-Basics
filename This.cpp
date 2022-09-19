#include <iostream>
#include <string>
#include "Hannah.h"
#include <cstdlib>
using namespace std;

int main() {
	Hannah ho(22);
	ho.printSomething();
	cout << "Memory address of ho is " << &ho << endl;

}