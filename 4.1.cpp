// Lab_03_1.cpp
// < Огоновський Роман >
// Лабораторна робота № 4.1
// Цикли.
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i=1;
	double N, P;
	cout << "N= "; cin >> N;
	P = 0;
	while (i <= N) {
		P += (sqrt(1 + pow(cos(sin(i)), 2))) / (1 + pow(sin(cos(i)), 2));
		i++;
	}
	cout << "1)P= " << P << endl;
	P = 0;
	i = 1;

	do {
		P += (sqrt(1 + pow(cos(sin(i)), 2))) / (1 + pow(sin(cos(i)), 2));
		i++;
	} while (i <= N);

	cout << "2)P= " << P << endl;

	P = 0;
	for (i = 1; i <= N; i++) {
		P += (sqrt(1 + pow(cos(sin(i)), 2))) / (1 + pow(sin(cos(i)), 2));
	}
	cout << "3)P= " << P << endl;

	P = 0;
	for (i = N; i >= 1; i--) {
		P += (sqrt(1 + pow(cos(sin(i)), 2))) / (1 + pow(sin(cos(i)), 2));
	}
	cout << "2)P= " << P << endl;

	return 0;

}