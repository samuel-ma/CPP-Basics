#include <iostream>
#include <string>
using namespace std;

int main() {
	int age = 31;
	int money = 520;

	//logical operator and (&&)
	if (age > 21 && money > 500) {
		cout << "You are welcome to the club" << endl;
	}

	//logical operator or (||)
	if (age >= 21 || money >= 500) {
		cout << "Your old enough, welcome" << endl;
	}

}