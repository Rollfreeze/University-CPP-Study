#include "stdafx.h"

// общий массив на четные и на нечетные. потом в один массив и сначала идут только четные потом тольно нечетные
void Change_array(int* A, int N, int* B, int* C, int* D)
{
	int even = 0; // четный
	int odd = 0; // нечетный
	int minindex;

	for (int i = 0; i < N; i++) // создание аналога первого массива
	{
		B[i] = A[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0) // четный индекс
		{
			C[even] = B[i];
			even++;
		}
		else // нечетный индекс
		{
			D[odd] = B[i];
			odd++;
		}
	}

	for (int i = 0; i < even - 1; i++) // selection sort for even arr
	{
		minindex = i;
		for (int j = i + 1; j < even; j++)
		{
			if (C[j] < C[minindex])
			{
				minindex = j;
			}
		}
		swap(C[minindex], C[i]);
	}

	for (int i = 0; i < odd - 1; i++) // selection sort for odd arr
	{
		minindex = i;
		for (int j = i + 1; j < odd; j++)
		{
			if (D[j] < D[minindex])
			{
				minindex = j;
			}
		}
		swap(D[minindex], D[i]);
	}

	cout << "even indexes:" << endl;
	for (int i = 0; i < even; i++)
	{
		cout << C[i] << setw(5);
	}
	cout << endl;

	cout << "odd indexes:" << endl;
	for (int i = 0; i < odd; i++)
	{
		cout << D[i] << setw(5);
	}
	cout << endl;
}