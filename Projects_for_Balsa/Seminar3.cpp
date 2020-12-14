#include "stdafx.h"

void seminar3()
{
	int mult_array;
	const int N = 100;
	int* PA = new int[N];
	int* PB = new int[N];
	int* PC = new int[N]; // четные
	int* PD = new int[N]; // нечетные
	int n = 0;
	char choice = '0';
	char exit = '0';
	int decision = 1;
	int key;
	
		system("CLS");

		cout << "Press 'Q' to quit or any other key to continue -> ";
		cin >> exit;
		if (exit == 'q' || exit == 'Q')
		{
			cout << "Good Bye!\n";
		}
		else
		{
			system("CLS");
			cout << "First of all Enter the array's elements\n";

			n = userSizeArray(N);
			inputArray(PA, n);

			while (decision == 1)
			{
				system("CLS");

				cout << "Choose your task:\n";
				cout << "1: Output of the first array\n";
				cout << "2: Output the changed array\n";
				cout << "3: Mult between array's plus elements\n";
				cout << "4: Sum between the array's elements till the min element\n";
				cout << "5. Quit\n";
				

				cin >> choice;

				switch (choice)
				{
				case '1': outputArray(PA, n);
					break;
				case '2': sort_for_help(n, PA); //Change_array(PA, n, PB, PC, PD);
					break;
				case '3': 
				{
					mult_array = mult_ellements(PA, n);
					if (mult_array > 0)
						cout << "mult between the plus elements = " << mult_ellements(PA, n) << endl;
					else if (mult_array == 0)
						cout << "the array consists of zero elements only" << endl;
					else
					{
						cout << "the array has no plus ellements" << endl;
					}
				}
					break;
				case '4':
					key = Sum_ellements(PA, n, PB);
					if (key == 11111111)
					{
						cout << "the first element is the lowest in the array, so there cant be sum before it!\n";
					}
					else if (key == 22222222)
					{
						cout << "We have only one number before the lowest element. We cant find the sum of it\n";
					}
					else if ((key == 33333333) || (key == 55555555))
					{
						cout << "it's the first element. we cant find the sum before it\n";
					}
					else if (key == 44444444)
					{
						cout << "we can't find the sum with only one number without the second one\n";
					}
					else
					{
						cout << "the sum is " << key << endl;
					}
					break;
				case '5': decision = 0;
					break;
				default: cout << "Error! Try to choose again\n";
					break;
				}
				
				cout << endl;

				//cout << "Do you want to go back to the Seminar 3 menu ? (1 - yes. 0 - no)" << endl;
				//cin >> decision;
				system("pause");
			}

			system("CLS");
			decision = 1;

			while (decision == true)
			{
				cout << "Do you want to go back to the General Seminars menu ? (1 - yes. 0 - no)" << endl;
				cin >> choice;

				switch (choice)
				{
					case '1':
					{
						system("CLS");
						mainMenu();
						break;
					}
					case '0':
					{
						system("CLS");
						decision = false;
						break;
					}
					default: cout << "Error! Try to choose again\n";
						break;
				}
			}
		}

	delete[] PA;
	delete[] PB;
	delete[] PC;
	delete[] PD;

}