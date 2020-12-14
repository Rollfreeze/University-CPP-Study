#include "stdafx.h"

void output_double_array(int** A, int S, int K)
{
	cout << endl;
	cout << "the matrix is:" << endl;
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cout << A[i][j] <<"\t";
		}
		cout << endl;
	}
}