#include "stdafx.h"

int mult_ellements(int* A, int N)
{
	int array_mult;
	for (int i = 0; i < N; i++)
	{
		if (A[i] > 0)
		{
			array_mult = 1;
			for (int i = 0; i < N; i++)
			{
				if (A[i] > 0)
				array_mult = array_mult * A[i];
			}
			break;
		}
		else if (A[i] == 0)
		{
			array_mult = 0;
		}
		else
		{
			array_mult = -1;
		}
	}
	return array_mult;
}