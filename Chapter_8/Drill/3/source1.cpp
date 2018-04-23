#include "std_lib_facilities.h"

//----------------------------------------------------------------------------

namespace X{
	int var{0};
	void print()
	{
		cout<<"\nvar: x: "<<var;
	}
}

//-----------------------------------------------------------------------------

namespace Y{
	int var{0};
	void print()
	{
		cout<<"\nvar: y: "<<var;
	}
}

//-----------------------------------------------------------------------------

namespace Z{
	int var{0};
	void print()
	{
		cout<<"\nvar: z: "<<var;
	}
}

//----------------------------------------------------------------------------

int main()
{
	using namespace X;
	X::var = 7;
	X:: print(); //print X's var

	using namespace Y;
	Y::var = 9;
	Y:: print();  //print Y's var
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();  //print Z's var
	}
	Y::print();   //print Y's var
	X::print();   //print X's var
	return 0;
}