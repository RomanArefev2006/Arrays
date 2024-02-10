#include "iostream";
#include <string>

using namespace std;

void main() {
	setlocale(LC_ALL, "");
	int x;
	string str, res;

	cout << "Ведите число: "; cin >> x;

	for ( ; x / 2 != 0; ) {
		str += to_string(x % 2);
		x /= 2;
		if (x == 1) {
			str += "1";
		}
	}

	for (int i = str.size(); i >= 0; i--) {
		res += str[i];
	}

	cout << res;
}