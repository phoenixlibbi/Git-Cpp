#include <iostream>
using namespace std;
int factorial(int value) {
	int fact = 1;
	for (int i = 2; i <= value; i++)
	{
		fact =fact * i;
	}
	return fact;
}
int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)
		{
			cout << factorial(i) / (factorial(j)*factorial(i - j))<<" ";
		}cout << endl;
	}
}