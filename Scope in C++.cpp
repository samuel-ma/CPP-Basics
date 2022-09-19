#include <string>
#include <iostream>
using namespace std;

//global scope
int x = 10;

//logical scope
int Sam() {
	int x = 20;
	cout << x << endl;

	//use the urenary scope operator to access the global scope
	cout << ::x << endl;
	return 0;
}

int main() {
	Sam();
	cout << x << endl;
	return 0;
}