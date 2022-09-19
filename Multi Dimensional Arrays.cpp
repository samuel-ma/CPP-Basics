#include <string>
#include <iostream>
using namespace std;

int main() {
	//Two Dimensional Arrays
	//The first array represents the rows
	//The second array represent the columns

	int sam[2][3] = { {11,22,33}, {88,99,00} };
	cout << sam[0][2] << endl;

	int jess[2][3] = { {1,2,3}, {7,8,9} };
	for (int row = 0; row < 2; row++) {
		for (int column = 0; column < 3; column++) {
			cout << jess[row][column] << " ";
		}
		cout << endl;
	}
}