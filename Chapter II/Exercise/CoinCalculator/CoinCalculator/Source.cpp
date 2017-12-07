/*This C++ programe promts the user to give number of pennies,nickles, dimes, quartesrs, half dollar, one dollar coin.
Then calculate the sum and prints the total in cents and dollar
*/

#include"std_lib_facilites.h"

int main()
{
	int number_pennies{ 0 };
	int number_nickels{ 0 };
	int number_dimes{ 0 };
	int number_quarters{ 0 };
	int number_half_dollars{ 0 };
	int number_one_dollars{ 0 };
	int total_cents{ 0 };

	cout << "Enter the number of pennies you have: ";
	cin >> number_pennies;
	total_cents += number_pennies;

	cout << "Enter the number of nicles you have: ";
	cin >> number_nickels;
	total_cents += 5*number_nickels;

	cout << "Enter the number of dimes you have: ";
	cin >> number_dimes; 
	total_cents += 10*number_dimes;

	cout << "Enter the number of quarters you have: ";
	cin >> number_quarters;
	total_cents += 25*number_quarters;

	cout << "Enter the number of half dollars coin you have: ";
	cin >> number_half_dollars;
	total_cents += 50*number_half_dollars;

	cout << "Enter the number of one dollar coin you have: ";
	cin >> number_one_dollars;
	total_cents += 100*number_one_dollars;
	cout << "\n\n";

	if (number_pennies == 1)
		cout << "\You have " << number_pennies << " pennie\n";
	if (number_dimes == 1)
		cout << "You have " << number_dimes << " dime\n";
	if (number_nickels == 1)
		cout << "You have " << number_nickels << " nickel\n";
	if (number_quarters == 1)
		cout << "You have " << number_quarters << " quarter\n";
	if (number_half_dollars == 1)
		cout << "You have " << number_half_dollars << " hslf dollar\n";
	if (number_one_dollars == 1)
		cout << "You have " << number_one_dollars << " dollar\n";

	if(number_pennies != 0 && number_pennies != 1)
		cout << "\You have " << number_pennies << " pennies\n";
	if (number_dimes != 0 && number_dimes != 1)
		cout << "You have " << number_dimes << " dimes\n";
	if (number_nickels != 0 && number_nickels != 1)
		cout << "You have " << number_nickels << " nickels\n";
	if(number_quarters != 0 && number_quarters != 1)
		cout << "You have " << number_quarters << " quarters\n";
	if(number_half_dollars != 0 && number_half_dollars != 1)
		cout << "You have " << number_half_dollars << " hslf dollars\n";
	if(number_one_dollars != 0 && number_one_dollars)
		cout << "You have " << number_one_dollars << " dollars\n";
	cout << "\nThe value of your coin is $" << total_cents/100.0 << "\n\a\a";

	keep_window_open();
	return 0;
}