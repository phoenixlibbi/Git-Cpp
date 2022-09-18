#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int number = 0, sum = 0, originalNumber;
	cin >> number;
	originalNumber = number;
	while (number > 0) {
		int lastDigit = number % 10;
		sum =sum + pow(lastDigit, 3);
		number = number / 10;
	}
	if (originalNumber == sum) {
		cout << "Armstrong" << endl;
	}
	else {
		cout << "sorry! its not armstrong." << endl;
	}
	return 0;
}