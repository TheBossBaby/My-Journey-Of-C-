/*This c++ programe takes 3strings from user and dsplay then in accending order
like if input is
Steinbeck, Hemingway, Fitzgerald,
the output should be 
Fitzgerald, Hemingway, Steinbeck
*/
#include"std_lib_facilites.h"

int main()
{
	cout << "Enter 3 strings: ";

	string str1 = "???";
	string str2 = "???";
	string str3 = "???";
	string temp = " ";

	cin >> str1 >> str2 >> str3;
	//Compare the integer 1, wuth integer 2
	if (str2 < str1)
	{
		temp = str1;
		str1 = str2;
		str2 = temp;
	}
	//Compare the integer 2, with intger 3
	if (str3 < str2)
	{
		temp = str2;
		str2 = str3;
		str3 = temp;
	}

	//Compare the integer 1, wuth integer 2
	if (str2 < str1)
	{
		temp = str1;
		str1 = str2;
		str2 = temp;
	}
	cout <<"The strings in sorted order are: "<< str1 << ", " << str2 << ", " <<str3 << "\n";
	keep_window_open();
	return 0;

}