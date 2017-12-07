/*This C++ programe converts string of Digit to a integer.
Example zero = 0, one = 1 
*/

#include"std_lib_facilites.h"

int main()
{
	cout << "Enter the digit as string in lowercase(Example: zero, four): \nThe number should be betweem 0 - 4: ";
	string alpha_digit = " ";
	cin >> alpha_digit;

	int num_digit = -1;

	//Check the input and give the value according to it.
	if (alpha_digit == "zero")
		num_digit = 0;
	if (alpha_digit == "one")
		num_digit = 1;
	if (alpha_digit == "two")
		num_digit = 2;
	if (alpha_digit == "three")
		num_digit = 3;
	if (alpha_digit == "four")
		num_digit = 4;
	
	if (num_digit == -1)
		cout << "Not a number I know\n\a\a\a";
	if (num_digit != -1)
		cout << alpha_digit << " when converted to digit it is " << num_digit << "\n";
	
	keep_window_open();
	return 0;
}