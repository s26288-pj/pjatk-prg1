#include <iostream>
#include <string>

int number;

int main()
{
	std::cout << "Enter a number: ";
	std::cin >> number;

	if(std::cin.fail())
	{
		std::cout << "That's not a number! \n";
	}
	
	for(int i=1; i <= number; i++)
	{
		std::string text = "";
		if(i%3==0)
		{
			text += "Fizz";
		}
		if(i%5==0)
		{
			text += "Buzz";
		}
		 
		std::cout << i << " " << text << "\n";
	}
	return 0;
}
