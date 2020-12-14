#include "stdafx.h"

void outputArray(int* A, int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << setw(5);
	}
	cout << endl;
}
