#include<iostream>
using namespace std;

class STRING {
private:
	char* C;
	int size;
public:
	STRING() {
		char temp[100];
		cout << "enter string:";
		cin.getline(temp, 200);

		size = length(temp);

		C = new char[size];
		for (int i = 0; i < size; i++)
		{
			C[i] = temp[i];
		}

	}

	void display() {
		cout << "size:";
		cout << size << endl;
		cout << "string:";
		for (int i = 0; i < size; i++)
		{
			cout << C[i];
		}

	}

	void concate(STRING& obj) {
		int i = 0;
		char* temp;
		temp = new char[size];
		for (int i = 0; i < size; i++)
		{
			temp[i] = C[i];
		}
		int s;
		C = new char[size];
		for (int i = 0; i<=size; i++)
		{
			C[i] = temp[i];
			s = i;
		}
		size += obj.size;
		int j = 0;
		while (s <= size) {
			C[s] = obj.C[j];
			s++;
			j++;
		}
	}
	
	STRING(STRING& obj) {
		size = obj.size;
		C = new char[size];
		for (int i = 0; i < size; i++)
		{
			C[i] = obj.C[i];
		}
		cout << endl;
	}

	int length(char temp[]) {
		int i = 0;
		while (temp[i] != '\0') {
			i++;
		}
		return i;
	}
};

int main() {
	STRING str;
	str.display();
	STRING str0(str);
	str0.display();
	cout << endl;

	str.concate(str0);
	str.display();
}