#include<iostream>
using namespace std;
int main() {
	const int SIZE = 5;
	int array[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> array[i];
	}
	// 7 3 2 0 0 3
	for (int i = 1; i < SIZE; i++)
	{
		int current = array[i];
		int j = i - 1;
		while (array[j] > current && j >= 0) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = current;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i];
	}
	return 0;
}