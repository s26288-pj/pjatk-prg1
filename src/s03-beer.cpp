#include <iostream>
using namespace std;

int beers;

int main()
{
	cout << "Enter a number of beers: ";
	cin >> beers;
	if(cin.fail())
	{
		cout << "That's not a number!\n";
	}
	
	int beers_in = beers;

	for(int i=beers; i >= 1; i--)
	{		
		beers--;
		cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
		cout << "Take one down, pass it around, ";
		if(beers == 0)
		{
			cout << "no more bottles of beer on the wall, no more bottles of beer.\n";
			cout << "Go to the store and buy some more, " << beers_in << " bottles of beer on the wall...\n";
		}
		else
		{
			cout << beers << " bottles of beer on the wall...\n\n";
		}
	}
	return 0;
}
