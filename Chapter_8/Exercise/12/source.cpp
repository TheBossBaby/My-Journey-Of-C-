#include "std_lib_facilities.h"

void print_until_s(const vector<string>& v, const string& quit)
{
  for(unsigned int i{0}; i<v.size(); i++){
    if(v[i] == quit) return;
    cout << v[i] << '\n';
  }
}
//-----------------------------------------------------------------
void print_until_ss(const vector<string>& v, const string& quit)
{
  unsigned int print_terminator_counter{0};
 for(unsigned int i{0};(i<v.size() && print_terminator_counter <2) ; i++){
    if(v[i] == quit) ++print_terminator_counter;
    cout << v[i] << '\n';
  } 
}

int main()
{
  vector<string> v;
  string s="?";
  string print_terminator = ";";
  cout<<"\nEnter a print_terminator: ";
  getline(cin,print_terminator);
  const string input_terminator = ";";
  cout << "Input terminator is: "<<input_terminator<< '\n';
  while (getline(cin,s) && s!= input_terminator)
    v.push_back(s);
  print_until_s(v,print_terminator);
  print_until_ss(v,print_terminator);
  return 0;
}
