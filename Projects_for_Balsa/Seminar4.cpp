#include "stdafx.h"

void seminar4()
{
	int check = 0;
	const int N = 100;
	int k = 0;
	int s = 0;
	char choice = '0';
	char exit = '0';
	bool decision = 1;
	int** PA = new int* [N];
	for (int i = 0; i < N; i++)
	{
		PA[i] = new int[N];
	}

	cout << endl;
	cout << "Press 'Q' to quit or any other key to continue -> ";
	cin >> exit;
	if (exit == 'q' || exit == 'Q')
	{
		cout << "Good Bye!\n";
	}
	else
	{
		while (decision == 1)
		{
			cout << endl;
			cout << "Choose your task:\n";
			cout << "1: Enter the array's elements\n";
			cout << "2: Output of the array\n";
			cout << "3: Looking out for amount of minus elements in the string of the array if the array has 0 element in the string\n";
			cout << "4: Looking for the saddle point\n";
			cin >> choice;

			switch (choice)
			{
			case '1':
				s = UserStringSizeArray(N);
				k = UserColumnSizeArray(N);
				inputDoulbeArray(PA, s, k);
				break;
			case '2': output_double_array(PA, s, k);
				break;
			case '3': looking_for_minus_elements(PA, s, k);
				break;
			case '4': check = Saddle(PA, s, k);
				if (check == 0000)
					cout << "The matrix consists of the same elements " << endl;
				break;
			default: cout << "Error! Try to choose again\n";
				break;
			}
			cout << endl;
			cout << "Do you want to go back to the Seminar 4 menu ? (1 - yes. 0 - no)" << endl;
			cin >> decision;
		}
	}
	for (int i = 0; i < N; i++)
	{
		delete[] PA[i];
	}
	delete[] PA;
}