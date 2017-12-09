//This C++ programe convert the currency to US DOLLAR.

#include"std_lib_facilites.h"

int main()
{
	//Conversion rates of currency to USD
	const double euro_to_usd{1.18};
	const double yen_to_usd{ 0.0088 };
	const double pound_to_usd{ 1.34 };
	int ammount{ 0 };
	string currency{ "???" };

	cout << "\tThis C++ Programe converts the ammount in currency selected by you to US Dollar:\n "
		<< "Please Select your currnecy:\n"
		<< "y = Yen\n"
		<< "e = Euro\n"
		<< "p = Pounds\n";
	cin >> currency;
	cout << "Enter the ammount: ";
	cin >> ammount;

	//Compare the currency and convert according to given currency.

	if (currency == "y")
		cout << ammount << " yen = $" << ammount * yen_to_usd<<" \n";
	else if (currency == "e")
		cout << ammount << " euro = $ " << ammount * euro_to_usd << " \n";
	else if (currency == "p")
		cout << ammount << " pounds = $ " << ammount * pound_to_usd << "\n";
	else
		cout << "\n\nSorry I can't do that conversion.\n\a";

	keep_window_open();
	return 0;


}