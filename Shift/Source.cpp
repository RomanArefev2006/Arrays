#include "iostream";

using namespace std;

void main() {
	setlocale(LC_ALL, "");

	int x, num;
	const int SIZE = 10;
	int fib[SIZE] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	
	cout << "Введите число: "; cin >> x;

	for (int i = 0; i < x; i++) {
		num = fib[0];
		for (int j = 0; j < SIZE - 1; j++) {
			fib[j] = fib[j + 1];
		}
		fib[SIZE - 1] = num;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << "\t" << fib[i];
	}
}