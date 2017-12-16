#include"std_lib_facilites.h"

int main()
{
	double number1{ 0 };
	double number2{ 0 };
	cout << "Please enter 2 integers(To exit type '|'): ";

	while (cin >> number1 >> number2) //If number1 & number2 are double cin>>number1>>number2 is true else it is false
	{
		cout << "\nYou Entered " << number1 << " and " << number2;

		//Compare number1 and nuumber2
		if (number1 < number2) //
		{
			cout << "\nThe smaller value is: " << number1
				<< "\nThe larger value is: " << number2 << "\n";
		}
		else if (number1 > number2)
		{
			cout << "\nThe smaller value is: " << number2
				<< "\nThe larger value is: " << number1 << "\n";
		}
		else
		{
			cout << "\nBoth value are almost equal.\n";
		}
		
	}
	keep_window_open();

	keep_window_open();
	return 0;
}