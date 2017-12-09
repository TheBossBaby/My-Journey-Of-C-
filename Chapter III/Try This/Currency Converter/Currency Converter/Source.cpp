//This C++ programe convert the currency to US DOLLAR.

#include"std_lib_facilites.h"

int main()
{
	//Conversion rates of currency to USD
	const double euro_to_usd{1.18};
	const double pound_to_usd{ 1.34 };
	const double yuan_to_usd{ 0.15 };
	const double kroner_to_usd{ 0.16 };
	int ammount{ 0 };
	char currency{ '?' };

	cout << "\tThis C++ Programe converts the ammount in currency selected by you to US Dollar:\n "
		<< "Please Select your currnecy:\n"
		<< "e = Euro\n"
		<< "p = Pounds\n"
		<< "y = Yuan\n"
		<< "k = Kroner\n";
	cin >> currency;
	cout << "Enter the ammount: ";
	cin >> ammount;

	//Compare the currency and convert according to given currency.

	switch (currency)
	{
	case 'e':
		cout << ammount << " euro = $ " << ammount * euro_to_usd << " \n";
		break;
	case 'p':
		cout << ammount << " pounds = $ " << ammount * pound_to_usd << "\n";
		break;
	case 'y':
		cout << ammount << " yuan = $ " << ammount * yuan_to_usd << "\n";
		break;
	case 'k':
		cout << ammount << " kroner = $ " << ammount * kroner_to_usd << "\n";
		break;
	default:
		cout << "\n\nSorry I can't do that conversion.\n\a";
	}

	keep_window_open();
	return 0;


}