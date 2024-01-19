#include "Libraries.h"
int* findZeroCoor(const int* Arr, int size, int& outSize)
{
    int minVal = Arr[0];
    int count = 1;

    // Находим минимальное значение в массиве и подсчитываем количество минимальных элементов
    for (int i = 1; i < size; i++)
    {
        if (Arr[i] < minVal)
        {
            minVal = Arr[i];
            //count = 1;  // Если нашли новое минимальное значение, сбрасываем count
        }
        else if (Arr[i] == minVal)
        {
            count++;  // Увеличиваем количество встреченных минимальных элементов
        }
    }

    // Выделяем динамическую память для массива индексов минимальных элементов
    int* ZeroIndexes = new int[count];
    int index = 0;

    // Заполняем массив индексов минимальных элементов
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == minVal)
        {
            ZeroIndexes[index] = i;
            index++;
        }
    }

    outSize = count;  // Возвращаем размер массива через ссылочный параметр
    return ZeroIndexes;
}