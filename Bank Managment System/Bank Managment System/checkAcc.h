#include<iostream>
using namespace std;

class checkAcc :public Generic {
public:
	checkAcc() {

	}
	void withdraw(double amount) {
		if (balance - amount < 0) {
			Generic::withdraw(15);
		}
		Generic::withdraw(amount);
	}
	void monthlyProc() {
		MonthlyServiceCharges = 5 + (0.10 * NoOfWithdraws);
		Generic::monthlyProc();
	}
	double getmonthlyCharges() {
		return  (MonthlyServiceCharges + (5 + (0.10 * NoOfWithdraws)));
	}
};