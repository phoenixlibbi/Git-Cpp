#include<iostream>
using namespace std;



////1 2 3 4 3 2 1
////void unique(int array[], int n) {
////	int xorsum = 0;
////	for (int i = 0; i < n; i++)
////	{
////		xorsum = xorsum ^ array[i];
////	}
////	cout << xorsum;
////}
////
////void generateSubsets(int array[], int n) {
////	for (int i = 0; i < (1<<n); i++)
////	{
////		for (int j = 0; j < n; j++) {
////			if (i & (1 << j)) {
////				cout << array[j];
////			}
////		}cout << endl;
////	}
////}
////int count(int n) {
////	int count = 0;
////	while (n - 1 > 0) {
////		n = (n & (n - 1));
////		count++;
////	}
////	return count;
////}
//bool isPowOf2(int n) {
//	if (n < 0) {
//		n = -(n);
//	}
//	return (n && !(n & (n - 1)));
//}
int getBit(int n, int pos) {
	return (n & (1 << pos)) != 0;
}
int setBit(int n, int pos) {
	return (n | (1 << pos));
}
//////int clearBit(int n, int pos) {
//////	int mask = ~(1 << pos);
//////	return (n & mask);
//////}
//////int updateBit(int n, int pos,int bit) {
//////	int mask = ~(1 << pos);
//////	return ((n & mask)|(bit<<pos));
//////}
//void twoUnique(int array[], int n) {
//	int xorsum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		xorsum = xorsum ^ array[i];
//	}
//	int temp = xorsum;
//	int setbit = 0;
//	int pos = 0;
//	while (setbit != 1) {
//		setbit = xorsum & 1;
//		pos++;
//		xorsum = xorsum >> 1; //samajh ni aai
//	}
//	int newxor = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (getBit(array[i], pos - 1))
//		{
//			newxor = newxor ^ array[i];
//		}
//	}
//	cout << newxor << " ";
//	cout << (temp ^ newxor);
//}
//int main() {
//	int array[8] = { 7,2,3,6,7,3,2,1 };
//	/*cout << getBit(5, 2) << endl;
//	cout << setBit(5, 1) << endl;
//	cout << clearBit(5, 2) << endl;
//	cout << updateBit(5, 1, 1)<<endl;*/
//	//cout << isPowOf2(14) << endl;
//	//cout << count(19) << endl;
//	//generateSubsets(array, 3);
//	//unique(array, 7);
//	twoUnique(array, 8);
//	return 0;
//}
//
void threeUnique(int array[], int n) {
	int result = 0;
	for (int i = 0; i < 64; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (getBit(array[j], i)) {
				sum++;
			}
		}
		if ((sum % 3) != 0) {
			result = setBit(result, i);
		}
	}
	cout << result;
}
int main() {
	int array[10] = { 1,1,1,2,2,2,3,3,3,10 };
	threeUnique(array, 10);

}
//int main() {
//	cout<<isPowOf2(-16);
//}




//void isNoOnes(int n) {
//	int count = 0;
//	while (n != 0) {
//		n=(n & (n - 1));
//		count++;
//	}
//	cout << count;
//}
//
//int main() {
//	isNoOnes(7);
//}


//void untilk(int n,int k) {
//	/*for (int i = n; i <=(1<<k); i=(i<<1))
//	{
//		cout<<i<<" ";
//	}*/
//	for (int i = n; i <= k; i = (i << 4))
//	{
//		cout << i << " ";
//	}
//
//}
//int main() {
//	//n should not be 0
//	untilk(3, 3);
//}

//void subset(char array[], int size) {
//	for (int i = 0; i < (1<<size); i++)
//	{
//		for (int j = 0; j < size; j++) {
//			if (i & (1<<j)) {
//				cout << array[j] << " ";
//			}
//		}
//		cout << endl;
//	}
//}
//int main() {
//	char array[3] = { 'a','b','c'};
//	subset(array, 3);
//}

//void one(int array[], int size) {
//	int sum = 0;
//	for (int i = 0; i <size; i++)
//	{
//		sum = (sum ^ array[i]);
//	}
//	cout << sum;
//}
//int main() {
//	int array[5]={ 1, 1, 2, 3, 3 };
//	one(array, 5);
//}

//void two(int array[], int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum = sum ^ array[i];
//	}
//	cout << sum<<endl;
//
//
//	bool flag = false;
//	for (int i = 0; i < size-1&&flag==false; i++) {
//		for (int j = i + 1; j < size; j++) {
//			if ((sum ^ array[i]) == array[j]) {
//				cout << array[i] << "  " << array[j] << endl;
//				flag =true;
//				break;
//			}
//		}
//	}
//
//
//}
//int main() {
//	int array[6]={ 1, 1, 6, 3, 3,1 };
//	//two(array, 6);
//}


//
//int getBit(int n, int pos) {
//	return (n & (1 << pos) != 0);
//}
//int setBit(int n, int pos) {
//	return (n | (1 << pos));
//}
//void twoUnique(int array[], int n) {
//	int xorsum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		xorsum = xorsum ^ array[i];
//	}
//	int temp = xorsum;
//	int setbit = 0;
//	int pos = 0;
//	while (setbit != 1) {
//		setbit = xorsum & (1<<pos);
//		pos++;
//	}
//	int newxor = 0;
//	pos--;
//	for (int i = 0; i < n; i++)
//	{
//		if (getBit(array[i], pos))
//		{
//			newxor = newxor ^ array[i];
//		}
//	}
//	cout << newxor << " ";
//	cout << (temp ^ newxor);
//}
//int main() {
//	int array[8] = { 7,2,3,6,7,3,2,1 };
//	twoUnique(array, 8);
//	return 0;
//}

