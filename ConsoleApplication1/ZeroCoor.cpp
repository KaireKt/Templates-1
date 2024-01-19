#include "Libraries.h"
void ZeroCoor(int Arr[], int min_elements[], int size)
{
	
	int min;
	min_elements[0] = Arr[0];
	min = Arr[0];
	int temp = min;
	int j = 0;

	for (int i = 0; i < size; i++)
	{
		if (Arr[i] == 0)
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
		cout << "Координаты элементов равных нулю: " << min_elements[i];
	for (int i = 1; i < j; i++)
		cout << ", " << min_elements[i];
	cout << endl;
	/*delete[] Arr;
	delete[] min_elements;*/
}