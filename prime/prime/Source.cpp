#include<iostream>
#include<math.h>
using namespace std;

//prime

//int main() {
//	int div = 2;
//	int num = 0;
//	while(num<1)
//	{
//	cout << "enter the number you wanna check:";
//	cin >> num;
//	}
//	if (num == div || num == 1) {
//		cout << "prime" << endl;
//	}
//	else {
//		while (num>=div) {
//			if (num % div == 0 && div != num) {
//				cout << "not prime!" << endl;
//				exit(0);
//			}
//			if (num % div == 0 && div == num) {
//				cout << "prime!" << endl;
//			}
//			div++;
//		}
//	}
//	return 0;
//}



//print all numbers till n
//int main() {
//	int div = 2;
//	int till = 0;
//	int start = 0;
//	bool check = true;
//	while (start < 1) {
//		cout << "enter starting number:";
//		cin >> start;
//	}
//	while (till < 1) {
//		cout << "enter last number:";
//		cin >> till;
//	}
//	while (start == 1|| start == 2) 
//		{
//			cout << start << endl;
//			start++;
//		}
//	for (int i = start; i < till; i++)
//	{
//		while (check==true) {
//			if (start % div == 0 && start != div) {
//				break;
//			}
//			if (start % div == 0 && start == div) {
//				cout << start << endl;
//				check = false;
//				div = 2;
//				break;
//			}
//			div++;
//		}
//			check = true;
//			start++;
//	}
//	return 0;
//}


//all prime till n
bool isPrime(int value) {
	for (int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0) {
			return false;
		}
		return true;
	}
}
int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (isPrime(i)) {
			cout << i << endl;
		}
	}
}