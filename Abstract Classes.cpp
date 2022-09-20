#include <iostream>
using namespace std;


//An abstruct class is a class with a pure virtual function
class Enemy {

	//pure Virtual function
	public:
		virtual void attack() = 0;
};



class Ninja: public Enemy {
public:
	void attack() {
		cout << "I am the ninja class" << endl;
	}
};



class Monster : public Enemy {
public:
	void attack() {
		cout << "I am the monster class" << endl;
	}
};



int main() {
	Ninja n;
	Monster m;

	Enemy* enemy1 = &n;
	Enemy* enemy2 = &m;

	enemy1->attack();
	enemy2->attack();
}