#include <iostream>
#include <string>

std::string pass;

int main()
{
	while(pass!="student")
	{
		std::cout << "Enter password: ";
		std::cin >> pass;

		if(pass=="student")
		{
			std::cout << "\nPassword accepted. Welcome back student. \n";
		}
		else if(pass.length() > 0) 
		{
			std::cout << "Error. Try again. \n";
		}	
		else 
		{
			std::cout << "Password can't be empty! Try again.\n";
		}
	}
	return 0;
}
