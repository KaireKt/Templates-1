#pragma once

template <typename T1>
T1 sum(T1 Arr[], int size)
{
	T1 sum = 0;
	int ind;

	for (int i = 0; i < size; i++)
	{
		if (Arr[i] == 0)
		{
			ind = i;
			break;
		}
	}

	for (int f = ind; f < size; f++)
	{
		sum += abs(Arr[f]);
	}

	return sum;
}
