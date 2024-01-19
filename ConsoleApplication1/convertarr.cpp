#include "libraries.h"
#include "prototypes.h"
void convertarr(int Arr[], int min_elements[], int size)
{
    int* arr = new int[size];
    int iterator_chetnuh = 0;
    int iterator_NE_chetnuh = size / 2;         // начинаем запись с середины

    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)                        // четные 0,2,4,6, ...  записываем в новый массив temp[] на места от 0 до середины
        {
            arr[iterator_chetnuh] = Arr[i];
            iterator_chetnuh++;
        }
        else                                  // не четные
        {
            arr[iterator_NE_chetnuh] = Arr[i];// записываем в новый массив temp[] на места от середины до конца
            iterator_NE_chetnuh++;
        }
    }

    cout << endl;
    for (int i = 0; i < size; i++)
        cout << " " <<arr[i];                // вывод

    /*delete[] Arr;
    delete[] min_elements;*/
    delete[] arr;

}