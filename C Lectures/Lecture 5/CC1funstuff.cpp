#include <iostream>
#include <cmath>

using namespace std;

int stonetolb(int); //function prototype
void simon(int);
void changevariable(int);
double fahrentoCelc (double);

int main()
{
	int mylbs = stonetolb(20);
	cout << "20 stones is equal to " << mylbs << " pounds.\n";
	simon(10);
	int x = 100;
	cout << "The value of x is " << x << ".\n";
	changevariable(x);
	cout << "The value of x is " << x << ".\n";

	for(int k = 32; k<=212; k+=10)
	{
		cout << k << " degrees fahrenheit is " << fahrentoCelc((double) k) << ".\n";
	}
	cout << endl;
	return 0;
}

double fahrentoCelc(double fahren)
{	
	double Celc = (5.0/9.0)*(fahren - 32.0);
	return Celc;
}


void changevariable(int x)
{
	x = 10;
}
int stonetolb(int sts)
{
	
	return 14*sts;
}

void simon(int n)
{
	cout << "Simon says touch your toes " << n << " times.\n";
}