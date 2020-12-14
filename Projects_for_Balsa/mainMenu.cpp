#include "stdafx.h"


void mainMenu()
{
	int choice = 0;

	cout << "\t\t Menu : \n";
	cout << "\t\t 3: seminar 3, 4: seminar 4 \n";
	cout << "\t\t 5: seminar 5 \n";
	cout << "\t\t choose the project: \n";
	cin >> choice;

	switch (choice)
	{
	case 3: seminar3();
		break;
	case 4: seminar4();
		break;
	case 5: seminar5();
		break;
	default: cout << "There is no such operation in the menu! Choose the true operation!" << endl;
		break;
	}
}