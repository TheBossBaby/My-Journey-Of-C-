//This c++ programe reverse the order of number in a vector
#include"std_lib_facilities.h"
namespace numbers{
	vector<int> rev_v(const vector<int>& v)
	{
		vector<int> temp;
		for(int i{v.size()-1}; i >= 0; i--)
			temp.push_back(v[i]);
		return temp;
	}
	//-----------------------------------------------------------
	void rev_v2(vector<int>& v)
	{
		for(unsigned int i{0}; i<v.size()/2;i++)
			swap(v[i], v[v.size()-i-1]);
	}
	//-----------------------------------------------------------
	void print_vetor(const string& lable, const vector<int>& v)
	{
		cout<<"\n"<<lable<<"\n";
		for(unsigned int i{0}; i<v.size(); i++)
			cout<<v[i]<<", ";
		cout<<endl;
	}
	//----------------------------------------------------------
	void get_vector(vector<int>& v)
	{
		int data{0};
		while(cin>>data)
			v.push_back(data);
	}
}
//-------------------------------------------------------------------
namespace words{
	vector<string> rev_v(const vector<string>& v)
	{
		vector<string> temp;
		for(int i{v.size()-1}; i >= 0; i--)
			temp.push_back(v[i]);
		return temp;
	}
	//-----------------------------------------------------------
	void rev_v2(vector<string>& v)
	{
		for(unsigned int i{0}; i<v.size()/2;i++)
			swap(v[i], v[v.size()-i-1]);
	}
	//-----------------------------------------------------------
	void print_vetor(const string& lable, const vector<string>& v)
	{
		cout<<"\n"<<lable<<"\n";
		for(unsigned int i{0}; i<v.size(); i++)
			cout<<v[i]<<", ";
		cout<<endl;
	}
	void get_vector(vector<string>& v)
	{
		string data = "?";
		while(cin>>data && data != "quit")
			v.push_back(data);
	}
}
//----------------------------------------------------------

int main()
{
	try{
		vector<int> num_list;//vector contain integer
		vector<string> name_list;//vecotr contain strings
		words::get_vector(name_list);
		words::print_vetor("Names are: ", name_list);
		words::rev_v2(name_list);
		words::print_vetor("Names in reverse order: ",name_list);

		numbers::get_vector(num_list);
		vector<int> rev_num_list = numbers::rev_v(num_list);
		numbers::print_vetor("After rev_v()", rev_num_list);
		numbers::print_vetor("Before rev_v2()",num_list);
		numbers::rev_v2(num_list);
		numbers::print_vetor("After rev_v2()",num_list);
		return 0;
	}
	catch(out_of_range){
		cerr<<"\nOut of range\n";
		return 1;
	}
	catch(...){
		cerr<<"\nSomething is fishy\n";
		return 2;
	}
}