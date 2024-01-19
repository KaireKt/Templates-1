#include "Libraries.h"
int* findZeroCoor(const int* Arr, int size, int& outSize)
{
    int minVal = Arr[0];
    int count = 1;

    // ������� ����������� �������� � ������� � ������������ ���������� ����������� ���������
    for (int i = 1; i < size; i++)
    {
        if (Arr[i] < minVal)
        {
            minVal = Arr[i];
            //count = 1;  // ���� ����� ����� ����������� ��������, ���������� count
        }
        else if (Arr[i] == minVal)
        {
            count++;  // ����������� ���������� ����������� ����������� ���������
        }
    }

    // �������� ������������ ������ ��� ������� �������� ����������� ���������
    int* ZeroIndexes = new int[count];
    int index = 0;

    // ��������� ������ �������� ����������� ���������
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == minVal)
        {
            ZeroIndexes[index] = i;
            index++;
        }
    }

    outSize = count;  // ���������� ������ ������� ����� ��������� ��������
    return ZeroIndexes;
}