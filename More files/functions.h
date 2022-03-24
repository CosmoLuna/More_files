#pragma once
#include <iostream>

int sum(int a, int b);
void fillArr(int arr[], int length, int a, int b);
template <typename T> void showArr(T arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
