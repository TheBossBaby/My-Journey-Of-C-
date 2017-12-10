//This C++ programe use for loop to print Upeer case aplhabets with their integer value.

#include"std_lib_facilities.h"

int main()
{
	char ch{ 'A' };
	for (int{ ch }; int{ ch } <= int{ 'Z' }; int{++ch})
		cout << "\t" << ch << "   " << int{ ch } << "\n";
	keep_window_open();
	return 0;
}