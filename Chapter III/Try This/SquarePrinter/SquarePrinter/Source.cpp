//This c++ programe pritnts the square fo number form 1-100

#include"std_lib_facilites.h"

double square(double number) //This function returns the square of number
{
	double sqr_of_number{ 0.0 };
	int i{ 1 };

	for(i; i <= number; i++)	//add number to it number times
		sqr_of_number += number; 

	return sqr_of_number;
}

int main()
{
	double number{ 100 };

	for(int i{ 1 }; i <= 100; i++)
		cout << "Square of " << i << " is: " << square(i)<<"\n";

	keep_window_open();
	return 0;
}