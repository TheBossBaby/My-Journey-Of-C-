#include "std_lib_facilities.h"

void increment(const int a)
{
	cout<<a+a<<endl;
}
/*
int make_2(const int b)
{
	b = 2;
	return b;
}*/

int main()
{
	int p;
	int q = 5;
	int r = 6;
	cout<<p;
	increment(p);
	//cout<<"\n"<<make_2(p)
	increment(q);
	//cout<<"\n"<<make_2(q);
	increment(r);
	//cout<<"\n"<<make_2(r)<<endl;
	return 0;
}