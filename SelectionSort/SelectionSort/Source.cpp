#include<iostream>
using namespace std;
int main() {
	// 1 2 3 4 5 
	// 0 1 2 3 4
	const int SIZE = 7;
	int array[SIZE];
	cout << "array" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> array[i];
	}

	//assending order
	/*for (int i = 0; i <= SIZE; i++)
	{
		for (int j = i+1; j <= SIZE-1; j++)
		{
			if (array[i] > array[j]) {
				swap(array[i], array[j]);
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i]<<endl;
	}*/
	//descending order
	/*for (int i = 0; i <= SIZE; i++)
	{
		for (int j = i + 1; j <= SIZE - 1; j++)
		{
			if (array[i] < array[j]) {
				swap(array[i], array[j]);
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}*/