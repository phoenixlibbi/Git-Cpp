#include<iostream>
using namespace std;
void siege(int n) {
	int array[100]={0};
	for (int i = 2; i < n; i++)
	{
		if (array[i] == 0) {
			for (int j = i*i; j <= n; j+=i)
			{
				array[j] = 1;
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (array[i] != 1) {
			cout << i << " ";
		}
	}
}

void primeFactorization(int n) {
	int array[100] = { 0 };
	for (int i = 2; i <= n; i++)
	{
		if (array[i] == 0) {
			array[i] = i;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (array[i] == i) {
			for (int j = i*i; j <= n; j+=i)
			{
				if (array[j] == j) {
					array[j] = i;
				}
			}
		}
	}
	while (n != 1) {
		cout << array[n]<<" ";
		n = n/array[n];
	}
}
void main() {
	int n;
	cin >> n;
	//siege(n);
	primeFactorization(n);
}