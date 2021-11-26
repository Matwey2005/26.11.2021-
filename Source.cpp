#include <iostream>
#include <time.h>
#include <ctime> 
#include<iomanip> 
using namespace std; 
int main() {
	const int n = 3;
	char field[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int t = rand() % 2;
			if (t == 0) field[i][j] = 'x';
			else field[i][j] = 'o';

		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << field[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << "|---|---|---|" << endl;
		for (int j = 0; j < n; j++) {
			cout << "| " << field[i][j] << ' ';
		}
		cout << '|' << endl;
	}
	cout << "|---|---|---|" << endl;
	//Проверка  того, что выиграли
	//проверка строк
	//провера 1-й строки
	if (field[1][0] == 'x' && field[1][1] == 'x' && field[1][2] == 'x') {
		cout << "x wins" << endl; 
	}
	//Проверка 2-й строки
	if (field[2][0] == 'x' && field[2][1] == 'x' && field[2][2] == 'x') {
		cout << "x wins" << endl;
	}
	//Проверка 3-й строки 
	if (field[3][0] == 'x' && field[3][1] == 'x' && field[3][2] == 'x') {
		cout << "x wins" << endl;
	}
	//Проверка 0-го столбца 
	if (field[0][0] == 'x' && field[1][0] == 'x' && field[2][0] == 'x') {
		cout << "x wins" << endl;
	}
	//Проверка 1-го столбца 
	if (field[0][1] == 'x' && field[1][1] == 'x' && field[2][1] == 'x') {
		cout << "x wins" << endl;
		//проверка 2-го столбца
		if (field[0][2] == 'x' && field[1][2] == 'x' && field[2][2] == 'x') {
			cout << "x wins" << endl;
		}
	}
	//Проверка диагонали основной
	if (field[0][0] == 'x' && field[1][1] == 'x' && field[2][2] == 'x') {
		cout<<"x wins 
	}
	//Проверка диагонали побочной 
	for (int i = 0; i < n; i++)field[i][n - 1 - i] = 'o';
}