//����� 11  ����� 9
// ����� ����� ����
//�������� ���� ����� �STD

#include <iostream>
using namespace std;

int func(const void* a, const void* b)
{
    return (*(float*)b - *(float*)a);
    // �������� ������ ���� ����� ���� �������� ���� ���� ����
}

void main()
{
    float arr[] = { 2.3 , -3, 4.5, -10.6 };
    qsort(arr, 4, 4, func);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
}
