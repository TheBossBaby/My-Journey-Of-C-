//This c++ programe finds the median of a list of number.
#include"std_lib_facilities.h"

int main()
{
	//Creates empty list of number which can store double
	vector <double> list_of_number;
	double median{ 0.0 };
	cout << "\nEnter number to store in list (To terminate press |): ";
	for(double number; cin>>number;)
	{
		list_of_number.push_back(number);
		cout << "\nEnter number to store in list: ";
	}

	//Sort the list in accending order
	sort(list_of_number);
	
	//Display the sorted list
	cout << "\nThe sorted list is: \n\n";
	for (double x : list_of_number)
		cout << "\t" << x<<",";

	//If size is odd the middle number is picked as median
	if (list_of_number.size() % 2 != 0)
		median = list_of_number[list_of_number.size() / 2];
	//If size is even the two middle number are picked and there mean is taken as median
	else
		median = (list_of_number[list_of_number.size() / 2] + list_of_number[(list_of_number.size() / 2) - 1]) / 2;

	cout << "\n\n\tThe median is: " << median << "\n\n\n\a";
	
	keep_window_open();
	keep_window_open();
	return 0;
}