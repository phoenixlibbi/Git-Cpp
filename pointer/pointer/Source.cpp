#include<iostream>
using namespace std;

//pointers and array
//int main() {
//	int array[3] = { 10,20,30 };
//	int* ptr = array;
//	cout << *array;
//	cout << endl << &ptr << endl << &array << endl;
//	cout << *ptr << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << endl;
//		//cout << *(ptr + i);
//		cout << ptr[i];
//	}
//}

//pointers to pointers
int main() {
	int a = 10;
	int* ptr1 = &a;
	int** ptr2 = &ptr1;
	cout << &a << " ";
	//cout << "addresses:" << endl << &a << endl << &ptr1 << endl << &ptr2 << endl;
	//cout << "points:" << endl << &a << endl << ptr1 << endl << ptr2 << endl;
	cout << *ptr2<<" ";
	cout << **ptr2;
}