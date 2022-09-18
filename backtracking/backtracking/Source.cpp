#include<iostream>
using namespace std;

bool isSafe(int** array, int x, int y, int n) {
	if (x < n && y < n && array[x][y] == 1) {
		return true;
	}
	return false;
}

bool ratInMaze(int** array, int x, int y, int n, int** ansArray) {
	
	if (x == n - 1 && y == n - 1) {
		ansArray[x][y] = 0;
		return true;
	}
	
	if (isSafe(array, x, y, n)) {
		ansArray[x][y] = 1;
		if (ratInMaze(array, x + 1, y, n, ansArray)) {
			return true;
		}
		if (ratInMaze(array, x, y + 1, n, ansArray)) {
			return true;
		}
		ansArray[x][y] = 0;  //backtracking
		return false;
	}
	return false;
}

int main() {
	int n;
	cin >> n;

	int** array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cin >> array[i][j];
		}
	}

	int** solArray = new int* [n];
	for (int i = 0; i < n; i++)
	{
		solArray[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			solArray[i][j] = 0;
		}
	}
	if (ratInMaze(array, 0, 0, n, solArray)) {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) {
				cout << solArray[i][j] << " ";
			}cout << endl;
		}
	}
}