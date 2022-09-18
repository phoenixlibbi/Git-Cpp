#include<iostream>
using namespace std;
int main() {
	double a = 0, b = 0, temp = 0;
	double sum = 0;
	cout << "enter the value of a and b:";
	cin >> a >> b;
	//when both are zero
	if (a == 0 && b == 0) {
		sum = 0;
	}
	//when both are positive
	else if (a > 0 && b > 0) {
		for (int i = 0; i <= b; i++)
		{
			sum = a++;
		}
		cout << "a + b =" << sum << endl;
	}
	//when b is negative
	else if (a > 0 && b < 0) {
		temp = -(b);
		for (int i = 0; i <= temp; i++)
		{
			sum = a--;
		}
		cout << "a + b =" << sum << endl;
	}
	//when a is negative
	else if (a < 0 && b > 0) {
		for (int i = 0; i <= b; i++)
		{
			sum = a++;
		}
		cout << "a + b =" << sum << endl;
	}
	//when boyh are negative
	else if (a < 0 && b < 0) {
		temp = -(b);
		int temp1 = -(a);
		for (int i = 0; i <= temp; i++)
		{
			sum = temp1++;
		}
		cout << "a + b =" << -(sum) << endl;
	}
	return 0;
}