#include <iostream>
#include <string>
using namespace std;

class Sam {
	public:
		Sam() { samVar = 0; }

	private:
		int samVar;

		friend void samFriend(Sam& sfo);
};

void samFriend(Sam& sfo) {
	sfo.samVar = 99;
	cout << sfo.samVar << endl;
}

int main() {
	Sam bob;
	samFriend(bob);
}