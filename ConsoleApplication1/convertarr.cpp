#include "libraries.h"
#include "prototypes.h"
void convertarr(int Arr[], int min_elements[], int size)
{
    int* arr = new int[size];
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

    cout << endl;
    for (int i = 0; i < size; i++)
        cout << " " <<arr[i];                // �����

    /*delete[] Arr;
    delete[] min_elements;*/
    delete[] arr;

}