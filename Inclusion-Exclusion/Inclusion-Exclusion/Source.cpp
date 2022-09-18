#include<iostream>
using namespace std;
int divisible(int n, int a, int b) {
	int n1 = n / a;
	int n2 = n / b;
	int n3 = n / (a * b);
	return n1 + n2 - n3;
}

int Euclid_GCD(int a, int b) {
	while (b != 0) {
		int rem = a % b;
		a = b;
		b = rem;
	}return a;
}
int main() {
	//cout << divisible(40, 5, 7);
	cout << Euclid_GCD(1, 18);
}