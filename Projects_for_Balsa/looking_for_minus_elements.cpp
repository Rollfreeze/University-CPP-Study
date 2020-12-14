#include "stdafx.h"

void looking_for_minus_elements(int** A, int S, int K)
{
	int zeroes = 0;
	int amount = 0;
	int zero_amount = 0;


	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < S; j++)
		{
			if (A[i][j] == 0)
			{
				zero_amount++;
			}
		}
	}

	if (zero_amount == S * K)
	{
		cout << "the whole array consists of zero elements only " << endl;
	}
	else if (zero_amount == 0)
	{
		cout << "the array has no any zero element" << endl;
	}
	else
	{
		for (int i = 0; i < K; i++)
		{
			for (int j = 0; j < S; j++)
			{
				if (A[i][j] == 0)
				{
					for (int s = 0; s < S; s++)
					{
						if (A[i][s] < 0)
						{
							amount++;
						}
					}
					
					if (amount == 0)
					{
						cout << "Despite we have the 0 element in the string number " << i << ", we have no any minus elements in it" << endl;
					}

					else
					{
						cout << "The string number " << i << " has " << amount << " minus elements" << endl;
						amount = 0;
					}
				}
			}
		}
	}
}