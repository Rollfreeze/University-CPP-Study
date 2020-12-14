#include "stdafx.h"

void symbols()
{
	ifstream file("text.txt");
	if (!file.is_open())
	{
		cout << "Error! Not found!\n";
	}
	else
	{
		cout << "File is opened!\n";

		int const N = 500;
		char str[N];
		int first_p = 0;
		int max_p = 0;
		int first = 0; //внешняя
		int max = 0; //внешняя // макс кол-во знаков
		int l_str = 0; //long string
		int max2 = 0;

		bool empty = 0;

		file.getline(str, N);
		l_str = strlen(str);

		if (l_str == 0)
		{
			cout << "File is empty!\n";
			empty = 0;
		}
		else
		{
			cout << "File is not empty!\n";
			cout << endl;
			empty = 1;
		}
		
		while (empty == 1)
		{
			cout << "These sentence(s) have more punctuation marks than others:\n";
			for (int i = 0; i < l_str; i++)
			{
				if (str[i] == ',' || str[i] == ';' || str[i] == ':' || str[i] == '-')
				{
					max_p++;
				}
				if (str[i] == '!' || str[i] == '?' || str[i] == '.')
				{
					if (max < max_p)
					{
						max = max_p;
					}
					max_p = 0;
				}
			}

			for (int i = 0; i < l_str; i++)
			{
				if (str[i] == ',' || str[i] == ';' || str[i] == ':' || str[i] == '-')
				{
					max2++;
				}
				if (str[i] == '!' || str[i] == '?' || str[i] == '.')
				{
					if (max == max2)
					{
						first = first_p;
						for (int i = first; ; i++)
						{
							cout << str[i];
							if (str[i] == '!' || str[i] == '?' || str[i] == '.')
								break;
						}
						cout << endl;
					}
					max2 = 0;
					first_p = i + 2;
				}
			}
			empty = 0;
			break;
		}
		file.close();
		cout << endl;
	}
}