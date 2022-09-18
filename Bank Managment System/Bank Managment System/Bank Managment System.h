#include<iostream>
using namespace std;

class Generic {
protected:
	double balance;
	int NoOfDeposits;
	int NoOfWithdraws;
	double AnnualInterestRate;
	double MonthlyServiceCharges;
	double totalDepposit;
	double begBalance;
	double amountwithdrawed;
public:
	Generic() {
		balance = 0;
		AnnualInterestRate = 0.0;
		NoOfWithdraws = 0;
		NoOfDeposits = 0;
		MonthlyServiceCharges = 0;
		totalDepposit = 0;
		begBalance = 0;
		amountwithdrawed = 0;
	}
	Generic(double balance, double AnnualInterestRate) {
		this->balance = balance;
		this->AnnualInterestRate = AnnualInterestRate;
		NoOfWithdraws = 0;
		NoOfDeposits = 0;
		MonthlyServiceCharges = 0;
		totalDepposit = 0;
		begBalance = balance;
		amountwithdrawed = 0;
	}

	virtual void deposit(double amount) {
		balance += amount;
		NoOfDeposits++;
		totalDepposit += amount;
	}
	virtual double getTotalDep() {
		return totalDepposit;
	}
	virtual double getmonthlyCharges() = 0;
	virtual void withdraw(double amount) {
		amountwithdrawed += amount;
		balance -= amount;
		NoOfWithdraws++;
	}
	virtual double amountwithdraw() {
		return amountwithdrawed;
	}
	double virtual getbegAl() {
		return begBalance;
	}
	int getwithdraws() {
		return NoOfWithdraws;
	}
	virtual void calcInt() {
		double monthlyInterestRate = (AnnualInterestRate/12);
		double monthlyInterest = balance * monthlyInterestRate;
		balance = balance + monthlyInterest;
	}
	virtual double getbalance() {
		return balance;
	}
	virtual void monthlyProc() {
		balance= balance-MonthlyServiceCharges;
		calcInt();
		NoOfWithdraws = 0;
		NoOfDeposits = 0;
		MonthlyServiceCharges = 0;
		begBalance = balance;
	}
};
