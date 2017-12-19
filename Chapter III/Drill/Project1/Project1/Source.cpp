#include"std_lib_facilites.h"
//Function converts the given distance in cm
double convert_unit(double distance, string unit)
{
	double distance_in_cm{ 0 };
	if (unit == "cm")
		distance_in_cm = distance;
	else if (unit == "m")
		distance_in_cm = 100 * distance;
	else if (unit == "in")
		distance_in_cm = 2.54 * distance;
	else if (unit == "ft")
		distance_in_cm = 12 * 2.54 * distance;

	return distance_in_cm;
}

int main()
{
	double number{ 0 };
	double smallest{ 0.0 };
	double largest{ 0.0 };
	string unit{ "???" }; //Unit of distance
	int round{ 0 }; //Check the no. of loop
	double sum_in_cm{ 0.0 };
	cout << "Please enter distance with unit(To exit type '|'): ";

	while (cin >> number>> unit) //If number are double cin>>number is true else it is false
	{
		if (unit == "cm" || unit == "in" || unit == "ft")
		{
			double converted_distance = convert_unit(number, unit); //Call the function and do the required converion.
			sum_in_cm += converted_distance;

			if (round == 0) //If the loop is run for first time the smallest and largest is assigned the value of number.
				smallest = largest = converted_distance;

			if (converted_distance < smallest) //Check if the new number is smmaller than than the samallest number
			{
				smallest = converted_distance;//Overwrite the largest number
				cout << smallest << " cm the samallest number so far.\n";
			}
			if (converted_distance > largest) //Check if the new number is larger than the largest number
			{
				largest = converted_distance; //Overwrite the largest number
				cout << largest << " cm is the largest number so far.\n";
			}


		}
		else
		{
			cout << "Vaiue illigal rejected\n\a";
			--round; //Take the loop number back if unwanted value is given.
		}

		round++;//Increase the round number
	}
	cout << "\n\tThe sum of entered values are: " << sum_in_cm / 100.0<<" meter\n"
		<< "\n\tThe largest number is: " << largest / 100.0 << " meter\n"
		<< "\n\tThe smallest number is: " << smallest / 100.0 << " meter\n"
		<< "\n\tThe total number entered are: " << round<<"\n";
	keep_window_open();


	keep_window_open();
	return 0;
}