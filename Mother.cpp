#include "Mother.h"
#include "Daughter.h"
#include <iostream>
using namespace std;

Mother::Mother() {
	cout << "I am the mother constructor" << endl;
}

Mother::~Mother() {
	cout << "Mother de-constructor" << endl;
}