#include<iostream>
using namespace std;

class savingAcc: public Generic {
private:
	bool status;
public:
	savingAcc() {
		status = false;
	}

	bool getStatus() {
		if (balance > 25) {
			return status = true;
		}
		else {
			return status = false;
		}
	}
	void withdraw(double amount) {
		if (getStatus()) {
			Generic::withdraw(amount);
		}
		else {
			cout << "not possible!";
		}
	}
	void deposit(double amount) {
		if (status == false && balance+amount > 25) {
			status = true;
			Generic::deposit(amount);
		}
		else if(status) {
			Generic::deposit(amount);
		}
		else {
			cout << "bsdk pehla acc toh active kar le!";
		}
	}
	void monthlyProc() {
		if (NoOfWithdraws>4) {
			MonthlyServiceCharges+= (NoOfWithdraws-4);
		}
		Generic::monthlyProc();
		getStatus();
	}
	double getmonthlyCharges() {
		double serviceCharges = 0;
		if (NoOfWithdraws > 4) {
			serviceCharges += (MonthlyServiceCharges + (NoOfWithdraws - 4));
		}
		else {
			serviceCharges = MonthlyServiceCharges;
			return serviceCharges;
		}
	}
};