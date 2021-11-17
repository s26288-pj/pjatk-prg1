#include <iostream>
#include <unistd.h>

using namespace std;

int sec;

int main()
{
	cout << "Number of seconds: \n";
	cin >> sec;
	cout << endl;
	if(cin.fail())
	{	
		cout << "That's not a number!\n";
	}

	while(sec)
	{
		for(int i=sec; i >= 0; i--)
		{
			cout << i;
			cout << "...\n";
			sleep(1);
			sec=0;
		}
		cout << "Time's up!\n";
	}
	return 0;
}
