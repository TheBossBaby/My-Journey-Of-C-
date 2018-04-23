//This c++ programe stores some stats in a vector 
//then finds the max, min, mean, median
#include "std_lib_facilities.h"
struct node
{
	vector<double> statics;
	double max{0};
	double min{0};
	double mean{0};
	vector<double> median;
};
//-------------------------------------------------------------------
double maxv(const node& n)
{
	double t = n.statics[0];
	for(unsigned int i{1}; i < n.statics.size(); i++)
		t = max(t,n.statics[i]);
	return t;
}
//-------------------------------------------------------------------
double minv(const node& n)
{
	double t = n.statics[0];
	for(unsigned int i{1}; i < n.statics.size(); i++)
		t = min(t,n.statics[i]);
	return t;
}
//-------------------------------------------------------------------
double meanv(const node& n)
{
	double total = 0;
	for(unsigned int i{0}; i < n.statics.size(); i++)
		total+=n.statics[i];
	double mean = total/n.statics.size();
	return mean;
}
//-------------------------------------------------------------------
void medianv(node& n)
{
	int mid{-1};
	mid = n.statics.size()/2;
	if(mid % 2 == 0){
		n.median.push_back(n.statics[mid]);
		n.median.push_back(n.statics[mid+1]);
	}
	else
		n.median.push_back(n.statics[mid]);
}
//-------------------------------------------------------------------
void get_data(node& n)
{
	double data{-1};
	while(cin>>data)
		n.statics.push_back(data);
}
//-------------------------------------------------------------------
int main()
{
	try{
		node mansoon_data; //define a node
		get_data(mansoon_data);
		cout<<"\n"<<maxv(mansoon_data)
			<<"\n"<<minv(mansoon_data)
			<<"\n"<<meanv(mansoon_data)<<"\n";
		for(int i{0}; i<mansoon_data.median.size(); i++)
			cout<<"\n"<<mansoon_data.median[i];
			return 0;
	}
	catch(...){
		cerr<<"\nSometingh is incorrect\n";
		return 1;
	}
}