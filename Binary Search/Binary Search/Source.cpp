#include<iostream>
using namespace std;

//int isFound(int array[], int size, int key) {
//	int start = 0;
//	int end = size;
//	while (start <= end) {
//		int mid = (start + end) / 2;
//		if (array[mid] == key) {
//			return mid;
//		}
//		else if (array[mid] > key) {
//			end = mid - 1;
//		}
//		else if (array[mid] < key) {
//			start = mid + 1;
//		}
//	}
//	return -1;
//}

//recursive
int isFound(int array[], int key,int start,int end) {
	int mid = (start + end) / 2;
	if (array[mid] == key) {
		return mid;
	}
	if (start == end ) {
		//cout << start << " " << end;
		return -1;
	}
	else if (array[mid] > key) {
		isFound(array, key, start, mid - 1);
		}
	else{
		isFound(array, key, mid + 1, end);
	}
	
}
int main() {
	const int SIZE = 3;
	int key = 0;
	int array[SIZE];
	cout << "array:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> array[i];
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i];
	}
	cout << "key:";
	cin >> key;
	cout << isFound(array, key, 0, SIZE);
	return 0;
}