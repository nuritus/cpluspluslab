#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector() //����
{//�� �� ���� �� ������� �� ����� ����� - ����� ��� ��������� ���� ������ ��� ����
    cout << "enter 10 numbers\n";
    for (int i = 0; i < 10; i++)
        cin >> numbers[i];
}

//�������� �����
int Vector::add() //������ �� ����� �� ����� �����
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += numbers[i];
    return sum;
}

void Vector::add(int number)//������ �� ������ ��� ���� �����
{
    for (int i = 0; i < 10; i++)
        numbers[i] += number;
}

void Vector::add(int number, int place)//������ �� ������ ������� �����
{
    numbers[place] += number;
}

