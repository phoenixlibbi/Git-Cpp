#include<iostream>
using namespace std;
//selection sort: find min number in array and swap it with the first element.

//int main() {
//	int array[8] = { 7,3,2,0,0,3,1,8 };
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = i + 1; j < 8; j++) {
//			if (array[i] > array[j]) {
//				swap(array[i], array[j]);
//			}
//		}
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		cout << array[i] << " ";
//	}
//}

//bubble sort: repeatdly swap two adjacent elements if they are in wrong order

//int main() {
//	int array[8] = { 7,3,2,0,0,3,1,8 };
//	int count = 1;
//	while (count < 8) {
//		for (int i = 0; i < 8 - count; i++)
//		{
//			if (array[i] > array[i + 1]) {
//				swap(array[i], array[i + 1]);
//			}
//		}count++;
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		cout << array[i] << " ";
//	}
//}



//selection sort: select small and relocate its position by moving other forward
void selectionSort(int* array, int size) {
	for (int i = 1; i < size; i++)
	{
		int current = array[i];
		int prev = i - 1;
		while (array[prev] > current && prev >= 0) {
			array[prev + 1] = array[prev];
			prev--;
		}
		array[prev + 1] = current;
	}
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}
int main() {
	int array[5] = { 12,45,23,51,19 };
	selectionSort(array, 5);
}