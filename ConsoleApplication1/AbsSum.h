#pragma once

template <typename T>
T AbsSum(int n, T** a)
{
	T sum = 0; for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			sum += abs(a[j][i]);

	return sum;
}
