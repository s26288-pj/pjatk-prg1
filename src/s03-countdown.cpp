#include <iostream>
#include <unistd.h>

int sec;

int main()
{
	std::cout << "Number of seconds: \n";
	std::cin >> sec;
	std::cout << std::endl;
	if(std::cin.fail())
	{	
		std::cout << "That's not a number!\n";
	}

	while(sec)
	{
		for(int i=sec; i >= 0; i--)
		{
			std::cout << i;
			std::cout << "...\n";
			sleep(1);
			sec=0;
		}
		std::cout << "Time is up!\n";
	}
	return 0;
}
