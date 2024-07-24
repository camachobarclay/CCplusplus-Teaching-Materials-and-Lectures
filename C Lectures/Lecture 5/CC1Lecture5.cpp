#include <iostream>
#include <cmath>
#include <climits>
#define ZERO 0
#include <stdlib.h>

using namespace std;

int main()
{
	int ex1 = 0;
	if(ex1)
	{
		int n_int = INT_MAX;//initialize n_int to max int value
		short n_short = SHRT_MAX; // symbols defined in climits file
		long n_long = LONG_MAX; 
		long long n_llong = LLONG_MAX;

		// sizeof operator yields size of type or variable

		cout << "int is " << sizeof (int) << " bytes." << endl;
		cout << "short is " << sizeof n_short << " bytes." << endl; 
		cout << "long is " << sizeof n_long << " bytes." << endl;
		cout << "long long is " << sizeof n_llong << " bytes." << endl;
		cout << endl;

		// note that endl forces text to be flushed immediately

		cout << "Maximum values:" << endl; 
		cout << "int: " << n_int << endl; 
		cout << "short: " << n_short << endl;

		cout << "long: " << n_long << endl;
		cout << "long long: " << n_llong << endl << endl;
		cout << "Minimum int value = " << INT_MIN << endl; 
		cout << "Bits per byte = " << CHAR_BIT << endl; 

		// CHAR_BIT 	Number of bits in a char
		// CHAR_MAX 	Maximum char value
		// CHAR_MIN 	Minimum char value
		// SCHAR_MAX 	Maximum signed char value
		// SCHAR_MIN 	Minimum signed char value
		// UCHAR_MAX 	Maximum unsigned char value
		// SHRT_MAX 	Maximum short value
		// SHRT_MIN 	Minimum short value
		// USHRT_MAX 	Maximum unsigned short value
		// INT_MAX 		Maximum int value
		// INT_MIN 		Minimum int value
		// UINT_MAX 	Maximum unsigned int value
		// LONG_MAX 	Maximum long value
		// LONG_MIN 	Minimum long value
		// ULONG_MAX 	Maximum unsigned long value
		// LLONG_MAX 	Maximum long long value
		// LLONG_MIN 	Minimum long long value
		// ULLONG_MAX 	Maximum unsigned long long value


	}
	int ex2 = 0;
	if(ex2)
	{
		int steinway;
		int baldwin;
		int yamaha;

		yamaha = baldwin = steinway = rand();

		cout << "The value of steinway, baldwin, and yamaha are "
			 << steinway << ", "
			 << baldwin << ", and "
			 << yamaha << ", respectively.\n";



	}

	int ex3 = 0;
	if(ex3)
	{
		cout << "The value of ZERO is " << ZERO <<".\n";
		const double pi_val = 3.1415926536;
		const double exp1 = 2.7182818285;
		cout << "The value of pi_val is " << pi_val <<".\n";
		cout << "The value of exp1 is " << exp1 <<".\n";
		
		
		// pi_val = 3.14;
		// exp1 = 2.71;

	}
	int ex4 = 0;
	if(ex4)
	{
		int auks, bats, coots;
		// the following statement adds the values as double, 
		// then converts the result to int

		auks = 19.99 +11.99;

		// these statements add values as int

		bats = (int) 19.99 + (int) 11.99; // old C syntax
		coots = int (19.99) + int (11.99);

		cout << "auks = " << auks << ", bats = "
			 << bats; 
		cout << ", coots = " << coots << endl;
		cout << "19.99 + 11.99 is "
			 << static_cast<int>(19.99) + static_cast<int>(11.99)
			 << ".\n";
	}

	int ex5 = 0;
	if(ex5)
	{
		auto n = 100; // n is int
		auto x = 1.5; //x is a double
		auto y = 1.3e12L; // y is a long double

		cout << "The value of y is " << y << ".\n";
		printf("The value of y is %Lf.\n", y);
	}

	int ex6 = 0;
	if(ex6)
	{
		auto x = 0.0;
		double y = 10;
		auto z = 0;

		int newval = y + z;

		cout << "The value of newval is " << newval << ".\n";

	}

	int ex7 = 1;
	if(ex7)
	{

		double myexp = pow(3.9, 4.7);
		cout << "The value of my exponential term is " << myexp << ".\n";
	}


















	return 0;

}