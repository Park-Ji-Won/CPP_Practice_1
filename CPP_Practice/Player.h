#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player {
private:
	string name;
	int level;
	int hp;
	int gold;
public:
	Player();
	string getName();
	int getLevel();
	int getHp();
	int getGold();
	void init();
	void printInfo();
	void addGold(int amount);
};

#endif // !PLAYER_H
