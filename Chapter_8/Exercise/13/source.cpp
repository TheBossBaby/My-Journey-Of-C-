#include "std_lib_facilities.h"

void string_to_int(const vector<string>& v, vector<int>& v2)
{
	for(unsigned int i{0}; i<v.size(); i++)
		v2.push_back(sizeof(v[i]));
}
//---------------------------------------------------------------
void print_vector_str(const vector<string>& v)
{
	for(unsigned int i{0}; i < v.size(); i++)
		cout<<v[i]<<", ";
}
//----------------------------------------------------------------
void print_vector_int(const vector<int>& v)
{
	for(unsigned int i{0}; i < v.size(); i++)
		cout<<v[i]<<", ";
}
//----------------------------------------------------------------
int main()
{
	vector<string> v;
	vector<int> v1;
  		string s="?";
  		string input_terminator = ";";
	cout << "Input terminator is: "<<input_terminator<< '\n';
  	while (getline(cin,s) && s!= input_terminator)
    	v.push_back(s);
    print_vector_str(v);
    string_to_int(v, v1);
    print_vector_int(v1);
    sort(v.begin(),v.end());
    print_vector_str(v);
	return 0;
}