#include "Hannah.h"
#include <iostream>
using namespace std;

Hannah::Hannah(int num) : h(num)
{

}

void Hannah::printSomething() {
	cout << "H = " << h << endl;
	cout << "This->h = " << this->h << endl;
	cout << "(*this).h = " << (*this).h << endl;
}
