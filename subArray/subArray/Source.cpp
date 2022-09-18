#include<iostream>
using namespace std;

//subarray
//int main() {
//	int array[7] = { 0,7,3,2,0,0,3 };
//	for (int i = 0; i < 7; i++){
//		for (int j = i; j < 7; j++) {
//			for (int k = i; k <= j; k++)
//			{
//				cout << array[k] << " ";
//			}cout << endl;
//		}	
//	}
//}

//max subarray sum   (long method)
//int main() {
//	int array[7] = { 1,7,3,2,0,0,3 };
//	int sum = 0;
//	int maxArray = 0;
//	int max = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = i; j < 7; j++) {
//			for (int k = i; k <= j; k++)
//			{
//				sum += array[k];
//				cout << array[k] << " ";
//			}
//			cout << endl << sum << endl <<endl;
//			if (maxArray <= sum) {
//				maxArray = sum;
//			}
//				sum = 0;
//			cout << endl;
//		}
//		if (max <= maxArray) {
//			max = maxArray;
//		}
//			maxArray = 0;
//	}cout << max;
//}

//max subarray sum   (short method)
//int main() {
//	int array[7] = { 1,7,3,2,0,0,3 };
//	int maxSum = INT_MIN;
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = i; j < 7; j++) {
//			int sum = 0;
//			for (int k = i; k <= j; k++)
//			{
//				sum += array[k];
//			}
//			maxSum = max(sum, maxSum);
//		}
//	}cout << maxSum;
//}

//Kadane's sum
//int main() {
//	int array[7] = { 1,7,3,2,0,0,3 };
//	int maxSum = INT_MIN;
//	int sum = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		sum += array[i];
//		if (sum < 0) {
//			sum = 0;
//		}
//		maxSum = max(sum, maxSum);
//	}cout << maxSum;
//}


//wrap sum
//int kadain(int array[], int n) {
//	int current = 0;
//	int maxSum = INT_MAX;
//	for (int i = 0; i < n; i++)
//	{
//		current += array[i];
//		if (current < 0) {
//			current = 0;
//		}maxSum = max(current, maxSum);
//	}
//	return maxSum;
//}
//int main() {
//	int array[7] = { -4,4,-6,6,-10,11,-12 };
//	int maxSum = INT_MIN;
//	int wrap;
//	int nonwrap;
//	nonwrap = kadain(array, 7);
//	int total=0;
//	for (int i = 0; i < 7; i++)
//	{
//		total += array[i];
//		array[i] = -array[i];
//	}
//
//	wrap = total + kadain(array,7);
//
//	cout << max(wrap, nonwrap) << endl;
//}


//2 ka sum == k
//bool pairsum(int* array, int size, int key) {
//	int sum=0;
//	for (int i = 0; i < size-1; i++)
//	{
//		for (int j = i + 1; j < size; j++) {
//			if (array[i] + array[j] == key) {
//				cout << i << " " << j << endl;
//				return true;
//			}
//		}
//	}return false;
//}
//int main() {
//	int array[7] = { -4,4,-6,6,-10,11,-12 };
//	int key = 1;
//	cout << pairsum(array, 7, key);
//	return 0;
//}

//or
bool pairsum(int array[], int size, int key) {
	int low=0;
	int high=size-1;
	while (low < high) {
		if (array[low] + array[high] == key) {
			cout << low << " " << high<<endl;
			return true;
		}
		else if (array[low] + array[high] > key) {
			high--;
		}
		else {
			low++;
		}
	}
	return false;
}
int main() {
	int array[8] = { 2,4,7,11,14,16,20,21 };
	int key = 31;
	cout << pairsum(array, 8, key);
	return 0;
}