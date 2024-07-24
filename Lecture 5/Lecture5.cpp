#include <iostream>
#include <climits> // use limits.h for older systems
#include <cmath>
//# defne ZERO 0
using namespace std; // lazy approach
// using namespace std::cout;
// using namespace std::endll
// etc
int main()
{
	{
		int n_int = INT_MAX; // initialize n_int to max int value
		short n_short = SHRT_MAX; // symbols defined in climits file
		long n_long = LONG_MAX; 
		long long n_llong = LLONG_MAX;

		// sizeof operator yields size of type or of variable

		cout << "int is " << sizeof (int) << " bytes." << endl; 
		//actual data type is put in paratheses

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

	{
		int steinway;
		int baldwin;
		int yamaha;
		yamaha = baldwin = steinway = rand();
		cout << "The value of steinway, baldwin, and yamaha are "
			 <<	steinway << ", "
			 <<	baldwin <<", and "
			 <<	yamaha << ", respectively.\n";
			 // Note that more advanced features of printf 
			 // can be replicated by cout (see chapter 17)

	}
	

	{
		const double pi_val = 3.1415926536;
		const double exp1 = 2.7182818285;

		// pi_val = 3.14;
		// exp1 = 2.71;
	}

	{
		int auks, bats, coots;
		// the following statement adds the values as double, // then converts the result to int
		auks = 19.99 + 11.99;
		// these statements add values as int
		bats = (int) 19.99 + (int) 11.99; // old C syntax 
		coots = int (19.99) + int (11.99); // new C++ syntax 
		cout << "auks = " << auks << ", bats = " 
			 << bats; cout << ", coots = " 
			 << coots << endl;
 		char ch = 'Z';

		cout << "The code for " << ch << " is "; 
		cout << int(ch) << endl;
		cout << "Yes, the code is ";
		cout << static_cast<int>(ch) << endl;
	}

	{
		auto n = 100; // n is int
		auto x = 1.5; // x is double 
		auto y = 1.3e12L; // y is long double


	}
	{
		auto x = 0.0; // ok, x is double because 0.0 is double
		double y = 0; // ok, 0 automatically converted to 0.0
		auto z = 0; // oops, z is int because 0 is int

		-std=c++11

	/*	
		// Automatic type deduction becomes much more useful when 
		// dealing with compli- cated types, such as those in the 
		// STL (Standard Template Library). For example, C++98 
		// code might have this:
		
		std::vector<double> scores; 
		std::vector<double>::iterator pv = scores.begin();

		// C++11 allows you to write this instead:

		std::vector<double> scores; 
		auto pv = scores.begin();
	*/

	}

	{
		double myexp = pow(3.9,4.7);
		cout << "The value of my exponent is " << myexp << endl;
	}
return 0;
}