#include<iostream>
using namespace std;

void DNF(int* array,int size) {
	int low = 0;
	int mid = 0;
	int high = size-1;

	while (mid <= high) {
		if (array[mid] == 0) {
			swap(array[low], array[mid]);
			low++;
			mid++;
		}
		else if (array[mid] == 1) {
			mid++;
		}
		else if (array[mid] == 2) {
			swap(array[mid], array[high]);
			high--;
		}
	}
}

int main() {
	int arr[] = { 1,1,2,0,0,1,2,2,1,0 };
	DNF(arr,(sizeof(arr)/sizeof(arr[0])));

	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		cout << arr[i] << " ";
	}

}