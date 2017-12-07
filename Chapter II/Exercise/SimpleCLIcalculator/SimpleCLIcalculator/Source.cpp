/*This C++ progrme take 2 number in double variable and an operator in a string ad perform the desierd operation on operands */

#include"std_lib_facilites.h"

int main()
{
	cout << "Select an operation from given list:\n\n\tAdd +\n\tSubtract -\n\tMultiply *\n\tDivide /\n";
	string operation = "???";
	cin >> operation;

	cout << "Please enter two operands: ";
	double operand1{ 1.0 };
	double operand2{ 1.0 };
	cin >> operand1 >> operand2;

	if (operation == "+")
		cout <<"\n\t"<< operand1 << " + " << operand2 << " = " << operand1 + operand2<<"\n";
	if (operation == "-")
		cout <<"\n\t"<< operand1 << " - " << operand2 << " = " << operand1 - operand2<<"\n";
	if (operation == "*")
		cout <<"\n\t"<< operand1 << " * " << operand2 << " = " << operand1 * operand2 << "\n";
	if (operation == "/" && operand2 == 0.0) //Check condition of infinity.
		simple_error("Number cannot be devided by zero(0)");
	if (operation == "/")
		cout <<"\n\t"<< operand1 << " / " << operand2 << " = " << operand1 / operand2 << "\n";

	keep_window_open();
	return 0 ;
}