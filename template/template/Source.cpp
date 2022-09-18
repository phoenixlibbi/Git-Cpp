#include<iostream>
using namespace std;
template <class T>
class complex {
	T real;
	T img;
public:
	complex() {
		real = 0;
		img = 0;
	}
	complex(T r, T i) {
		real = r;
		img = i;
	}
	complex(complex& obj) {
		real = obj.real;
		img = obj.img;
	}
	void setReal(T r) {
		real = r;
	}
	void setImg(T i) {
		img = i;
	}
	T getReal() const {
		return real;
	}
	T getImg() const {
		return img;
	}
	void display() {
		cout << getReal() << "+" << getImg() << "i" << endl;
	}
	complex& operator+(complex& obj) {
		complex sum;
		sum.real = getReal() + obj.getReal();
		sum.img = getImg() + obj.getImg();
		return sum;
	}
};

int main() {
	complex<int> T1('a', 3);
	complex<int> T2(T1);
	T1.display();
	T2.display();
	complex<int> T3;
	T3 = T1 + T2;
	T3.display();
}