#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*������������ ������ � ������� 15 ������� �����. 
���������� ��������� �� � ������� � ������� � ������� �� �������� � ��������. 
�� ����������� ����������� ������� �������������� ������ � �������� �� �������.*/

void task2() {
    const int size = 15;
    float numbers[size];

    cout << "������� 15 ������� �����: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                float temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "������� ����� � ������� ��������: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << "| ";
    }
    cout << endl;
}