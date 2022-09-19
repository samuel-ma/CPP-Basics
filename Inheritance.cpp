#include <iostream>
#include <string>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main() {
	//base function
	Mother mom;
	mom.sayName(); 

	//the derived class
	Daughter tina;
	tina.sayName();
}