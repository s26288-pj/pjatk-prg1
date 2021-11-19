#include <iostream>

int beers;

int main()
{
	std::cout << "Enter a number of beers: ";
	std::cin >> beers;
	if(std::cin.fail())
	{
		std::cout << "That's not a number!\n";
	}
	
	int beers_in = beers;

	for(int i=beers; i >= 1; i--)
	{		
		beers--;
		std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
		std::cout << "Take one down, pass it around, ";
		if(beers == 0)
		{
			std::cout << "no more bottles of beer on the wall, no more bottles of beer.\n";
			std::cout << "Go to the store and buy some more, " << beers_in << " bottles of beer on the wall...\n";
		}
		else
		{
			std::cout << beers << " bottles of beer on the wall...\n\n";
		}
	}
	return 0;
}
