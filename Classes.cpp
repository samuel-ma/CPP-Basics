#include <iostream>
#include <string>
using namespace std;

//using objects and classes
class NewClass {
	public:
		void printSomething() {
			cout << "Preaching to the choir" << endl;
		}
};

int main(){
	NewClass newObject;
	newObject.printSomething();
	return 0;
}