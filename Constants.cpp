#include <iostream>
#include <string>
#include "Sally.h"
using namespace std;

int main() {

	Sally sallyObj;
	sallyObj.printSomething();

	const Sally constObj;
	constObj.printSomething2();
}