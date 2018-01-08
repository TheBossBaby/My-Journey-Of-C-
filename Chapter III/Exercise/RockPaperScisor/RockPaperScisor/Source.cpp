#include"std_lib_facilities.h"

//This module takes input of computer and player and says who won

void find_winner(char comp, char player)
{
	if (comp == player)
		cout << "\t\t\n\aIt is a draw.......";
	else if (comp == 'r' && player == 'p')
		cout << "\t\t\n\aPlayer wins";
	else if (comp == 'r' && player == 's')
		cout << "\t\t\n\aComputer wins";
	else if (comp == 'r' && player == 'p')
		cout << "\t\t\n\aComputer wins";
	else if (comp == 'p' && player == 'r')
		cout << "\t\t\n\aComputer wins";
	else if (comp == 'p' && player == 'r')
		cout << "\t\t\n\aComputer wins";
	else if (comp == 'p' && player == 's')
		cout << "\t\t\n\aPlayer wins";
	else if (comp == 's' && player == 'r')
		cout << "\t\t\n\aPlayer wins";
	else if (comp == 's' && player == 'p')
		cout << "\t\t\n\aComputer wins";
	else if (comp == 'r' && player == 'p')
		cout << "\t\t\n\aComputer wins";
	else
		simple_error("\n\n\t\aOut of laws you are out of game.......");
}

bool is_it_multiple(int divider, int dividend)
{
	if (divider%dividend == 0)
		return true;
	else
		false;
}

int main()
{
	int i{ 0 };
	char player{ '?' };
	cout << "\nRock = r\nPaper = p\nSccisor = s";
	cout << "\nEnter your input: ";
	while (cin >> player)
	{
		if (is_it_multiple(i, 2) == true)
		{
			cout << "\nComputer selected rock\n";
			find_winner('r', player);
		}
		else if (is_it_multiple(i, 3) == true)
		{
			cout << "\nComputer selected PAPER\n";
			find_winner('p', player);
		}
		else if (is_it_multiple(i, 7) == true)
		{
			cout << "\nComputer selected SCISSOR\n";
			find_winner('s', player);
		}
		else
		{
			cout << "\ntCOMPUTER IS NOT IN MOOD TRY AGAIN";
		}
		i++;
		cout << "\nTo exit press : Ctrl + z..\nIf you want to play more enter your input\n";
}
	keep_window_open();
	return 0;
}