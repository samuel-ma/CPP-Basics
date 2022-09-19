#include <iostream>
#include <string>
using namespace std;

//if statements, (flow)
int main(){
	int x = 22;

	if (x > 10) cout << "Greater than 10" << endl;
	else if (x < 10) cout << "Less than 10" << endl;
	else {
		cout << "Ambiguous" << endl;
	}

	return 0;
}