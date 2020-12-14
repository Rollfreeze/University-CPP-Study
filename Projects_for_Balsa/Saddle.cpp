#include "stdafx.h"

int Saddle(int** A, int S, int K)
{
	int s = 0;
	int z = 0;
	int min = 101;
	int max = -101;
	int gate = 1111;
	int mins = 0;
	int maxs = 0;

	int* min_string = new int[S];
	int* max_column = new int[K];

	for (int i = 0; i < K; i++)
	{
		max_column[i] = -101;
	}

	for (int i = 0; i < S; i++)
	{
		min_string[i] = 101;
	}

	//находим минимумы строчек
	for (int i = 0; i < S; i++)
	{
		for (int j = 0; j < K; j++)
		{
			if (A[i][j] < min_string[i])
			{
				min_string[i] = A[i][j];
			}
		}
	}


	//считаем минимумы строчек
	for (int i = 0; i < S; i++)
	{
		for (int j = 0; j < K; j++)
		{
			if (A[i][j] == min_string[i])
			{
				mins++;
			}
		}
	}

	//находим максимумы столбцов
	for (int j = 0; j < K; j++)
	{
		for (int i = 0; i < S; i++)
		{
			if (A[i][j] > max_column[j])
			{
				max_column[j] = A[i][j];
			}
		}
	}

	//считаем максимумы столбцов
	for (int j = 0; j < K; j++)
	{
		for (int i = 0; i < S; i++)
		{
			if (A[i][j] == max_column[j])
			{
				maxs++;
			}
		}
	}
	
	int* jmin = new int[mins];
	int* imin = new int[mins];
	int* jmax = new int[maxs];
	int* imax = new int[maxs];
	

	//проверяю на идентичность элементов матрицы
	for (int i = 0; i < S; i++)
	{
		for (int j = 0; j < K; j++)
		{
			if (A[i][j] == A[0][0])
			{
				gate = 0000;
			}

			else
			{
				gate = 1111;
				break;
			}
		}
	}

	//если матрица не состоит из идентичных элементов, то ищем седловые точки
	if (gate == 1111)
	{
		for (int i = 0; i < S; i++)
		{
			for (int j = 0; j < K; j++)
			{
				if (A[i][j] == min_string[i])
				{
					jmin[s] = j; //добавляем координату j к минимуму строчки
					imin[s] = i; //добавляем координату i к минимуму строчки
					s++;
				}


				/*
				if (j == K - 1)
				{
					s = 0;
					z = 0;
					for (int k = 0; k < S; k++)
					{
						if (A[k][jmin[s]] == max_column[i])
						{
							imax[z] = k; //добавлю координату i к максимуму колонки
							s++;
							z++;
						}
						
						if (max_column[i] == min_string[j])
						{
							cout << "string № " << imax[i] << " column № " << jmin[j] << " are saddle point of element " << min_string[i] << endl;
						}
					}
				}
				*/
			}
		}

		s = 0;

		for (int j = 0; j < K; j++)
		{
			for (int i = 0; i < S; i++)
			{
				if (A[i][j] == max_column[j])
				{
					jmax[s] = j; //добавляем координату j к максимуму столбца
					imax[s] = i; //добавляем координату i к максимуму столбца
					s++;
				}
			}
		}

		for (int i = 0; i < S; i++)
		{
			for (int j = 0; j < K; j++)
			{
				//cout << "imin[ " << i << " ] = " << imin[i] << " imax[ " << j << " ] = " << imax[j] << " jmin[ " << i << " ] = " <<  jmin[i] << " jmax[ " << j << " ] = " << jmax[j] << endl;
				
				if ((imin[i] == imax[j]) && (jmin[i] == jmax[j]))
				{
					cout << "string № " << imin[i] << " column № " << jmin[j] << " are saddle point " << endl;
				}
				
			}
		}
	}
	

	delete[] min_string;
	delete[] max_column;
	delete[] imax;
	delete[] jmax;
	delete[] jmin;
	delete[] imin;

	return gate;

}