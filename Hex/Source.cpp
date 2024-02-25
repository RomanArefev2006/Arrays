#include "iostream"
#include <string>

using namespace std;

void main() {
	setlocale(LC_ALL, "");
	
	int x;
	string str, res;

	cout << "Введите число: "; cin >> x;

	for (; x / 16 != 0; ) {
		if (x % 16 == 10) {
			str += "A";
			x /= 16;
		}
		else if (x % 16 == 11) {
			str += "B";
			x /= 16;
		}
		else if (x % 16 == 12) {
			str += "C";
			x /= 16;
		}
		else if (x % 16 == 13) {
			str += "D";
			x /= 16;
		}
		else if (x % 16 == 14) {
			str += "E";
			x /= 16;
		}
		else if (x % 16 == 15) {
			str += "F";
			x /= 16;
		}
		else {
			str += to_string(x % 16);
			x /= 16;
		}


		if (x <= 16) {
			str += to_string(x);
		}
	}

	for (int i = str.size(); i >= 0; i--) {
		res += str[i];
	}

	cout << res;
}