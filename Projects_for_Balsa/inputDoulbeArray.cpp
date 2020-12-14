#include "stdafx.h"

void inputDoulbeArray(int** A, int S, int K)
{
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < S; j++)
		{
			cout << "input the element of the array with index [" << i << "]" << "[" << j << "]" << " from -100 till 100 " << endl;
			cin >> A[i][j];

			while (true)
			{
				if ((A[i][j] > 100) || (A[i][j] < -100))
				{
					cout << "Error! Try to input from -100 till 100!\n";
					cout << "input the element of the array with index [" << i << "]" << "[" << j << "]" << " from -100 till 100 " << endl;
					cin >> A[i][j];
					
				}
				else
					break;
			}
		}
	}
}