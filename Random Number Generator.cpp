#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main() {
	//srand changes the number
	//time(0) changes the seconds
	srand(time(0));
	
	//rand creates random numbers btn one and six
	for (int i = 1; i < 20; i++) {
		cout << 1+(rand() % 6) << endl;
	}
}