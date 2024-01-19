#include "Libraries.h"
int* findMinIndexes(const int* Arr, int size, int& outSize)
{
    int minVal = Arr[0];
    int count = 1;
    int* minIndexes = NULL;
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
    minIndexes = new int[count];
    int index = 0;

    // ��������� ������ �������� ����������� ���������
    for (int i = 0; i < size; i++) 
    {
        if (Arr[i] == minVal) 
        {
            minIndexes[index] = i;
            index++;
        }
    }

    outSize = count;  // ���������� ������ ������� ����� ��������� ��������

    return minIndexes;
}