#include "pch.h"
#include <clocale>
#include "iostream"

using namespace std;


/*�������� � ����� ��������� ������� float travelTime(float distance, float speed). 
��� ����� �������� ����� � ���� � ��� ���� ������������ assert, ����� ��������� ������� � ������������� ��������. 
�������� ��� ������� � main. ���������, ��� ������� ���������� �� ���� assert. 
�� �������� ���������� ������������ ���� cassert.*/

void task3() {
    float distance, speed;
    distance = 4546;  
    speed = -26;  

    cout << "����������: " << distance << " ��" << endl;
    cout << "��������: " << speed << " ��/�" << endl;

    assert(speed > 0);

    float time = distance / speed;
    cout << "����� � ����: " << time << " �����" << endl;
}