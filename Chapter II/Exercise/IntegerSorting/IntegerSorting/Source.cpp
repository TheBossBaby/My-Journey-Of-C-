//This c++ programe takes 3 integer from user and dsplay then in accending order
//like if input is 4 1 8 the output should be 1, 4, 8

#include"std_lib_facilites.h"

int main()
{
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	int temp = 0;

	cout << "Enter 3 integers(ending with end of file): ";
	cin >> val1 >> val2 >> val3;
	//Compare the integer 1, wuth integer 2
	if (val2 < val1)
	{
		temp = val1;
		val1 = val2;
		val2 = temp;
	}
	//Compare the integer 2, with intger 3
	if (val3 < val2)
	{
		temp = val2;
		val2 = val3;
		val3 = temp;
	}
	/*//Compare the integer 1, with intger 3
	if (val3 < val1)
	{
		temp = val3;
		val3 = val1;
		val1 = temp;
	}*/
	//Compare the integer 1, wuth integer 2
	if (val2 < val1)
	{
		temp = val1;
		val1 = val2;
		val2 = temp;
	}
	cout << val1 << ", " << val2 << ", " << val3 << "\n";
	keep_window_open();
	return 0;

}