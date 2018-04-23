/*
This C++ programe use a function print to print a vector
*/
#include "std_lib_facilities.h"

void print(const string& label, const vector<int>& v, ostream& stream)
//prints vector and lable the output, to a given output stream
{
	stream<<label<<"\n";
	unsigned i {0};
	while(i<v.size()){
		stream<<"\n"<<v[i];
		i++;
	}
}

int main()
{
	string label = "vector is: \n";
	vector<int> v(10);
	unsigned int i{0};
	while(i<v.size()){
		v[i] = i*i;
		i++;
	}
	print(label,v,cout);
	return 0;
}
