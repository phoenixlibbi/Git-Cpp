#include<iostream>
using namespace std;
int inline isFound(int array[], int size, int key) {
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key) {
			return i;
		}
	}
	return -1;
}
int main() {
	const int SIZE = 10;
	int array[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cin >> array[i];
	}
	int key = 0;
	cin >> key;
	cout << isFound(array, SIZE, key);
	return 0;
}