/*This programe checks that is the given integer is odd or even
Like if input is 4,
The Output is "The value 4 is an even number"
*/

#include"std_lib_facilites.h"

int main()
{
	cout << "Enter an intger: ";
	int number = 0;
	cin >> number;

	if (number % 2 == 0) //Check the remainder if it is zero it means it is even
		cout << "\tThe value " << number << " is an even number\n\a";
	if (number % 2 != 0) //Check the remainder if it is not zero it means it is odd 
		cout << "\tThe value " << number << " is an odd number\n\a";

	keep_window_open();
	return 0;
}