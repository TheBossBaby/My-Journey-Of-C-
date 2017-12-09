//This C++ progame prints a-z with their integer value.

#include"std_lib_facilites.h"

int main()
{
	char aplha{ 'a' };
	while (int{ aplha } <= int{ 'z' })
	{
		cout << aplha << "  " << int{ aplha } << "\n"; //Explicit conversion of aplha 
		int{ aplha++ };
	}
	keep_window_open();
	return 0;
}