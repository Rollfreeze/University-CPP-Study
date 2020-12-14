#include "stdafx.h"

int UserStringSizeArray(int N)
{
	int string_size;
	//cout << endl;
	cout << "Enter the string size of your Array not bigger than " << N << " -> ";
	cin >> string_size;
	cout << endl;

	while (true)
	{
		if (string_size <= 0 || string_size > N)
		{
			cout << "Uncorrect size! Try again!\n";
			cout << "Enter the string size of your Array not bigger than " << N << " -> ";
			cin >> string_size;
			cout << endl;
		}
		else
			break;
	}

	return string_size;

}
