//This c++ programe reverse the order of number in a vector
#include"std_lib_facilities.h"

//-------------------------------------------------------------------
namespace words{
	void get_vector(const string& prompt, vector<string>& v)
	{	
		cout<<"\n"<<prompt<<"\n";
		string data = "?";
		int i{0};
		while(cin>>data && i<v.size()){
			v[i] = data;
			i++;
		}
	}
}
//-------------------------------------------------------------------
namespace decimal{
	void get_vector(const vector <string>& n, vector<double>& v)
	{
		double data{0};
		int i{0};
		while(i<v.size()){
			cout<<"Enter age of "<<n[i]<<":";
			cin>>data;
			if(!cin)error("number::get_vector: invalid input to cin");
			v[i]=data;
			i++;
		}
	}
}
//-------------------------------------------------------------------
void print_table(const vector<string>& names, const vector<double>& age)
//prints a table of name and its age
{
	if(names.size() != age.size())error("print: list are unequal");
	cout<<"\nS No.\tName\tAge";
	for(unsigned int i{0}; i<names.size();i++)
		cout<<"\n( "<<i+1<<" ) "<<names[i]<<"\t"<<age[i];
	cout<<endl;
}
//-----------------------------------------------------------------------
void sort_table(const vector<string> old_name, vector<string>& names, vector<double>& age)
{
	sort(names.begin(),names.end()); //Sort the names
	for(int i{0}; i<names.size(); i++){
		if(old_name[i] != names[i]){
			int j{i};
			for(j; !((names[j] != old_name[i]) || j<names.size()); ++j);
			swap(age[i],age[j]);
		}

	}
}
//--------------------------------------------------------------------
int main()
{
	try{
	vector<string> name(5); //list of name
	vector<double> age(5); //list of numbers
	
	words::get_vector("Enter the names:",name);
	decimal::get_vector(name, age);
	print_table(name,age);
	//----------------------------------------------------------------
	sort_table(name,name,age);
	print_table(name,age);
	return 0;
	}
	catch(runtime_error& e){
		cerr<<"\n"<<e.what();
		return 1;
	}
	catch(out_of_range){
		cerr<<"\nout of range";
		return 2;
	}
	catch(...){
		cerr<<"\nSomething is wrong";
		return 3;
	}
}