#include "iostream";
#include <random>

using namespace std;

void main() {
	setlocale(LC_ALL, "");

    const int SIZE = 10;
    int lower_bound;
    int upper_bound;
    random_device rd;  // —оздаем устройство дл€ генерации случайных чисел
    mt19937 gen(rd()); // »нициализируем генератор случайных чисел с использованием устройства
    int randomArr[SIZE];

    // ќпредел€ем диапазон дл€ генерации случайного числа
    cout << "«аполнить массив числами в диопазоне от: "; cin >> lower_bound;
    cout << "ƒо: "; cin >> upper_bound;

    uniform_int_distribution<> distrib(lower_bound, upper_bound); // ќпредел€ем распределение

    for (int i = 0; i < SIZE; i++) {
        // √енерируем случайное число 
        randomArr[i] = distrib(gen);
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "\t" << randomArr[i];
    }
    cout << endl;

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (randomArr[j] > randomArr[j + 1]) {
                int num = randomArr[j];
                randomArr[j] = randomArr[j + 1];
                randomArr[j + 1] = num;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "\t" << randomArr[i];
    }
    cout << endl;
}