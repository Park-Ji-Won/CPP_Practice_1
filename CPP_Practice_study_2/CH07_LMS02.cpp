#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	friend bool operator!=(Power& op1, Power& op2);
};

void Power::show() {
	cout << "kick = " << kick << ',' << "punch = " << punch << endl;
}

bool operator!=(Power& op1, Power& op2) { // != -> 같지 않으면 true, 같다면 false
	if (op1.kick != op2.kick || op1.punch != op2.punch) // ||(OR) 둘중 하나라도 다르다면 ture, 둘다 같다면 false
		return true;
	else
		return false;
}

int main() {
	Power a(3, 5), b(3, 5), c(1, 2);
	cout << "(a !=b) : " << (a != b) << endl;
	cout << "(a !=c) : " << (a != c) << endl;
}