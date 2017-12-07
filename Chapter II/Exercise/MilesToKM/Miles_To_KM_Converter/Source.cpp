//this c++ programe converts the value in miles to kilometer

#include"std_lib_facilities.h"

int main()
{
	cout << "This unit converter converts the distance in miles to kilometer.\n\tEnter the distance (Unit = Miles): ";
	double miles = -1.0;
	cin >> miles;
	double kilometer = 1.609 * miles;
	cout <<"\t"<< miles << " Miles = " << kilometer << " Kilometer \n";
	keep_window_open();
	return 0;

}