#include <iostream>
#include <string>
#include "Birthday.h"
#include "People.h"
using namespace std;

int main() {
	Birthday birthObj(12, 01, 1999);
	People samMa("Samuel Ma", birthObj);
	samMa.printInfo();
}
 