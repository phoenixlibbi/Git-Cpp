#include<iostream>
using namespace std;


//sum till n
//int sumTill_n(int n) {
//	if (n == 0) {
//		return n;
//	}
//	else{
//		int prev = sumTill_n(n - 1);
//		return prev + n;
//	}
//}
//void main() {
//	int n;
//	cin >> n;
//	cout<<sumTill_n(n);
//}


//calculate n raised p
//int nPow_p(int n, int p) {
//	if (p == 1) {
//		return n;
//	}
//	int prev= nPow_p(n,p - 1);
//	return n * prev;
//}
//void main() {
//	int n, p;
//	cin >> n >> p;
//	cout << nPow_p(n, p);
//}

//factorial
//int factorial(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	return factorial(n - 1) * n;
//}
//void main() {
//	int n;
//	cin >> n;
//	cout << factorial(n);
//}


//fibonaci
//int fibonaci(int n) {
//	if (n==0) {
//		return 0;
//	}
//	if (n==1) {
//		return 1;
//	}
//	return fibonaci(n - 1) + fibonaci(n - 2);
//}
//int main() {
//	int n;
//	cin >> n;
//	cout<<fibonaci(n);
//}


//array is sorted or not
//bool sorted(int* array, int n) {
//	if (n == 1) {
//		return true; 
//	}
//	cout << "fuck" << endl;
//	bool restArray = sorted(array + 1, n - 1);
//	return (array[0] <= array[1] && restArray);
//	//return (array[n - 2] <= array[n - 1] && sorted(array, n - 1));
//}
//int main() {
//	//int array[6] = { 7,3,2,0,0,3 }; //0
//	int array[5] = { 1,2,3,4,5 }; 
//	cout<<sorted(array, 5);
//}


//ascending print till n
//void A_print(int n) {
//	if (n == 0) {
//		return;
//	}
//	A_print(n-1);
//	cout << n;
//}
//void D_print(int n) {
//	if (n == 0) {
//		return;
//	}
//	cout << n;
//	A_print(n - 1);
//}
//int main() {
//	int n = 0;
//	cin >> n;
//	A_print(n);
//	D_print(n);
//}


//first and last occurance of key in array
//int last(int* array, int n,int i,int key) {
//	if (i == n) {
//		return n;
//	}
//	if (array[n] == key) {
//		return key;
//	}
//	return (array, n, n - 1, key);
//}
//int first(int* array, int n, int i, int key) {
//	if (i == n) {
//		return -1;
//	}
//	if (array[i] == key) {
//		return i;
//	}
//	return first(array, n, i + 1, key);
//}
//int main() {
//	int array[6] = { 7,3,2,0,0,3 };
//	int key = 0, i = 0;
//	cin >> key;
//	cout << first(array, 6, i, key);
//	cout << last(array, 6, 6, key);
//}


//reverse a string
//void reverse(string s,int n) {
//	cout << s[n];
//	if (n == 0) {
//		return;
//	}
//	reverse(s, n - 1);
//}
// ===========================================OR=====================
//void reverse(string str) {
//
//	if (str.size() == 0) {
//		return;
//	}
//	string sub_string = str.substr(1);
//	reverse(sub_string);
//	cout << str[0];
//}
//int main() {
//	string str = "maryum";
//	int size = str.size();
//	//reverse(str, size);
//	reverse(str);
//}



//replace PI
//void replace_pi(string str) {
//	if (str.size() == 0) {
//		return;
//	}
//	else if (str[0] == 'p' && str[1] == 'i') {
//		cout << "3.1415";
//		replace_pi(str.substr(2));
//	}
//	else {
//		cout << str[0];
//		replace_pi(str.substr(1));
//	}
//}
//int main() {
//	replace_pi("sdiopiasbdjhpipi");
//}


//Tower of Hanoi
//void toh(int blocks, char src, char des, char helper) {
//	if (blocks == 0) {
//		return;
//	}
//	toh(blocks - 1, src, helper, des);
//	cout << "moved from " << src << " to " << helper << endl;
//	toh(blocks - 1, helper, des, src);
//}
//int main() {
//	toh(3, 'A', 'C', 'B');
//}

//remove duplicates
//void removeDuplicates(string str) {
//	if (str.size() == 0) {
//		return;
//	}
//	else if (str[0] == str[1]) {
//		return removeDuplicates(str.substr(1));
//		cout << str[0];
//	}
//	else {
//		cout << str[0];
//		return removeDuplicates(str.substr(1));
//	}
//}
// or
//string removeDuplicates(string str) {
//	if (str.size() == 0) {
//		return "";
//	}
//	char c = str[0];
//	string newstr = removeDuplicates(str.substr(1));
//	if (newstr[0] == c) {
//		return newstr;
//	}
//	return c + newstr;
//}
//int main() {
//	cout<<removeDuplicates("aaaabbbeeecdddd");
//}


//swap all x
//string moveX(string str) {
//	if (str.size() == 0) {
//		return "";
//	}
//	char ch = str[0];
//	string newstr = moveX(str.substr(1));
//	if (ch == 'x') {
//		return newstr + ch;
//	}
//	return ch+newstr;
//}
//int main() {
//	cout << moveX("xaxxbdxcefxhix");
//}

//substrings
//void subStrings(string str, string ans) {
//	if (str.length() == 0) {
//		cout << ans << endl;
//		return;
//	}
//
//	char ch = str[0];
//	string newStr = str.substr(1);
//
//	subStrings(newStr, ans);
//	subStrings(newStr, ans + ch);
//
//}
//
//int main() {
//	subStrings("ABC", "");
//}


//tower of hanoi
//void towerOfHanoi(int n,char src,char helper,char des) {
//	if (n == 1) {
//		cout << "moved from " << src << " to " << des<<endl;
//	}
//	else {
//		towerOfHanoi(n - 1, src, des, helper);
//		cout << "moved from " << src << " to " << des<<endl;
//		towerOfHanoi(n - 1, helper, des, src);
//	}
//}
//int main() {
//	towerOfHanoi(64, 'A', 'B', 'C');
//	cout<<"End of World"<<endl;
//}

void display(int n) {
	cout << "entered in:" << n << endl;
	if (n > 0) {
		cout << n << endl;
		display(n - 1);
	}
	cout<<"out of:"<<n<<endl;
}
int main() {
	display(5);
}