#include "stdafx.h"

void point_searching(int** A, int N, int K)
{

	//int sedlo; 
	int* max_column = new int[K];
	int* min_string = new int[N];

	for (int i = 0; i < K; i++)
	{
		max_column[i] = -101;
	}

	for (int i = 0; i < N; i++)
	{
		min_string[i] = 101;
	}
	int* PK = new int[K]; // хранит минимальные элементы строчек
	int* PN = new int[N]; // хранит максимальные элементы столбцов
	

	int jmin, imax;
	int min = 101;
	int max = -101;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < K; j++)
		{
			if (A[i][j] < min)
			{
				min = A[i][j];
				jmin = j;
			}
			if (j == K - 1)
			{
				for (int k = 0; k < K; k++)
					if (A[k][jmin] > max)
					{
						max = A[k][jmin];
						imax = k;
					}
				if (max == min)
					cout << "string № " << imax << " column № " << jmin << " are saddle point of element " << A[imax][jmin] << endl;
				min = 101;
				max = -101;
			}
		}















	//поиск минимальных по строчке
	/*
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (A[i][j] < min_string[i])
			{
				min_string[i] = A[i][j];
				//PK[i] = min_string[i];
				//sedlo = min_string[i];
				for (int j = 0; j < N; j++)
				{
					if (A[i][j] <= min_string[i])
					{
						sedlo = min_string[i];
					}
					else
					{
						
					}
				}
			}
		}
	}
	
	cout << "sedlo =  " << sedlo << endl;

	//поиск минимальных по столбцу
	/*
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < K; i++)
		{
			if (A[i][j] > max_column[i])
			{
				max_column[i] = A[i][j];
				PN[i] = max_column[i];
			}
		}
	}
	*/

	//сопостовление
	/*
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (PK[i] == PN[j])
			{
				cout << "the saddle point number " << PK[i] << " is located in " << j << " string and in " << i << " column" << endl;
			}	
		}
	}
	*/

	delete[] PK;
	delete[] PN;
	delete[] min_string;
	delete[] max_column;
}