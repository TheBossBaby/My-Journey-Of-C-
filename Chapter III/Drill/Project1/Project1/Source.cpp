
#include"std_lib_facilities.h"
//Function converts the given distance in meter
double convert_unit_meter(double distance, string unit)
{
	double distance_in_m{ 0 };
	if (unit == "cm")
		distance_in_m = distance/100.0;
	else if (unit == "m")
		distance_in_m = distance;
	else if (unit == "in")
		distance_in_m = 2.54 * distance / 100.0;
	else if (unit == "ft")
		distance_in_m = 12 * 2.54 * distance / 100.0;

	return distance_in_m;
}

int main()
{
	double number{ 0 };
	double smallest{ 0.0 };
	double largest{ 0.0 };
	string unit{ "???" }; //Unit of distance
	int round{ 0 }; //Check the no. of loop
	double sum_in_m{ 0.0 };
	vector<double> list_of_value; //vector used to store the valid value 

	cout << "Please enter distance with unit(To exit type '|'): ";

	while (cin >> number>> unit) //If number are double cin>>number is true else it is false
	{
		if (unit == "cm" || unit == "in" || unit == "ft"||unit == "m")
		{
			double converted_distance = convert_unit_meter(number, unit); //Call the function and do the required converion.
			sum_in_m += converted_distance;

			if (round == 0) //If the loop is run for first time the smallest and largest is assigned the value of number.
				smallest = largest = converted_distance;

			if (converted_distance < smallest) //Check if the new number is smmaller than than the samallest number
			{
				smallest = converted_distance;//Overwrite the largest number
				cout << smallest << " meter the samallest number so far.\n";
			}
			if (converted_distance > largest) //Check if the new number is larger than the largest number
			{
				largest = converted_distance; //Overwrite the largest number
				cout << largest << " meter is the largest number so far.\n";
			}

			list_of_value.push_back(converted_distance); //After the conversion the list is saved in a vector.
		}
		else
		{
			cout << "Vaiue illigal rejected\n\a";
			--round; //Take the loop number back if unwanted value is given.
		}

		round++;//Increase the round number
		cout << "\nEnter the number with unit(Type | to exit): ";
	}

	//Loop Ends here
	cout << "\n\tThe sum of entered values are: " << sum_in_m << " meter\n"
		<< "\n\tThe largest number is: " << largest << " meter\n"
		<< "\n\tThe smallest number is: " << smallest << " meter\n"
		<< "\n\tThe total number entered are: " << round << "\n"
		<< "\n\tThe list of all value stored is:\n\n";

	sort(list_of_value); //Sort the value in accending order

	for (double x : list_of_value) //This loop prints the each value
		cout << "\t\t" << x << " meter \n";
	keep_window_open();


	keep_window_open();
	return 0;
}