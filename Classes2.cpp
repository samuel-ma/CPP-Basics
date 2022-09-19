#include <iostream>
#include <string>
using namespace std;

class NewClass {
	public:
		void setName(string x) {
			name = x;
		}

		string getName() {
			return name;
		}

	private:
		string name;

};

int main(){
	NewClass myObject;
	myObject.setName("Samuel Majok");
	cout << myObject.getName();
	return 0;
}