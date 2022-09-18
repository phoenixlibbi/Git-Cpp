#include<iostream>
using namespace std;
float divide(int x, int y) {
	if (y == 0) {
		throw y;
	}
		return (static_cast<float>(x) / y);
}
int main() {
	int a, b;
	bool tryl = true;
	while(tryl){
	try {
	cin >> a >> b;
	cout<<divide(a, b);
		tryl = false;
	}
	catch (int x) {
		cout << "this is error";
	}
	}
}