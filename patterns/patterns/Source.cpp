#include<iostream>
using namespace std;


//int main()
//{
//	//*****
//	//*****
//	//*****
//	//*****
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	//****
//	//*  *
//	//*  *
//	//*  *
//	//****
//	int rows = 5;
//	int columns = 4;
//	for (int i = 1; i <= rows; i++)
//	{
//		for (int j = 1; j <= columns; j++)
//		{
//			if (i == rows || i == 1 || j == columns || j == 1) {
//				cout << "*";
//			}
//			else {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//}


//int main() {
//	/*
//	*****          
//	****
//	***
//	**
//	*
//	*/
//	int n;
//	cin >> n;
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <=i  ; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	//    *
//	//   **
//	//  ***
//	// ****
//	//*****
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j <= n-i) {
//				cout << " ";
//			}
//			else{
//				cout << "*";
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main() {
//	/*1
//	22
//	333
//	4444
//	55555*/
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << i;
//		}cout << endl;
//	}
//	return 0;
//}


//floyd's pattern
//int main() {
//	/*
//	1
//	2 3
//	4 5 6
//	7 8 9 10
//	11 12 13 14 15
//	*/
//	int count = 1;
//	int n = 5;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++) {
//			cout << count;
//			count++;
//		}cout << endl;
//	}
//	return 0;
//}


//int main() {
//	/*
//	*      *
//	**    **
//	***  ***
//	********
//	********
//	***  ***
//	**    **
//	*      *
//	*/
//	int space = 0;
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			space = (2 * n) - (2 * i);
//			cout << "*";
//		}
//			for (int k = 1; k <= space; k++)
//			{
//				cout << " ";
//			}
//			for (int j = 1; j <= i; j++)
//			{
//				space = (2 * n) - (2 * i);
//				cout << "*";
//			}
//			cout << endl;
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			space = (2 * n) - (2 * i);
//			cout << "*";
//		}
//		for (int k = 1; k <= space; k++)
//		{
//			cout << " ";
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			space = (2 * n) - (2 * i);
//			cout << "*";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//int main() {
//	/*
//	1 2 3 4 5
//	1 2 3 4
//	1 2 3
//	1 2 
//	1
//	1
//	12
//	123
//	1234
//	12345
//	*/
//	int n = 0;
//	cin >> n;
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j;
//		}
//		cout << endl;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j;
//		}
//		cout << endl;
//	}
//}

//int main() {
//	//Rhombus pattern
//	/*		*****
//		   *****
//		  *****
//		 *****
//		*****
//	*/
//	int space = 0;
//	int n = 0;
//	cin >> n;
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <= i-1; j++)
//		{
//			cout << " ";
//		}
//		for (int k = 1; k <= n; k++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//}

//int main() {
//			//	1
//		 //      1 2
//	 	//      1 2 3
//		 //    1 2 3 4
//		 //   1 2 3 4 5
//		 //  1 2 3 4 5 6
//		 // 1 2 3 4 5 6 7
//		 //1 2 3 4 5 6 7 8
//	  //  1 2 3 4 5 6 7 8 9
//	  // 1 2 3 4 5 6 7 8 9 10
//	int n;
//	int space=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		space = n - i;
//		for (int k = 1; k <= space; k++)
//		{
//			cout << " ";
//		}
//		for (int j = 1; j <= i; j++)
//		{
//			cout << j;
//			cout << " ";
//		}
//		for (int k = 1; k <= space; k++)
//		{
//			cout << " ";
//		}
//		cout << endl;
//	}
//}

//int main() {
//	//diamond
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++) {
//			cout << " ";
//		}
//		int stars = (i*2)-1;
//		for (int k = 1; k <= stars; k++)
//		{
//			cout << "*";
//		}
//		for (int j = 1; j <= n - i; j++) {
//			cout << " ";
//		}
//		cout << endl;
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		for (int j = 1; j <= n - i; j++) {
//			cout << " ";
//		}
//		int stars = (i * 2) - 1;
//		for (int k = 1; k <= stars; k++)
//		{
//			cout << "*";
//		}
//		for (int j = 1; j <= n - i; j++) {
//			cout << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//
//int main() {
//	//zic zac
//	int n = 0, row = 3;
//	cin >> n;
//	for (int i = 1; i <= row; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
//				cout << "*";
//			}
//			else {
//				cout << " ";
//			}
//		}cout << endl;
//	}
//}