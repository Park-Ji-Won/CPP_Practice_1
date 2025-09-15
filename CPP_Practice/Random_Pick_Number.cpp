#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
	mt19937 gen(time(0));
	uniform_int_distribution<int> dis(1, 100);

	int answer = dis(gen);
	int guess = 0;
	int attempts = 0;

	cout << "숫자 추측 게임을 시작합니다!" << endl;
	cout << "제가 생각한 1부터 100사이의 숫자를 맞춰보세요." << endl;

	while (true) {
		cout << "\n숫자를 입력하세요.: ";
		cin >> guess;

		if (cin.fail()) {
			cout << "잘못된 입력입니다. 숫자만 입력해주십시오." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}

		attempts++;

		if (guess < answer) {
			cout << "더 큰 숫자입니다(Up)" << endl;
		}
		else if (guess > answer) {
			cout << "더 작은 숫자입니다(Down)" << endl;
		}
		else {
			cout << "\n 정답입니다. 축하합니다." << endl;
			cout << "정답은 " << answer << " 이었습니다." << endl;
			cout << attempts << " 번 만에 맞춰습니다." << endl;
			break;
		}
	}

	return 0;
}

//by gemini