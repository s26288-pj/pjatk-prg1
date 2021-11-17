#include <iostream>
#include <string>
using namespace std;

int number;

int main()
{
	cout << "Enter a number: ";
	cin >> number;

	if(cin.fail())
	{
		cout << "That's not a number! \n";
	}
	
	for(int i=1; i <= number; i++)
	{
		string text = "";
		if(i%3==0)
		{
			text += "Fizz";
		}
		if(i%5==0)
		{
			text += "Buzz";
		}
		 
		cout << i << " " << text << "\n";
	}
	return 0;
}
