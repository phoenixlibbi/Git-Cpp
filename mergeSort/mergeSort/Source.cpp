//#include<iostream>
//using namespace std;
//
//void merge(int array[], int start, int mid, int end) {
//	int s1 = mid - start + 1;
//	int s2 = end - mid;
//
//	int* arr1 = new int[s1];
//	int* arr2 = new int[s2];
//
//	for (int i = 0; i < s1; i++)
//	{
//		arr1[i] = array[start + i];
//	}
//	for (int j = 0; j < s2; j++)
//	{
//		arr2[j] = array[mid + 1 + j];
//	}
//
//	int i = 0;
//	int j = 0;
//	int k = start;
//
//
//	while (i < s1 && j < s2) {
//		if (arr1[i] < arr2[j]) {
//			array[k] = arr1[i];
//			k++;
//			i++;
//		}
//		else {
//			array[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//	while (i < s1) {
//		array[k] = arr1[i];
//		k++;
//		i++;
//	}
//	while (j < s2) {
//		array[k] = arr2[j];
//		k++;
//		j++;
//	}
//}
//
//void mergeSort(int array[], int start, int end) {
//	if (start < end) {
//		int mid = (start + end) / 2;
//
//		mergeSort(array, start, mid);
//		mergeSort(array, mid + 1, end);
//
//		merge(array, start, mid, end);
//	}
//}
//int main() {
//	int array[8] = { 7,3,2,0,0,3,1,8 };
//	mergeSort(array, 0, 7);
//	for (int i = 0; i < 8; i++)        //array.length()
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

#include<iostream>
using namespace std;

int main() {
    int arr[10] = { 0 };
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int j = 9; j >= 0; j--)
    {
        cout << arr[j]<<" ";
    }
    return 0;
}
