#include <iostream>
#include <climits> // use limits.h for older systems
#include <cmath>

void simon(int); // function prototype for simon()
int stonetolb(int); // function prototype

using namespace std;

int main() 
{
	{
		simon(3); // call the simon() function

		cout << "Pick an integer: "; int count;
		cin >> count;
		simon(count); // call it again
		cout << "Done!" << endl;
	}

	{
		int stone;
		cout << "Enter the weight in stone: "; cin >> stone;
		int pounds = stonetolb(stone);
		cout << stone << " stone = ";
		cout << pounds << " pounds." << endl;

	}
	return 0;
}

void simon(int n) 
{
	cout << "Simon says touch your toes " << n << " times." << endl;
} // void functions don’t need return statements

int stonetolb(int sts) 
{
return 14 * sts;
}
