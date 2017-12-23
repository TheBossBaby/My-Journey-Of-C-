//This C++ programe converts digit like 0,1 .... 9 to there respective spelled word like zero, one, ...... nine
//and vice-versa

#include"std_lib_facilities.h"

//This function takes a digit and convert it to its spelling
string digit_to_spelling(int input_digit, vector <string> spelled_digit)
{
	int i{ -1 }; //Used for iterating
	for (string x : spelled_digit)
	{
		i++; //It stores the digit 
		if (i == input_digit)
			return x;
	}

	simple_error("Input is out of range!!!!");
}

//This function takes spelling of digit and prints the digit in numeric form
int spelling_to_digit(string input_spelling, vector <string> spelled_digit)
{
	int i{ -1 };
	for (string x : spelled_digit)
	{
		i++;
		if (x == input_spelling)
			return i; //Returns the digit
	}

	//If the for statement does not return anything it means the input is out of range!!!
		simple_error(" is out of range!!!!!\n\n\a");
}

int main()
{
	vector <string> spelled_digit{ "zero", "one","two","three","four","five","six","seven","eight","nine" };
	int input_digit{ -1 };

	//Digit to spelling
	cout << "\n\tEnter the digit from(0-9): ";
	cin >> input_digit;
	if (input_digit > spelled_digit.size())
		cout << "\nInput out of range!!\a\a\n";
	else
	{
		cout << "\n\t" << input_digit << " is spelled as: " << digit_to_spelling(input_digit, spelled_digit) << "\n";
	}

	string input_spelling{ "??" };
	cout << "\n\tEnter the spelling(in lower case) form (zero-nine): ";
	cin >> input_spelling;
	
	//Spelling to digit
	cout << "\n\t"<<input_spelling<<" is the spelling of the digit: "<<spelling_to_digit(input_spelling, spelled_digit)<<"\n";
	
	keep_window_open();
	return 0;
}