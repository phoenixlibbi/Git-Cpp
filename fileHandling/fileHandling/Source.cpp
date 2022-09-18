#include<iostream>
#include<fstream>
#include<string>


using namespace std;

int main() {


	ifstream check("student.txt");
	int count = 0;

	string str;
	while (getline(check, str)) {
		count++;
	}

	check.close();

	//cout << "cout is" << count;

	string* id = new string[count];
	string* name = new string[count];
	string* des = new string[count];
	int* salary = new int[count];
	int* noOfLeaves = new int[count];






	{
		string iD;
		string nm;
		string ds;
		int sal;
		int	leav;

		cout << "Enter id";
		cin >> iD;
		cout << "Enter name";
		cin >> nm;
		cout << "Enter des";
		cin >> ds;
		cout << "Enter sal";
		cin >> sal;
		cout << "Enter leave";
		cin >> leav;

		fstream out("student.txt", ios::app);

		out << iD << "\t" << nm << "\t" << ds << "\t" << sal << "\t" << leav << endl;
		out.close();
	}



	fstream obj;
	obj.open("student.txt", ios::app | ios::in);

	int index = 0;

	while (!obj.eof()) {
		if (obj.eof()) {
			break;
		}
		obj >> id[index];
		obj >> name[index];
		obj >> des[index];
		obj >> salary[index];
		obj >> noOfLeaves[index];
		index++;
	}

	obj.close();

	cout << id[2] << " "
		<< name[2] << " "
		<< des[2] << " "
		<< salary[2] << " "
		<< noOfLeaves[2] << " "
		<< endl;


	delete[] id;
	delete[] name;
	delete[] des;
	delete[] salary;
	delete[] noOfLeaves;





	return 0;
}