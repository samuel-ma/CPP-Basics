#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream theFile("players.txt");
	cout << "Enter player's ID, Name, and Credit " << endl;
	cout << "press Ctrl+Z to quit " << endl;

	int idNumber;
	string name;
	double credit;

	while (cin >> idNumber >> name >> credit) {
		theFile << idNumber << " " << name << " " << credit << endl;

	}
}