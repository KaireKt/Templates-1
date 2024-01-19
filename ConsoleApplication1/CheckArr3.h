#pragma once

template <typename T1>
int* CheckArr3(const T1* Arr, int size, int& outsize)
{
    T1 minVal = Arr[0];
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
    outsize = count;  // ���������� ������ ������� ����� ��������� ��������

    return minIndexes;
}
