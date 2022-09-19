#ifndef PEOPLE_H
#define PEOPLE_H
#include "Birthday.h"
#include <iostream>
#include <string>
using namespace std;

class People {
	public:
		People(string x, Birthday bd);
		void printInfo();

	private:
		string name;
		Birthday dateOfBirth;
	};

#endif
