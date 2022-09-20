#include <iostream>
using namespace std;

class Enemy {
protected:
	int attackPower;

public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};



class Ninja : public Enemy {
public:
	void attack() {
		cout << "I am a ninja, ninja chop - "<< attackPower << endl;
	}
};



class Monster : public Enemy {
public:
	void attack() {
		cout << "I am a monster, rraahhhh - " << attackPower << endl;
	}
};



int main() {
	Ninja n;
	Monster m;
	Enemy* enemy1 = &n;
	Enemy* enemy2 = &m;

	enemy1->setAttackPower(20);
	enemy2->setAttackPower(40);

	n.attack();
	m.attack();
}