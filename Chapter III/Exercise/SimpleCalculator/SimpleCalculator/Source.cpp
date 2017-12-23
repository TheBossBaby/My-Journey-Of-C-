#include"std_lib_facilities.h"

double add(double a, double b)
{
	return a + b;
}

double subtract(double a, double b)
{
	return a - b;
}

double multiply(double a, double b)
{
	return a*b;
}

double divide(double a, double b)
{
		return a / b;
}

int main()
{
	double a{ 0 };
	double b{ 0 };
	char symbol{ '?' };

	cout <<"\n\nThis Calculator perform basic operation like +, -, *, / on two operand: "
		<< "\nEnter two number and an operator: ";
	cin >> a >> b >> symbol;

	switch (symbol)
	{
	case '+' :
	{
		cout << "Sum of " << a << " & " << b << " is " << add(a, b);
		break;
	}
	case '-':
	{
		cout << "Diffrence of " << a << " & " << b << " is " << subtract(a, b);
		break;
	}
	case '*' :
	{
		cout << "Multiplication of " << a << " & " << b << " is " << multiply(a, b);
		break;
	}
	case '/':
	{
		if (b == 0)
			cout <<"Division of "<<a<<" & "<<b<< " is INFINITY\a ";
		else
			cout << "Division of " << a << " & " << b << " is " << divide(a, b);
		break;
	}
	default:
		cout << "Wrong operator selected.";
		break;
	}
	cout << "\n";
	keep_window_open();
	return 0;
}