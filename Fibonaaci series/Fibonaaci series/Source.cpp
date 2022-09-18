#include<iostream>
using namespace std;
void fibonaaci(int value) {
	int n1 = 0, n2 = 1, nextTerm = 0;
	for (int i = 1; i <= value; i++)
	{
		cout << n1 << endl;
		nextTerm = n1 + n2;
		n1 = n2;
		n2 = nextTerm;
	}
	return;
}
int main() {
	int n = 0;
	cin >> n;
	fibonaaci(n);
}