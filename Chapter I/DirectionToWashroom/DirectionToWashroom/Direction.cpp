/*This C++ programe dislay the direction for Washroom to my friend.
I am assuming that my friend is with me in my class room*/
#include"std_lib_facilities.h"

int main()
{
	string position = "Sitting";
	cout << "Enter the position of friend (Sitting / Standing): ";
	cin >> position;

	if (position == "Sitting")
		cout << "Stand up my friend.\n";
	{
		cout << "Turn towards the class room exit door.\n"
			<< "Stop at door and turn right and walk straight.\n"
			<< "Stop at front of faculty room.\n"
			<< "Turn 90^o left and move towards male washroom.\n"
			<< "Stop at door, open the door and move in.\n"
			<< "Look at left hand side and find the vacant toilet.\n"
			<< "Go to the vacant toilet, do the work and wash your hand and come out.\n"
			<< "Turn 90^o right and walk straight toward the class and stop infront of it.\n"
			<< "Then turn 90^o left walk towrds me and sit on the place.\n";
	}
	keep_window_open();
	return 0;
}

