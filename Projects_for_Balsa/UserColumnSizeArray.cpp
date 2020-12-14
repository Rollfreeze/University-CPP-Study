#include "stdafx.h"

int UserColumnSizeArray(int N)
{
	int column_size;
	//cout << endl;
	cout << "Enter the column size of your Array not bigger than " << N << " -> ";
	cin >> column_size;
	cout << endl;

	while (true)
	{
		if (column_size <= 0 || column_size > N)
		{
			cout << "Uncorrect size! Try again!\n";
			cout << "Enter the column size of your Array not bigger than " << N << " -> ";
			cin >> column_size;
			cout << endl;

		}
		else
			break;
	}

	return column_size;

}
