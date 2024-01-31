#include "pch.h"
#include "iostream"
#include <conio.h>
#include <clocale>
#include "iostream"

using namespace std;

void task1();
void task2();
void task3();

int main() {
    setlocale(LC_ALL, "Rus");

    cout << "Домашняя работа к gпервой лекции. Одномерные массивы. Базовые алгоритмы на массивах" << endl;


    while (true)
    {
        cout << "1: Многоквартирный дом." << endl;
        cout << "2: Сортировка." << endl;
        cout << "3: Использование assert." << endl;
        
        int task;
        cin >> task;

        if (task == 1) {
            system("cls");
            cout << "Многоквартирный дом." << endl;
            task1();
            _getch();
            system("cls");
        }

        else if (task == 2) {
            system("cls");
            cout << "Сортировка." << endl;
            task2();
            _getch();
            system("cls");;
        }

        else if (task == 3) {
            system("cls");
            cout << "Использование assert." << endl;
            task3();
            _getch();
            system("cls");
        }

        else
        {
            system("cls");
            cout << "некорректный ввод. Выход из программы";
            break;
        }
    }

}
