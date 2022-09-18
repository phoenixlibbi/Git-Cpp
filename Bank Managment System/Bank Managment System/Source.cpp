#include<iostream>
#include<string>
#include"Bank Managment System.h"
#include"savingAcc.h"
#include"checkAcc.h"
using namespace std;

int main() {
	Generic* bms = nullptr;
	char choices = '0';
	bool flag = true;
	do {
		cout << "which type of acc you wanna open?";
		cout << endl << "0-saving\n1-check" << endl;
		cin >> choices;

		if (choices == '0') {
			bms = new savingAcc;
		}
		else if (choices == '1') {
			bms = new checkAcc;
		}
		else {
			cout << "enter valid option.";
			flag = false;
		}
		/*cout << "enter choice:";
		cin >> choices;*/
		if (choices == '1' || choices == '0') {
			flag = true;
		}
	} while (flag == false);
	char menu_choices;
	while (true) {
		do {
			cout << "menu" << endl;
			cout << "0: depsoit\n";
			cout << "1: withdraw for saving\n";
			cout << "2: checking acc balance\n";
			cout << "3: acc history\n";
			cout << "4: exit\n";
			cin >> menu_choices;
		} while (menu_choices > '4' || menu_choices < '0');
		double amount = 0;
		switch (menu_choices) {
		case '0':
			cout << "how much amount you wanna deposit:";
			cin >> amount;
			bms->deposit(amount);

			break;
		case '1':
			cout << "how much money you want to withdraw:";
			cin >> amount;
			bms->withdraw(amount);
			break;
		case '2':
			cout << "your current balance is:" << bms->getbalance();
			break;
		case '3':
			cout << "Account History:\n";
			cout << "total number of deposits:" << bms->getTotalDep() << endl;
			cout << "total number of withdraws:" << bms->getwithdraws() << endl;
			cout << "total amount of withdraws:" << bms->amountwithdraw() << endl;
			cout << "monthly service charges are:" << bms->getmonthlyCharges() << endl;
			cout << "ending balance:" << bms->getbalance() << endl;
			break;
		case '4':
			exit(0);
		}
	}
	return 0;
}