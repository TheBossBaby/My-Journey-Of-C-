#include "std_lib_facilities.h"
int f(int);
int main()
{
	extern int i; //i is only declared not defined 
	//extern plus no intilizer
	int i = 4;
	//cout<<f(i)<<i;
}