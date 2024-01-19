#pragma once


template <typename T1>
bool CheckArr2(T1 Arr[], int size)
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