#include "Sally.h"
#include <iostream>
#include <string>
using namespace std;

Sally::Sally() {
	
}

Sally::Sally(int a) {
	num = a;
}

Sally Sally::operator+(Sally so) {
	Sally brandNew;
	brandNew.num = num + so.num;
	return(brandNew);
}
