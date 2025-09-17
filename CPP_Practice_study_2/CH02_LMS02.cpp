#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char line[100];

	cout << "문자를 입력해 주세요 ";
	cin.getline(line, 100, '\n');

	int count = 0;

	int length = strlen(line);

	for (int i = 0; i < length; i++) {
		if (line[i] == 'c' || line[i] == 'C') {
			count++;
		}
	}

	cout << "C 문자수 : " << count << endl;
}