#include <iostream>

int number;
int random_number;

int main()
{
	srand((unsigned)time(0));
	random_number = (rand() % 100) + 1;
	std::cout << "Guess the number: \n";

	while(number != random_number)
	{
		std::cin >> number;
		
		if(number != random_number)
		{
			if(std::cin.fail())
			{	
				std::cout << "That's not a number!\n";\
				break;
			}
			else if(number < random_number)
			{
				std::cout << "Wrong! Your number is lower than ours. \n";
			}
			else 
			{
				std::cout << "Wrong! Your number is higher than ours. \n";
			}
		}
		else
		{
			std::cout << "Nice guess - you win! \n";
		}
	}
	return 0;
}
