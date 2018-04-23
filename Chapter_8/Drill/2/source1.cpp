#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"\nswap_v: a = "<<a<<" b = "<<b;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"\nswap_r: a = "<<a<<" b = "<<b;
}

int main()
{
	try{
		int x = 7;
		int y =9;
		swap_r(x,y);
		cout<<"\nx = "<< x << " y = " <<y;

		//swap_r(7,9);
		const int cx = 7;
		const int cy = 9;
		//swap_r(cx,cy);
		cout<<"\ncx = "<< cx << " cy = " <<cy;

		//swap_r(7.7,9.9);
		double dx = 7.7;
		double dy = 9.9;
		//swap_r(dx,dy);
		cout<<"\ndx = "<< dx << " dy = " <<dy;

		//swap_r(7.7,9.9);
		return 0;
	}
	catch(...)
	{
		cerr<<"\nBeta tumse naa ho paiga";
		return 1;
	}	
}