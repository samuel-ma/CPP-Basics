#include <iostream>
#include <string>
using namespace std;

class MyClass {
	public:
		//constructors
		MyClass(string z) {
			setName(z);
		}
		void setName(string x) {
			name = x;
		}
		string getName() {
			return name;
		}
		private:
			string name;
};

int main() {
	MyClass myObject("Samuel Majok");
	cout << "My name is " << myObject.getName() << endl;
	return 0;
}