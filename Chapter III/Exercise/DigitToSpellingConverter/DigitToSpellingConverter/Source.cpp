//This C++ programe converts digit like 0,1 .... 9 to there respective spelled word like zero, one, ...... nine
//and vice-versa

#include"std_lib_facilities.h"

int main()
{
	vector <string> spelled_digit{ "zero", "one","two","three","four","five","six","seven","eight","nine" };
	int input_digit{ -1 };
	cout << "\n\tEnter the digit from(0-9): ";
	cin >> input_digit;
	string input_spelling{ "??" };
	cout << "\n\tEnter the spelling(in lower case) form (zero-nine): ";
	cin >> input_spelling;

	int i{ -1 }; //Used for iterating
	if (input_digit > spelled_digit.size())
		cout << "\nInput out of range!!\a\a\n";
	else
	{
		for (string x : spelled_digit)
		{
			i++; //It stores the digit 
			if (i == input_digit)
				cout << "\n\t" << input_digit << " is spelled as: " << x << "\n";
		}
	}

	i = -1;//Reset the iterator
	for (string x : spelled_digit)
	{
		i++;
		if (x == input_spelling)
			cout << "\n\t" <<x << " is spelling of digit: " << i << "\n";
	}

	if (i > input_spelling.size())
		cout << input_spelling << " is out of range!!!!!\n\n\a";
	keep_window_open();
	return 0;
}