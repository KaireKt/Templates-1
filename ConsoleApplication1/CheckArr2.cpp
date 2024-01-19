#include "Libraries.h"

bool CheckArr2(int Arr[], int size)
{
	int flag = 0;

	for (int i = 0; i < size; i++)
	{
		if (Arr[i] == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}