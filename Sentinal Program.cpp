// Age Averager

#include <iostream>
#include <string>
using namespace std;

int main() {

	int age = NULL;
	int numberOfPeople = 0;
	int ageTotal = 0;

	cout << "Enter first person's age or -1 to quit" << endl;
	cin >> age;

	while (age != -1) {
		ageTotal = ageTotal + age;
		numberOfPeople++;

		cout << "Enter the first person's age or -1 to quit: " << endl;
		cin >> age;
	}
	cout << "Number of People entered: " << numberOfPeople << endl;
	cout << "Average age: " << ageTotal/numberOfPeople << endl;

	return 0;
}