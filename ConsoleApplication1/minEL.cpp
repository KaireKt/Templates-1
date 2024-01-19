#include "libraries.h"
#include "prototypes.h"

int minEL(int Arr[], int size)
{
    int el_min = 0, count_el_min = 1;
    for (int i = 1; i < size; ++i)
    {
        if (abs(Arr[i]) < abs(Arr[el_min]))
        {
            el_min = i;
        }
        if (Arr[el_min] == Arr[i])
        {
            count_el_min++;
        }
       
    }

    return Arr[el_min];

}
   

