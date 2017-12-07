//This programe ask the name of person the mail is to be sent to.

#include"std_lib_facilities.h"

int main()
{
	//First the programe promts the user to enter the Reciver details and details of one more friend
	cout << "Enter the name of the person you want to write to: ";
	string first_name{ "???" };
	cin >> first_name;

	cout << "Enter the age of " << first_name << " : ";
	int age{ -1 }; //Age of reciepent
	cin >> age;

	cout << "Enter the the name of another friend: ";
	string friend_name { "???" };
	cin >> friend_name;

	char friend_sex { 'O' };
	cout << "Enter the sex of "<<friend_name <<" (m / f): ";
	cin >> friend_sex;
	
	//Now the programe prints the general greeting to the reciver
	cout << "\n\tDear " << first_name << ", How are you? I am fine. I miss you.\n\tWhen are you planning to visit Bhopal."
		<< "\n\tLets plan a meet at Teekamgad on my birthday we will have great fun.\n";

	cout << "\n\tHave you seen " << friend_name << " lately?\n"; //Ask reciver have he seen the following friend.

	//Programe check the gender of second friend and then select grammer
	if (friend_sex == 'm')
		cout << "\tIf you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "\tIf you see " << friend_name << " please ask her to call me.\n";

	//Programe compare the age of Reciver and then prints the message according to Reciver age.
	if (0 >= age || age >= 110)
		simple_error("you're kidding!");    //Function dedined in std_lib_facilites.h

	cout << "\n\tI hear you just had a birthday and you are " << age<< " years old.\n";

	if (age < 12)
		cout << "\tNext year you will be " << age + 1<<"\n";
	if (age == 17)
		cout << "\tNext year you will be able to vote.\n";
	if (age > 70)
		cout << "\tI hope you are enjoying your reirement. ";

	cout << "\tYour Sincerely\n\n\n\tPranav Kushwaha\n\n\a";

	keep_window_open();
	return 0;
}