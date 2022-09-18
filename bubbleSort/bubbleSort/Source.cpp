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
	int counter = 1;
	while (counter < SIZE) {
		for (int i = 0; i < SIZE-counter; i++)
		{
			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
			}
		}
		counter++;
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i];
	}
	return 0;
}