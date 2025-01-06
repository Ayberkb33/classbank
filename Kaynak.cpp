#include <iostream>

using namespace std;

class Bank {
private:
	float balance = 0;
public:
	void deposit(float addMoney) {

		balance = balance + addMoney;
	}
	void withdraw(float pullMoney) {

		if (pullMoney <= balance) {
			balance = balance - pullMoney;
		}
		else {

			cout << "not enough money!" << endl;
		}
	}
	float showBalance() {

		return balance;
	}
};

int main()
{
	Bank account1;

	do
	{
		int operation;
		cout << "1-Add Money,2-Withdraw Money,3-Show Balance,4-Exit" << endl;
		cin >> operation;

		switch (operation)
		{
		case 1: float addMoney;
			cin >> addMoney; account1.deposit(addMoney);
			break;
		case 2:float pullMoney;
			cin >> pullMoney; account1.withdraw(pullMoney);
			break;
		case 3:cout << "your current balance : " << account1.showBalance() << endl;
			break;
		case 4:return 0;
			break;
		}

	} while (true);

	return 0;
}