#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*Пользователь вводит в консоль 15 дробных чисел. 
Необходимо прочитать их и вывести в консоль в порядке от большего к меньшему. 
По возможности используйте минимум дополнительной памяти и проходов по массиву.*/

void task2() {
    const int size = 15;
    float numbers[size];

    cout << "Введите 15 дробных чисел: " << endl;
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

    cout << "Дробные числа в порядке убывания: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << "| ";
    }
    cout << endl;
}