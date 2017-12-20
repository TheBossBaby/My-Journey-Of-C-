/*
This C++ Programe takes distance between two cities as input
Prints: 
	The total distance
	Smallest of all the distace
	Largest of all the distance
	Mean of all the distance
*/
#include"std_lib_facilities.h"

int main()
{
	//Creates an empty vector to store ditance between two citeis.
	vector <double> list_distance;
	double total_distance{ 0.0 };
	double larget_distance{ -1 };
	double smallest_distance{ -1 };

	cout << "Enter the distance between two cities for a given path:(To Terminate PRESS \" | \"): ";
	for (double x; cin >> x;)
	{
		if (x > 0)
		{
			//Checks the size of vector if size is 0 then smallest and largest value are same which is equal to first value of x
			if (list_distance.size() == 0)
				larget_distance = smallest_distance = x;

			list_distance.push_back(x); //Push the distance in vector
			total_distance += x; //Add x in total distance
			
			//If x is smaller than smallest number x overwrite the lvlaue of smallest_number
			if (x < smallest_distance)
				smallest_distance = x;
			//If x is larger than larger number x overwrite the lvlaue of largest_digit 
			if (x > larget_distance)
				larget_distance = x;
		}
		else
			cout << "\n\n\aIlligal value distance can not be negative!!!!!!!\n";
		cout << "Enter the distance between two cities for next path: ";
	}

	
	cout << "\n\tThe total distance is: " << total_distance 
		<< "\n\tThe smallest distance is: " << smallest_distance
		<< "\n\tThe largest distance is: " << larget_distance
		<< "\n\tMean of all distance is: " << total_distance / list_distance.size()<<"\n";

	keep_window_open();
	keep_window_open();

	return 0;
}