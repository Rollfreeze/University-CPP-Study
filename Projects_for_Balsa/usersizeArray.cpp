#include "stdafx.h"

int userSizeArray(int N)
{
	int size;
	cout << endl;
	cout << "Enter the size of your Array not bigger than " << N << " -> ";
	cin >> size;

	while (true)
	{
		if (size <= 0 || size > N)
		{
			cout << "Uncorrect size! Try again!\n";
			cout << "Enter the size of your Array not bigger than " << N << " -> ";
			cin >> size;

		}
		else
			break;
	}
	return size;
}
