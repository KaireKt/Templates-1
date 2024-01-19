#pragma once

template <typename T1>
T1* convertarr1(T1* Arr, int size)
{
    T1* arr = new T1[size];
    int iterator_chetnuh = 0;
    int iterator_NE_chetnuh = size / 2;         // �������� ������ � ��������

    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)                        // ������ 0,2,4,6, ...  ���������� � ����� ������ temp[] �� ����� �� 0 �� ��������
        {
            arr[iterator_chetnuh] = Arr[i];
            iterator_chetnuh++;
        }
        else                                  // �� ������
        {
            arr[iterator_NE_chetnuh] = Arr[i];// ���������� � ����� ������ temp[] �� ����� �� �������� �� �����
            iterator_NE_chetnuh++;
        }
    }

    return arr;         // �����


}