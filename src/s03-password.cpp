#include <iostream>
#include <string>
using namespace std;

std::string pass;

int main()
{
	while(pass!="student")
	{
		cout << "Enter your password: ";
		cin >> pass;

		if(pass=="student")
		{
			cout << "\nPassword accepted. Welcome back student. \n";
		}
		else if(pass.length() > 0) 
		{
			cout << "Error. Try again. \n";
		}	
		else 
		{
			cout << "Password can't be empty! Try again.\n";
		}
	}
	return 0;
}
