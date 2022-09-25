#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//creating files the normal way
	ofstream samFile;
	samFile.open("tuna.txt");

	samFile << "Loves eating tuna, serious Tuna Fisher" << endl;
	samFile.close();

	//creating files using constructors
	ofstream officeFile("beefjerky.txt");

	if (officeFile.is_open()) {
		cout << "File Open" << endl;
	}
	else {
		cout << "Files closed, you messed up" << endl;
	}

	officeFile << "Loves beef jerky, serious herder" << endl;
	officeFile.close();

}