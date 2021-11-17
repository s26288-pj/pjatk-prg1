#include <iostream>
using namespace std;

int number;
int random_number;

int main()
{
	srand((unsigned)time(0));
	random_number = (rand() % 100) + 1;
	cout << "Guess the number: \n";

	while(number != random_number)
	{
		cin >> number;
		
		if(number != random_number)
		{
			if(cin.fail())
			{	
				cout << "That's not a number!\n";\
				break;
			}
			else if(number < random_number)
			{
				cout << "Wrong! Your number is lower than ours. \n";
			}
			else 
			{
				cout << "Wrong! Your number is higher than ours. \n";
			}
		}
		else
		{
			cout << "Nice guess! You win! \n";
		}
	}
	return 0;
}
