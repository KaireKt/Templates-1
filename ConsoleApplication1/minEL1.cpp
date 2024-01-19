//#include "libraries.h"
//#include "prototypes.h"
//
//int minEL(int Arr[], int min_elements[], int size)
//{
//    int el_min = 0, count_el_min = 1;
//    for (int i = 1; i < size; ++i)
//    {
//        if (abs(Arr[i]) < abs(Arr[el_min]))
//        {
//            el_min = i;
//        }
//        else if (Arr[el_min] == Arr[i])
//            count_el_min++;
//    }
//    int min;
//    min_elements[0] = Arr[0];
//    min = Arr[0];
//    int temp = min;
//    int j = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        if (Arr[i] <= min)
//        {
//            min = Arr[i];
//
//            min_elements[j++] = i;
//            if (temp != min)
//            {
//                temp = min;
//                j = 0;
//                min_elements = new int[j];
//                min_elements[j++] = i;
//            }
//        }
//    }
//    cout << "Минимальный по модулю элемент одномерного массива = " << Arr[el_min] << endl;
//    for (int i = 0; i < 1; i++)
//        cout << "Координаты минимальных элементов одномерного массива: " << min_elements[i] << ", ";
//    for (int i = 1; i < j; i++)
//        cout << min_elements[i];
//    cout << endl;
//    //cout << "Позиция минимального элемента одномерного массива = " << el_min << endl;
//    cout << "Число минимальных элементов в одномерном массиве = " << count_el_min << endl;
//
//    delete[] Arr;
//    delete[] min_elements;
//
//    return 0;
//}