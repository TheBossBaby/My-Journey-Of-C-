//This C++ programe prints "BLEEP" at the place of some disliked words.
#include"std_lib_facilites.h"

int main()
{
	vector<string> words_list; //Vector of words.

	cout << "Please enter words (to end enter Ctrl + Z )\n";
	for (string temp; cin >> temp;) //run loop till End of file is in not given.
		words_list.push_back(temp); //Push temp in vector.

	string disliked1{ "Broccoli" };
	string disliked2{ "Cabbage" };
	string disliked3{ "Carrot" };

	for (string temp : words_list) //Traverse the vector
	{
		if (temp == disliked1)
			cout << "BLEEP\a" << "\n";
		else if (temp == disliked2)
			cout << "BLEEP\a" << "\n";
		else if (temp == disliked3)
			cout << "BLEEP\a" << "\n";
		else
			cout <<temp<<"\n";
	}

	keep_window_open();
	return 0;
}