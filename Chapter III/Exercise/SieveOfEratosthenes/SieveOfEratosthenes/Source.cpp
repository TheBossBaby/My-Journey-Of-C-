/*This c++ programe prints prime number from 1-n using Sieve of Eratoshenes Algorithm */

#include"std_lib_facilities.h"


int main()
{
	vector <int> list; //list of number from 2-n
	vector <int> mark; //It sotres if the number is marked or unmarked

	int max{ 1 }; //Uppper limit of list

	cout << "\nEnter the upper limit: ";
	cin >> max;
	 


	//Create the list..........................................................................................
	for (int i = 2; i <= max; i++)
	{
		list.push_back(i); //list[0] = i
		mark.push_back(0); //0 = unmarked 
	}
	

	//Mark the numbers...........................................................................................
	int j{ 2 }; //
	while (j < max)//Loop run once 
	{
		if (mark[j - 2] == 0) //The value at j is unmarked
		{
			for (int i = j - 2; i < list.size(); i += j) //Loop goes from j-2 for example if j = 2, i = 0 to last of vector list
			{
				if (i < mark.size() && i != j - 2) //Check the bound of vector and check the number is not first
				{
					mark[i] = 1; //1 = Marked
					cout << "\nMarking: " << list[i];
				}
			}
		}
		j++;
	}

	//Prints the unmarked number i.e prime numbers
	cout<<"\nPrime Numbers are: ";
	for (int i = 0; i < list.size(); i++)
	{
		if (mark[i] == 0)
			cout << "\n\t" << list[i];
	}

	cout << "SIze of list: " << list.size() << " Size of mark: " << mark.size() << "\n\n";
	keep_window_open();
	return 0;
}