#include <iostream>
#include <vector>
#include <string>

class Account {
private:
	std::string accountNumber;
	std::string ownerName;
	double balance;

public:
	Account(std::string num, std::string name, double bal) {
		accountNumber = num;
		ownerName = name;
		balance = bal;
	}
	
	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			std::cout << amount << "원 이 입금되었습니다. 현재 잔액: " << balance << "원" << std::endl;
		} else {
			std::cout << "유효하지 않은 금액입니다." << std::endl;
		}
	}

	void withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			std::cout << amount << "원이 출금되었습니다. 현재 잔액: " << balance << "원" << std::endl;
		} else {
			std::cout << "잔액이 부족하거나 유효하지 않은 금액입니다." << std::endl;
		}
	}

	void display() {
		std::cout << "---------------------------------\n";
		std::cout << "계좌변호: " << accountNumber << "\n";
		std::cout << "예금주: " << ownerName << "\n";
		std::cout << "잔액: " << balance << "\n";
		std::cout << "---------------------------------\n";
	}

	std::string getAccountNumber() {
		return accountNumber;
	}
};

void showMenu();

int main() {
	std::vector<Account> accounts;
	int choice;
	bool quit = false;

	while (!quit) {
		showMenu();
		std::cout << "선택: ";
		std::cin >> choice;
	}
}