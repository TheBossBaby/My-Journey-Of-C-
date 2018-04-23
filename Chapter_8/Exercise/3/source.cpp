//fibonaci numbers

#include "std_lib_facilities.h"

void print(const string& label, const vector<int>& v, ostream& stream)
//prints vector and lable the output, to a given output stream
{
	stream<<label<<"\n";
	unsigned i {0};
	while(i<v.size()){
		stream<<v[i]<<", ";
		i++;
	}
	stream<<"\n";
}

void fibonacci(const int& x, const int& y, vector<int>& v, const unsigned int& n)
{
	v.push_back(narrow_cast<int>(x));
	v.push_back(narrow_cast<int>(y));
	for(unsigned int i{2}; i<n; i++)
		v.push_back(narrow_cast<int>(v[i-2] + v[i-1]));
}

int main()
{
	try{
		vector<int> fibonacci_numbers;
		fibonacci(1,2,fibonacci_numbers,45);
		print("fibonacci_numbers are: ", fibonacci_numbers, cout);
		return 0;
	}
	catch(...){
		cerr<<"\nSomething is wrong";
		return 1;
	}

}