#include<iostream>
#include<algorithm>
using namespace std;
void countSort(int array[], int size) {
	int maxima = array[0];
	for (int i = 0; i < size; i++)
	{
		maxima = max(maxima, array[i]);
	}

	int* countArr = new int[maxima];
	for (int i = 0; i < maxima; i++) {
		countArr[i] = 0;
	}

	for (int i = 0; i < size; i++)
	{
		countArr[array[i]]++;
	}

	for (int i = 1; i <= maxima; i++)
	{
		countArr[i] += countArr[i - 1];
	}

	int* newArr = new int[size];
	for (int i = size - 1; i >= 0; i--)
	{
		newArr[--countArr[array[i]]] = array[i];
	}

	for (int i = 0; i < size; i++)
	{
		array[i] = newArr[i];
	}

	delete[] countArr;
	delete[] newArr;
}
int main() {
	int aarray[] = { 7,3,2,0,0,3,1,8 };
	countSort(aarray, 8);
	for (int i = 0; i < 8; i++)
	{
		cout << aarray[i] << " ";
	}
}