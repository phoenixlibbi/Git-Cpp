#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int reverse = 0;
	cin >> n;
	while (n > 0) {
		int lastDigit = n % 10;
		reverse = (reverse * 10) + lastDigit;
		n = n / 10;
	}cout << reverse;
}