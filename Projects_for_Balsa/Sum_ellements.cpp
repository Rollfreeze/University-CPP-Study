#include "stdafx.h"

int Sum_ellements(int* A, int N, int* B)
{
	int sum = 0;
	int index;
	int j = 0;
	int minn = 101;

	for (int i = 0; i < N; i++)
	{
		if (A[i] < minn)
		{
			minn = A[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] == minn)
		{
			B[j] = i;
			j++; //количество минимальнейших элементов
		}
	}


	if ((j == 1) && (A[0] == minn))
	{
		sum = 11111111;
	}

	else if ((j == 1) && (A[0] != minn) && (A[1] == minn)) // 2 1 3
	{
		sum = 22222222;
	}
	
	else if ( (j == 1) && (A[0] != minn) && (A[1] != minn) ) // 2 2 1 3
	{
		for (int i = 0; i < B[0]; i++)
		{
			sum += A[i];
		}
	}

	else if (j == N) // 0 0 0 0
	{
		cout << "all the elements are same. Choose the index till what you wanna cout the sum of the elements !!" << endl;
		for (int i = 0; i < j; i++)
		{
			cout << "till the " << B[i] << " index" << endl;
		}

		cin >> index;

		if (index == 0)
		{
			sum = 33333333;
		}
		else if (index == 1)
		{
			sum = 44444444;
		}
		else
		{
			for (int i = 0; i < index; i++)
			{
				sum += A[i];
			}
		}

	}

	else
	{
		cout << "Your array has several equal the most min elements\n";
		cout << "Choose the index till what you wanna cout the sum of the elements\n";

		for (int i = 0; i < j; i++)
		{
			cout << "till the " << B[i] << " index" << endl;
		}

		cin >> index;

		if (index == 0)
		{
			sum = 55555555;
		}
		else if (index == 1)
		{
			sum = 44444444;
		}
		else
		{
			for (int i = 0; i < index; i++)
			{
				sum += A[i];
			}
		}
	}

	return sum;
}