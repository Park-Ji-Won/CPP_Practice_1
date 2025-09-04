#include <iostream>
#include <random>
#include <ctime>

int main() {
	std::mt19937 gen(time(0));
	std::uniform_int_distribution<int> dis(1, 100);

	int answer = dis(gen);
	int guess = 0;
	int attempts = 0;

	std::cout << "숫자 추측 게임을 시작합니다!" << std::endl;
	std::cout << "제가 생각한 1부터 100사이의 숫자를 맞춰보세요." << std::endl;

	while (true) {
		std::cout << "\n숫자를 입력하세요.: ";
		std::cin >> guess;

		if (std::cin.fail()) {
			std::cout << "잘못된 입력입니다. 숫자만 입력해주십시오." << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue;
		}

		attempts++;

		if (guess < answer) {
			std::cout << "더 큰 숫자입니다(Up)" << std::endl;
		}
		else if (guess > answer) {
			std::cout << "더 작은 숫자입니다(Down)" << std::endl;
		}
		else {
			std::cout << "\n 정답입니다. 축하합니다." << std::endl;
			std::cout << "정답은" << answer << "이었습니다." << std::endl;
			std::cout << attempts << "번 만에 맞춰습니다." << std::endl;
			break;
		}
	}

	return 0;
}

//by gemini