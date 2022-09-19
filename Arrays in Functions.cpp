#include <iostream>
#include <string>
using namespace std;

void printArray(int newArray[], int sizeOfArray) {
	for (int x = 0; x < sizeOfArray; x++) {
		cout << "The Array is " << newArray[x] << endl;
	}
}

int main() {
	int sam[3] = { 1, 2 ,3 };
	int jess[6] = { 23, 55, 32, 57, 99, 64 };

	printArray(sam, 3);
	printArray(jess, 6);

}