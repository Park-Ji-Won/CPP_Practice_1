﻿#include <iostream>
using namespace std;

class Tower {
private:
	int height;
public:
	Tower() {
		height = 1;
	}

	Tower(int h) {
		height = h;
	}

	int getHeight() {
		return height;
	}
};

int main() {
	Tower myTower;//1미터
	Tower seoulTower(100);//100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}