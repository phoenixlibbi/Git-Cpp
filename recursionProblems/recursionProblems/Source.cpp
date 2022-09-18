#include<iostream>
#include<string>
using namespace std;
//ABC
//void permutation(string str, string ans) {
//	if (str.length() == 0) {
//		cout << ans << endl;
//		return;
//	}
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		char ch = str[i];
//		string ros = str.substr(0, i) + str.substr(i + 1);
//
//		permutation(ros, ans + ch);
//	}
//}
//int main() {
//	permutation("ABC", "");
//}

//void subString(string str,string ans) {
//	if (str.size() == 0) {
//		cout <<"\"" << ans << "\"" << endl;
//		return;
//	}
//
//	subString(str.substr(1),ans);
//	subString(str.substr(1),ans+str[0]);
//	subString(str.substr(1), (ans+(to_string)(int(str[0]))));
//}
//int main() {
//	subString("ABC","");
//}


//substring  simple approach
//void substring(string str) {
//	for (int i = 0; i < str.length(); i++) {
//		for (int j = i; j < str.length(); j++) {
//			for (int k = i; k <= j; k++) {
//				cout << str[k];
//			}cout << endl;
//		}
//	}
//
//	
//	
//	
//	
//	/*for (int i = 0; i < str.length(); i++)
//	{
//		for (int j = 0; j < str.length(); j++) {
//			for (int k = 0; k <= j; k++)
//			{
//				cout << str[k];
//			}cout << endl;
//		}
//	}*/
//}
//int main() {
//	substring("ABCa");
//}

//substring using recursion
//void substring(string str, string ans) {
//	if (str.length() == 0) {
//		cout << ans << endl;
//		return;
//	}
//	char ch = str[0];
//	substring(str.substr(1), ans);
//	substring(str.substr(1), ans + ch);
//	substring(str.substr(1), ans +(to_string (int (ch))));
//}
//
//int main() {
//	substring("ABC", "");
//}


//possible words from phone digits
//string keypad[10] = { "","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
//void possible(string s,string ans) {
//	if (s.length() == 0) {
//		cout << ans << endl;
//		return;
//	}
//	char ch = s[0];
//	string code = keypad[ch - '0'];
//	for (int i = 0; i < code.length(); i++)
//	{
//		possible(s.substr(1), ans+code[i]);
//	}
//}
//int main() {
//	possible("23","");
//}


//permutation
//void permute(string str,string ans) {
//	if (str.size() == 0) {
//		cout << ans << endl;
//		return;
//	}
//	for (int i = 0; i < str.length(); i++)
//	{
//		char ch = str[i];
//		string rem = str.substr(0, i) + str.substr(i+1);
//		permute(rem, ans + ch);
//	}
//}
//int main() {
//	permute("ABC", "");
//}

//number of possible paths from a to d
//int paths(int s, int e) {
//	if (s == e) {
//		return 1;
//	}
//	if (s > e) {
//		return 0;
//	}
//	int ways = 0;
//	for (int i = 1; i < 6; i++)
//	{
//		ways+=paths(s+i, e);
//	}
//	return ways;
//}
//int main() {
//	cout<<paths(0, 3);
//}



//int ways(int i, int e,int n) {
//	if (i == n - 1 && e == n - 1) {
//		return 1;
//	}
//	else if (i >= n || e >= n) {
//		return 0;
//	}
//	return ways(i + 1, e, n)+ways(i, e + 1, n);
//}
//int main() {
//	cout<< ways(0, 0, 3);
//}





//tiling
//int ways(int n) {
//	if (n == 0) {
//		return 0;
//	}
//	else if (n == 1) {
//		return 1;
//	}
//	return ways(n - 1) + ways(n - 2);
//}
//int main() {
//	cout<<ways(5);
//}

int knapSack(int* array, int val, int w,int knapW,int size) {
	if (w > knapW) {
		return 0;
	}
	*p1 = &a;
	**p2 = q;
	else {
		for (int i = 0; i < size; i++)
		{
			if(val[i])
		}
	}
}