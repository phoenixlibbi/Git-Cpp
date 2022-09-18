#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//convert case 
//int main() {
//	string str = "abcdefghijklmnopqrstuvwxyz";
//	//cout << 'a' - 'A';
//
//	//to upper case 
//	/*for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] -= 32;
//		}
//	}*/
//
//	// to upper function
//	transform(str.begin(), str.end(), str.begin(), ::toupper);
//	cout << str;
//	cout << endl;
//	//to lower csse 
//	/*for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			str[i] += 32;
//		}
//	}*/
//	// to lower function
//	transform(str.begin(), str.end(), str.begin(), ::tolower);
//	cout << str;
//}


//sort
//int main() {
//	string str = "12378382427843943";
//	//sort(str.begin(), str.end(), greater<int>());
//	//sort(str.begin(), str.end(), less<int>());
//	cout << str;
//}


//maxFrequency
//int main() {
//	string str = "maryum nayab";
//	int freq[26];
//	for (int i = 0; i < 26; i++)
//	{
//		freq[i] = 0;
//	}
//	for (int i = 0; i < str.size(); i++)
//	{
//		freq[str[i] - 'a']++;
//	}
//
//	char answer = 'a';
//	int maxFreq = 0;
//	for (int i = 0; i < 26; i++)
//	{
//		if (freq[i] > maxFreq) {
//			maxFreq = freq[i];
//			answer = i+'a';
//		}
//	}
//	cout << maxFreq << " " << answer << endl;
//}


//reverse a string
//int main() {
//	string str = "maryum";
//	int size = str.length();
//	for (int i = size; i >= 0; i--)
//	{
//		cout << str[i];
//	}
//}