//This programes perform basic arthematic operations on two integers and gives the results to user.

#include"std_lib_facilities.h"

int main()
{
	cout << "Enter two floating point vlaues: ";
	double val1 = -1;
	double val2 = -1;
	cin >> val1 >> val2;

	cout << "\t" << val1 << " + " << val2 << " = " << val1 + val2 << "\n\t"
		<< val1 << " * " << val2 << " = " << val1 * val2 << "\n\t"
		<< val1 << " - " << val2 << " = " << val1 - val2 << "\n\t";
	//Finding ratio
	if (val1 < val2)
		cout << val2 << " : " << val1 << " = 1: " << val2 / val1 << "\n\t";
	if (val2 < val1)
		cout << val1 << " : " << val2 << " = " << val1 / val2 << " : 1\n\t";

	if (val1 < val2)
		cout << "val1 is lesser then val2\n";
	if (val2 < val1)
		cout << "val2 is lesser than val1\n";
	keep_window_open();
	return 0;
}