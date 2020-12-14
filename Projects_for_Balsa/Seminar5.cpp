#include "stdafx.h"

void seminar5()
{
	int decision = 1;
	char exit = '0';
	char choice = '0';
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
			cout << "1: Reading txt file and outputing the sentences\n";

			cin >> choice;

			switch (choice)
			{
			case '1': symbols();
				break;
			default:
				cout << "Error! Try to choose again\n";
				break;
			}
			cout << endl;
			cout << "Do you want to go back to the Seminar 5 menu ? (1 - yes. 0 - no)" << endl;
			cin >> decision;
		}
		//ofstream file("text.txt", ios_base::trunc);
	}
}