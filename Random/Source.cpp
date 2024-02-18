#include "iostream";
#include <random>

using namespace std;

void main() {
	setlocale(LC_ALL, "");

    const int SIZE = 10;
    int lower_bound;
    int upper_bound;
    random_device rd;  // ������� ���������� ��� ��������� ��������� �����
    mt19937 gen(rd()); // �������������� ��������� ��������� ����� � �������������� ����������
    int randomArr[SIZE];

    // ���������� �������� ��� ��������� ���������� �����
    cout << "��������� ������ ������� � ��������� ��: "; cin >> lower_bound;
    cout << "��: "; cin >> upper_bound;

    uniform_int_distribution<> distrib(lower_bound, upper_bound); // ���������� �������������

    for (int i = 0; i < SIZE; i++) {
        // ���������� ��������� ����� 
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