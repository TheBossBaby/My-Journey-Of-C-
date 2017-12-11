#include"std_lib_facilites.h"

int main()
{
	vector <double> number; //An empty vector of double
	double temp{ 0.0 };
	cout << "Please enter 2 integers(To exit type '|'): ";

	while (cin >> temp) //If temp is double cin>>temp is true else it is false
	{
		number.push_back(temp); //Enter temp at last of vector
		cout << "You Entered " << temp << "\n"; 
	}

	keep_window_open();
	//Compare the first and second number of vector
	if(number[0] < number[1]) //
	{
		cout << "\nThe smaller value is: " << number[0]
			<< "\nThe larger value is: " << number[1] << "\n";
	}
	else if (number[0] > number[1])
	{
		cout << "\nThe smaller value is: " << number[1]
			<< "\nThe larger value is: " << number[0]<<"\n";
	}
	else if(number[0] - number[1] < 1.0/100 || number[1] - number[0] < 1.0/100) 
	{
		cout << "\nBoth value are almost equal.\n";
	}
	
	keep_window_open();
	return 0;
}