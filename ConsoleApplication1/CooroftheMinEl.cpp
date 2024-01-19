#include "Libraries.h"
void CooroftheMinEl(int Arr[], int min_elements[], int size)
{
    int min;
    min_elements[0] = Arr[0];
    min = Arr[0];
    int temp = min;
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] <= min)
        {
            min = Arr[i];

            min_elements[j++] = i;
            if (temp != min)
            {
                temp = min;
                j = 0;
                min_elements = new int[j];
                min_elements[j++] = i;
            }
        }
    }
    for (int i = 0; i < 1; i++)
        cout << "Coordinates of the minimum elements of a one-dimensional array: " << min_elements[i]+1;
    for (int i = 1; i < j; i++)
        cout << ", " << min_elements[i]+1;
    cout << endl;
}