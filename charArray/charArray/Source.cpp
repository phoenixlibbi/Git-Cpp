#include<iostream>
using namespace std;

//palindrome
//int main() {
//	char arr[100];
//	cin >> arr;
//	int length = strlen(arr);
//	for (int i = 0; i < length; i++) {
//		if (arr[i] != arr[length - 1 - i]) {
//			cout << "not";
//			exit(0);
//		}
//	}
//	cout << "palindrome";
//	return 0;
//}

//largest word
int main() {
	int size;
	cin >> size;
	cin.ignore();
	char* array = new char[size + 1];
	cin.getline(array, size);
	cin.ignore();
	int maxLen = 0;
	int current = 0;
	int i = 0;
	int start = 0;
	int maxStart = 0;
	while (true) {
		//i love maryum
		if (array[i] == ' ' || array[i] == '\0') {
			//maxLen = max(current, maxLen);
			if (current > maxLen) {
				maxLen = current;
				maxStart = start;
			}
			current = 0;
			start = i+1;
		}
		else {
			current++;
		}
		if (array[i] == '\0') {
			break;
		}
		i++;
	}
	cout << maxLen;
	for (int i = 0; i < maxLen; i++)
	{
		cout << array[i+maxStart];
	}
}