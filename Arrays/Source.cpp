#include "iostream";

using namespace std;
//#define ENTERING_VALUES
//#define SHOW_ELEMENT
//#define SHOW_ELEMENT_REVERSE
//#define ARITHMETIC_MEAN
//#define MIN_ELEMENT
//#define MAX_ELEMENT

void main() {
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 32,1,8,100,7 };

#ifdef ENTERING_VALUES
	for (int i = 0; i < SIZE; i++) {
		cout << "¬ведите значение " << i + 1 << ": ";
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ENTERING_VALUES

#ifdef SHOW_ELEMENT
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // SHOW_ELEMENT

#ifdef SHOW_ELEMENT_REVERSE
	for (int i = SIZE; i > 0; i--) {
		cout << arr[i - 1] << "\t";
	}
	cout << endl;
#endif // SHOW_ELEMENT_REVERSE

#ifdef SUM_ELEMENT
	int res = 0;
	for (int i = 0; i < SIZE; i++) {
		res += arr[i];
	}
	cout << res;
#endif // SUM_ELEMENT

#ifdef ARITHMETIC_MEAN
	int res = 0;
	for (int i = 0; i < SIZE; i++) {
		res += arr[i];
	}
	cout << res / SIZE;
#endif // ARITHMETIC_MEAN

#ifdef MIN_ELEMENT
	int min = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	cout << min;
#endif // MIN_ELEMENT

#ifdef MAX_ELEMENT
	int max = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;
#endif // MAX_ELEMENT

}