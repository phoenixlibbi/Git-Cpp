#include<iostream>
#include<math.h>
using namespace std;

//program 6.2
//double getLength() {
//	cout << "Enter the length of rectangle:";
//	double l;
//	cin >> l;
//	return l;
//}
//
//double getWidth() {
//	cout << "Enter the width of rectangle:";
//	double w;
//	cin >> w;
//	return w;
//}
//
//double getArea(double l,double w) {
//	return l*w;
//}
//
//void displayData(double l,double w,double a) {
//	cout << "area of rectangle with length " << l << "m and width " << w << "m is " << a << "m" << endl;
//}
//
//int main() {
//	double length = 0,
//		width = 0,
//		area = 0;
//	length = getLength();
//	width = getWidth();
//	area = getArea(length, width);
//	displayData(length,width,area);
//}



//program 6.6
//double kineticEnergy(double m, double v) {
//	return ((0.5) * (m) * (pow(v, 2)));
//}
//int main() {
//	double ke = 0,
//		m = 0,
//		v = 0;
//	cout << "enter the mass of object (kilograms):";
//	cin >> m;
//	cout << "enter the velocity of object (meters per second):";
//	cin >> v;
//	ke = kineticEnergy(m, v);
//	cout << "kinetic energy of object is:" << ke << endl;
//}




//program 6.10
//double futureValue(double p, double i, double t) {
//	return (p * (pow((1 + i), t)));
//}
//int main() {
//	double F = 0,  // F is the future value of the account after the specified time period. 
//		P = 0,  //P is the present value of the account.
//		i = 0,  //i is the monthly interest rate .
//		t = 0;  //t is the number of months .
//	cout << "enter the amount present in your account:";
//	cin >> P;
//	cout << "enter the monthly interest rate:";
//	cin >> i;
//	i = i / 100;  //convert in points
//	cout << " enter the number of months that the money will be left in the account:";
//	cin >> t;
//	F = futureValue(P, i, t);
//	cout << "the account’s future value will be:" << F << endl;
//}





//program 6.14
//void display(int ,int ,bool ,int);
//void  Ordered() {
//	cout << "enter the number of spools ordered:";
//	int sOrdered = 0;
//	do {
//		cin >> sOrdered;
//	} while (sOrdered < 1);
//	
//
//	cout << "enter the number of spools in stock:";
//	int sIs = 0;
//	do {
//		cin >> sIs;
//	} while (sIs < 0);
//	
//
//	char ask = 0;
//	bool check = false;
//	cout << "do yo have special shipping and handling charges or not? \n y or n ->";
//	do {
//		cin >> ask;
//		if (ask == 'y' || ask == 'Y') {
//			check = true;
//		}
//		else {
//			check = false;
//		}
//	} while (ask != 'y' && ask != 'n' && ask != 'Y' && ask != 'N');
//	display(sOrdered, sIs, check, 10);
//}
//
//void display(int order, int stock, bool special, int shipping) {
//		int readyToShip = 0;
//		cout << endl << endl;
//		if (order <= stock) {
//			readyToShip = order;
//			cout <<"spools ready to ship from current stock are:" << order << endl;
//		}
//		else {
//			order -= stock;
//			readyToShip = order;
//			cout << "spools ready to ship from current stock:" << order << endl;;
//		}
//		if (order > stock) {
//			int back = 0;
//			back = order - stock;
//			cout << "The number of spools on backorder are:" << back << endl;;
//		}
//		double subTotal = (readyToShip*100);
//		cout << "Subtotal of the portion ready to ship is:" << subTotal << endl;
//		double shippingCharge = 0;
//		if (special) {
//			shippingCharge = order * shipping;
//		}
//		cout << "Total shipping and handling charges on the portion ready to ship are:" << shippingCharge<<endl;
//		cout << "Total of order ready to ship is:" << shippingCharge + subTotal;
//}
//int main() {
//	Ordered();
//
//	return 0;
//}





//program 6.22
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
	int n;

	cout << "enter the number you wanna check:";
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "number is prime.";
		return 0;
	}
	if (isPrime(n)) {
		cout << "number is prime.\n";
	}
	else {
		cout << "number is not prime.\n";
	}
}