#include<iostream>
#include<algorithm>
using namespace std;
int pi(int* array, int start, int end) {
	int pivot = array[end];
	int i = start - 1;
	for (int j = start; j < end; j++)
	{
		if (array[j] < pivot) {
			i++;
			swap(array[j], array[i]);
		}
	}

	swap(array[i + 1], array[end]);
	return i + 1;
}
void quickSort(int* array, int start, int end) {
	if (start < end) {
		int pivot = pi(array, start, end);

		quickSort(array, start, pivot - 1);
		quickSort(array, pivot + 1, end);
	}
}
int main() {
	int array[8] = { 7,3,2,0,0,3,1,8 };
	quickSort(array, 0, 7);
	for (int i = 0; i < 8; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}