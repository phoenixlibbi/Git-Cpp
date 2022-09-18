#include<iostream>
using namespace std;
//int main() {
//	//summ of all subarrays
//	int array[5] = { 1,2,0,7,2 };
//			int sum=0;
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = i; j < 5; j++) {
//					sum = sum+array[j];
//				}
//			}cout << sum;
//}

//longest arithmatic subarray
//int main() {
//	
//	int array[7] = { 10,7,4,6,8,10,11 };
//	int pd = array[1] - array[0];
//	int ans = 2;
//	int cur = 2;
//	int j = 2;
//	while (j < 7) {
//		if (pd == array[j] - array[j - 1]) {
//			cur++;
//		}
//		else {
//			pd = array[j] - array[j - 1];
//			cur = 2;
//		}
//		ans = max(ans, cur);
//		j++;
//	}
//	cout << ans;
//}

//record breaking
//int main() {
//		int array[8] = { 1,2,0,7,2,0,2,2 };
//		int count = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
//				count++;
//			}
//		}
//		cout << count;
//}

//int main() {
//	int array[7] = { 1,5,3,4,3,5,6 };
//	int min = array[0];
//	int compare[7] = { -1,-1,-1,-1,-1,-1,-1 };
//				int count=0;
//				int minINdex=INT_MAX;
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = i+1; j < 7; j++)
//		{
//			if (array[i] == array[j] && minINdex>i) {
//				minINdex=i;
//			}
//		}
//	}
//	cout << minINdex;
//}

int main() {
	int array[6] = { 0,-9,1,3,-4,5 };
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		if (array[i] == count && array[i] >= 0) {
			count++;
		}
		else if (array[i] > 0 && array[i] != count) {
			cout << count;
			exit(0);
		}	
	}
	return 0;
}