#include<iostream>
using namespace std;
int moves(int discs) {
	if (discs == 1) {
		return 1;
	}
	else {
		return(1 +(2*(moves(discs - 1))));
	}
}
void hanno(int disc,char src,char helper,char des) {
	if (disc == 1) {
		//hanno(disc, src, des, helper);
		cout << "moved from " << src << " to " << des << endl;
		return;
	}
	else {
		hanno(disc - 1, src, des, helper);
		cout << "moved from " << src << " to " << des << endl;
		hanno(disc - 1, helper, src, des);
		//cout << "moved from " << src << " to " << des << endl;
	}
	return;
}
int main() {
	hanno(2, 'A', 'B', 'C');
	cout << endl <<moves(2);
}