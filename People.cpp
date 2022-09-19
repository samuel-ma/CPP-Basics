#include "People.h"
#include <iostream>
#include "Birthday.h"
using namespace std;

People::People(string x, Birthday bd) 
	: name(x), dateOfBirth(bd){
}

void People::printInfo() {
	cout << name << " was born on ";
	dateOfBirth.printDate();
}