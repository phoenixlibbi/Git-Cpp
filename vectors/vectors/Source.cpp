#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//int main() {
//
//	vector<int> v;
//
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//
//	//ways
//	
//	
//	//loop
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//
//	//iterator
//	vector<int>::iterator i;
//	for (i=v.begin();i!=v.end();i++)
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//
//	//auto
//	for (auto element : v) {
//		cout << element << " ";
//	}
//	cout << endl;
//
//	v.pop_back();
//
//	vector<int> v0(3, 7);
//
//	swap(v, v0);
//
//	for (auto element:v)
//	{
//		cout << element << " ";
//	}
//	cout << endl;
//	for (auto element : v0)
//	{
//		cout << element << " ";
//	}
//	cout << endl;
//
//	sort(v0.begin(), v0.end());
//
//
//}
//
//int main() {
//
//	pair<int, int> p;
//	p.first = 10;
//	p.second = 20;
//
//
//}


bool compare(pair<int, int> p0, pair<int, int> p1) {
	return p0.first < p1.first;
}

int main() {
	int arr[] = { 10,16,7,14,5,3,2,9 };
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	vector<pair<int, int>> v;

	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		/*pair <int, int> p;
		p.first = arr[i];
		p.second = i;
		v.push_back(p);*/

		v.push_back(make_pair(arr[i], i));
	}

	sort(v.begin(),v.end(),compare);

	for (int i = 0; i < v.size(); i++)
	{
		arr[v[i].second] = i;
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << arr[i] << " ";
	}
}