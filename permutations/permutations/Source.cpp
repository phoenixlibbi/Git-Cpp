#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//vector<vector<int>> ans;
//
//void permutations(vector<int> &v, int index) {
//	if (index == v.size()) {
//		ans.push_back(v);
//		return;
//	}
//	for (int i = index; i < v.size(); i++)
//	{
//		swap(v[index], v[i]);
//		permutations(v, index+1);
//		swap(v[index], v[i]);
//	}
//	return;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (auto &element : v) {
//		cin >> element;
//	}
//
//	permutations(v, 0);
//
//	for (auto element:ans)
//	{
//		for (auto i : v) {
//			cout << i << " ";
//		}cout << endl;
//	}
//}


//short permutations

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	vector<vector<int>> ans;
	for (auto &i : v) {
		cin >> i;
	}

	sort(v.begin(), v.end());

	do {
		ans.push_back(v);
	} while (next_permutation(v.begin(), v.end()));
		for (auto v1:ans)
	{
		for (auto i : v) {
			cout << i << " ";
		}cout << endl;
	}
}