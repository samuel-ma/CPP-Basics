#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(){}

void Sally::printSomething() {
	cout << "I am a regualar function" << endl;
}

void Sally::printSomething2() const{
	cout << "I am the constant function" << endl;
}