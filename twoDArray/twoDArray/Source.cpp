#include<iostream>
using namespace std;
//int main() {
//
//	//searching
//	/*int array[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			cin >> array[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			if (array[i][j] == 3) {
//				cout << "value 3 is at:" << i << " " << j << endl;
//			}
//		}
//	}
//	return 0;*/
//}

//int main() {
//	//spiral
//	int array[5][6];
//	int rowStart = 0;
//	int rowEnd = 4;
//	int columnStart = 0;
//	int columnEnd = 5;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++) {
//			cin >> array[i][j];
//		}
//	}
//	while (rowStart <= rowEnd && columnStart <= columnEnd) {
//		for (int i = columnStart; i <= columnEnd; i++)
//		{
//			cout << array[rowStart][i]<<" ";
//		}
//		rowStart++;
//		for (int j = rowStart; j <= rowEnd; j++)
//		{
//			cout << array[j][columnEnd]<<" ";
//		}
//		columnEnd--;
//		for (int k = columnEnd; k >= columnStart; k--)
//		{
//			cout << array[rowEnd][k]<<" ";
//		}
//		rowEnd--;
//		for (int l = rowEnd; l >= rowStart; l--) {
//			cout << array[l][columnStart]<<" ";
//		}
//		columnStart++;
//	}
//	return 0;
//}


//transpose
//int main() {
//	int array[5][6];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++) {
//			cin >> array[i][j];
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = i; j < 6; j++) {
//			int temp = array[i][j];
//			array[i][j] = array[j][i];
//			array[j][i] = temp;
//		}
//	}
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << array[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	return 0;
//	exit(0);
//}

//matrix multiplication
//int main() {
//	//3*4 4*3
//	// n1=3
//	// n2=4
//	// n3=3
//	//1 2 3   1 2 3    1+8+21  2+10+24 
//	//4 5 6   4 5 6
//	//7 8 9   7 8 9
//	int array0[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int array1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int ans[3][3] = { {0,0,0},{0,0,0},{0,0,0} };;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 3; k++)
//			{
//				ans[i][j] += array0[i][k] * array1[k][j];
//			}
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++) {
//			cout << ans[i][j]<<" ";
//		}cout << endl;
//	}
//}


//search 
int main() {
	//1 4 7 11
	//2 5 8 12
	//3 6 9 16
	//10 13 14 17
	int array[4][4] = { {1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
	int key = 0;
	int r = 4, c = 4;
	cin >> key;
	while (true) {
		if (array[r][c] == key) {
			cout << "key fount at:" << r << " " << c;
			exit(0);
		}
 		else if (array[r][c] < key) {
			c--;
		}
		else {
			r--;
		}
	}
}