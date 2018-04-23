#include "std_lib_facilities.h"

void get_price(const string& message, vector<double>& prices)
{
	cout<<"\n"<<message<<endl;
	double data{-1};
	while(cin>>data){
		if(data<0) error("get_price: positive price expected");
		prices.push_back(data);
	}
	keep_window_open("continue");
}

//--------------------------------------------------
bool is_size_equal(const vector<double>& v1, const vector<double>& v2);
//--------------------------------------------------------------------------------
void get_weight(vector<double>& weight_list, const vector<double>& price_list)
{
	double data{-1};
	unsigned int i{0}; //iterator to traverse the vector
	while(weight_list.size() < price_list.size()){
		cout<<"\nEnter weight of item number: "<<i+1<<" which price is: "<<price_list[i]<<" : ";
		cin>>data;
		if(data<0) error("get_weight: positive weight expected");
		if(!cin)error("get_weight: input is not a double");
		weight_list.push_back(data);
		++i; //increment the iterator
	}
	if(!is_size_equal(price_list, weight_list)) error("\nget_weight: size are unequal");
}

//---------------------------------------------------------------------------------

bool is_size_equal(const vector<double>& v1, const vector<double>& v2)
//compare size of two vector 
{
	if(v1.size() != v2.size()) return false;

	return true;
}

//------------------------------------------------------------------------------

double give_bill(const vector<double>& price_list, const vector<double>& weight_list)
//calculate the total value of items
{
	int total_value{0};
	for(int i{0}; i<price_list.size(); i++)
		total_value += price_list[i]*weight_list[i];
	return total_value;
}
int main()
{
	try{
		vector<double> price_list;
		get_price("Enter price of items: ", price_list);
		vector<double> weight_list;
		get_weight(weight_list,price_list);
		cout<<"Total value is: "<<give_bill(price_list,weight_list);
		return 0;
	}
	catch(runtime_error& e){
		cerr<<"\n"<<e.what()<<endl;
		keep_window_open("~");
		return 1;
	}
	catch(out_of_range){
		cerr<<"\nOut of range\n";
		keep_window_open("~~");
		return 2;
	}
	catch(...){
		cerr<<"\nSometing is wrong\n";
		keep_window_open("~~~");
		return 3;
	}
}