/*
This C++ programmer prompts the user to think a number between 1-100.
And then C++ programe guess the number.
*/

#include"std_lib_facilities.h"

int main()
{
	int n = 100;
	string answer{ "???" };
	cout << "Think an number between 1 to " << 100;
	
	cout << "\n\tIs your number is less than "<< 50<<" (yes / no): ";
	cin >> answer;
	//It mean number is between 1-50
	if (answer == "yes")
	{
		cout << "\n\tIs your number is less than " << 25 << " (yes / no): ";
		cin >> answer;
		//Number is between 1-25
		if (answer == "yes")
		{
			cout << "\n\tIs your number is less than " << 25/2 << " (yes / no): ";
			cin >> answer;
			//Number is between 1-12
			if (answer == "yes") 
			{
				cout << "\n\tIs your number is less than " << 25 / 4 << " (yes / no): ";
				cin >> answer;
				//Number is between 1-6
				if (answer == "yes")
				{
					cout << "\n\tIs your number is less than " << 25 / 8 << " (yes / no): ";
					cin >> answer;
					//Number is between 1-3
					if (answer == "yes")
					{
						cout << "\n\tIs your number is 1";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYeah I gueesd it correct.\a\n";
						cout << "\n\tIs your number is 2";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYeah I gueesd it correct.\a\n";
						cout << "\n\tIs your number is 3";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYeah I gueesd it correct.\a\n";
						
					}
					//Number is between 4-6
					else
					{
						cout << "\n\tIs your number is 4";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYeah I gueesd it correct.\a\n";
						cout << "\n\tIs your number is 5";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYeah I gueesd it correct.\a\n";
						cout << "\n\tIs your number is 6";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYeah I gueesd it correct.\a\n";
					}

				}
			}
		}
		//Number is between 25-50
		else
		{
			cout << "\n\tIs your number is less than " << (50 + 25) / 2;
			cin >> answer;
			//Number is between 25-37
			if (answer == "yes")
			{
				cout << "\n\tIs your number is less than " << (25 + 37) / 2;
				cin >> answer;
				if (answer == "yes")//Number is between 25-31
				{
					cout << "\n\tIs your number is less than " << (25 + 31) / 2;
					cin >> answer;
					if (answer == "yes")//Number is between 25-28
					{
						cout << "\n\tIs your number is 25";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYuup I guessed it correctly.!!\a\a";

						cout << "\n\tIs your number is 26";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYuup I guessed it correctly.!!\a\a";

						cout << "\n\tIs your number is 27";
						cin >> answer;
						if (answer == "yes")
							cout << "\n\tYuup I guessed it correctly.!!\a\a";


					}
				}
			}
			//Number is between 37-50
			else
			{

			}

		}
	}
	//Number is greater than 50
	else 
	{
		cout << "\n\tYaar chacha abhi 50 tak hi ginti ati hai ";
	}
	keep_window_open();
	return 0;
}