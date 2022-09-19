#include <iostream>
#include <string>
using namespace std;

//function to calculate the volume 
int volume(int l=1, int w=1, int h=1) {
	return l * w * h;
}

int main() {
	cout << volume(12) << endl;
}