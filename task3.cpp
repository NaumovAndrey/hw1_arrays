#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*Создайте в своей программе функцию float travelTime(float distance, float speed). 
Она будет находить время в пути и при этом использовать assert, чтобы отбросить нулевую и отрицательную скорость. 
Вызовите эту функцию в main. Убедитесь, что падение происходит за счёт assert. 
Не забудьте подключить заголовочный файл cassert.*/

void task3() {
    float distance, speed;
    distance = 4546;  
    speed = -26;  

    cout << "Расстояние: " << distance << " км" << endl;
    cout << "Скорость: " << speed << " км/ч" << endl;

    assert(speed > 0);

    float time = distance / speed;
    cout << "Время в пути: " << time << " часов" << endl;
}