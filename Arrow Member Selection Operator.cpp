#include <iostream>
#include <string>
using namespace std;

class Sam {
	public:	
		string name = "Samuel Ma";
		int age = 22;

		void printName() {
			cout << "My name is " << name << endl;
		};

		void printAge() {
			cout << "I am " << age << " years old." << endl;
		}

};

int main() {
	Sam myObject;
	Sam* samPointer = &myObject;

	//access the properties in the class using the arrow method
	samPointer->printName();

	//access the properties in the class using the object method
	samPointer->printAge();
}