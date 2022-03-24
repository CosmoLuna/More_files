// Персональный шаблон проекта С++
#include <iostream>
#include "functions.h"
#include "structures.h"
#include "data.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	//работа с функциями functions.h
	/*int n, m;
	cout << "Введите два числа: ";
	cin >> n >> m;
	cout << sum(n, m) << endl;

	int arr[10];
	fillArr(arr, 10, 0, 20);
	cout << "Изначальный массив:\n";
	showArr(arr, 10);*/

	// работа со структурами structures.h
	/*person Tom = {"Tom Smith", {3, 5, 1990}, "director", 120000};
	showObj(Tom.birthday);
	showObj(Tom);*/

	x = 10;
	cout << "x = " << x << endl;
	y = 15;
	cout << "y = " << y << endl;

	fillmx();

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << mx[i][j] << "\t";
		cout << endl;
	}



	return 0;
}