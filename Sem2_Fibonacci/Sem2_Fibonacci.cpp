﻿#include<iostream>
using namespace std;


int func(int N) {
	if (N == 0) {
		return 0;
	}
	if (N == 1) {
		return 1;
	}

	return func(N - 1) + func(N - 2);
}


int main() {
	int n;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << func(i) << " ";
	}

	return 0;
}