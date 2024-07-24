/* 	Frankie Camacho
	The City College of New York
	Department of Computer Science
	CSC 10200, Fall 2018

	This file includes all 
	the exercises for chapter 4	*/

#include <stdio.h>
#include <stdlib.h> // The C standard library of functions.
#include <math.h>	// A very useful C library for doing mathematics. 

// Some helper functions used to do the chapter 4 exercise.
// Note their declarations and placement in the file 
// before the main function.


double fahrenToCelci(double fahValue)
{

	// fahrentoCelci takes in a double Fahrenheit value and 
	// and returns the corresponding double Celcius value 
	// according to the conversion forumula for Fahrenheit to
	// Celcius. 

	
	double celcValue = (fahValue - 32)/1.8;
	return celcValue;

	// Notice the structure of a function. 

}

double myPolyVal(double x)
{
	double y = 3*pow(x,3.0) - 5*pow(x,2) + 6; 
	// the pow function raises x to the power 3 in the
	// first expression on the right hand side of the equation
	return y;
}

int evenMult(int i, int j)
{
	int k = i + j - (i%j); // See problem 8 for more details on this.
	return k;
}


int main()
{

	{
		// This code concerns octal and hexadecimal integer numbers.
		// I wrote up some code that tracks with the material on pages
		// 23 -- 26. The stuff about octal and hexadecimal numbers is
		// * not super important and you can therefore ignore it.
		  

		int myint = 0177;
		printf("My octal number is %o.\n", 127);
		int octalnum = 17;
		printf("My hexadecimal number is %#x.\n", octalnum);
		float myfloat = 0.000000007;
		printf("The value of my float is %g.\n",myfloat);
		printf("Testing whether %f is a float.\n",0x0.3p10);
		char mychar = 'f';
		printf("My char is %c.\n",mychar);
	}
	
	// Note that putting a particular block of code in curly braces
	// limits their scopes. The variables myint, octalnum, myfloat,
	// and my char will behave as if they are undeclared! They also
	// help with organization.

	{
		// Program 4.1

		int integerVar =  100;
		float floatingVar = 331.79;
		double doubleVar = 8.44e+11;
		char charVar = 'W';
		bool boolVar = 0;
		printf("interVar = %i\n", integerVar);
		printf("floatingVar = %f\n", floatingVar);
		printf("doubleVar = %e\n", doubleVar);
		printf("doubleVar = %g\n", doubleVar);
		printf("charVar = %c\n", charVar);
		printf("boolVar = %i\n",boolVar);
		printf("\n\n");
		long int numberOfPoints = 131071100L;
		long long int maxAllowedStorage = 131071100LL;
		long double US_deficit_2004 = 1.234e+7L;
		short int myshort = -7;
		unsigned int counter = 6;

	}

	{
		// Program 4.2

		int a, b, c, d, result;
		a = 100; b = 2; c = 25; d = 4;
		result = a - b; // subtraction
		printf("a-b = %i\n", result);
		result = b*c; // multiplication
		printf("b * c = %i\n",result);
		result = a/c;
		printf("a/c = %i\n",result); // division
		result = a + b*c;
		printf("a + b*c = %i\n",result);
		printf("a + b + c*d = %i\n",a*b + c*d);
		result = a*b + c*d;
		printf("a*b + c*d = %i\n",result); // More precedence
		printf("\n\n");
	}	

	{

		// Program 4.3

		int a, b;
		float c,d;
		a = 25; b = 2;
		c = 25.0; d = 2.0;	
		printf("6 + a/5*b = %i\n",6 + a / 5 * b);
		printf("a/b * b = %i\n", a / b * b);
		printf("c/d * d = %f\n",c / d * d);
		printf("-a = %i\n",-a);
		printf("\n\n");
	}

	{
		// Program 4.4

		int a, b, c, d;
		a = 25; b = 5; c = 10; d = 7;
		printf("a%%b = %i\n",a%b);
		printf("a%%c = %i\n",a%c);
		printf("a%%d = %i\n",a%d);
		printf("a/d*d+a%%d = %i\n",
			a/d*d+a%d);
		printf("999/1000 = %i\n",999/1000);
		printf("\n\n");

	}

	{
		// Program 4.5

		float f1 = 123.125, f2;
		int i1, i2 = -150;

		i1 = f1;			// floating to integer conversion
		printf("%f assigned to an int produces %i\n", f1, i1);

		f1 = i2;			// integr to floating conversion
		printf("%i assigned to a float produces %f\n", i2, f1);

		f1 =i2/100;			// integer divided by integer
		printf("%i divided by 100 produces %f\n", i2, f1);

		f2 = i2/100.0;		// integer divided by a float
		printf("%i divided by 100.0 produces %f\n", i2,f2);

		f2 = (float)i2/100;	// type cast operator
		printf("(float) %i divided by 100 produces %f\n", i2, f2);
		printf("\n\n");

		/* Need to look at complex
		   arithmetic again. Not supported by compiler/stdlib.

		_Complex double z = 1 + 2*I;
		z = 1/z;
  		printf("1/(1.0+2.0i) = %.1f%+.1fi\n", creal(z), cimag(z));
		*/

	}

	// Below are the exercises from the end of chapter 4.
	// I'm attaching all eight, but the HW didn't stipulate 
	// that all of them needed to be completed (but most of them!)

	{
		// Problem 1

		printf("Problem 1: See above for program outputs.\n\n");
		
		// Problem 2

		printf("Problem 2: Only char, 6_05 are variable names.\n\n");
		int Int = 1;
		int Calloc = 1;
		int floating = 1;
		int ReInitialize = 1;
		// int char = 1;
		int Xx = 1;
		int _1312 = 1;
		int _ = 1;
		// int 6_05 = 1;
		int alpha_beta_routine = 1;
		int z = 1;
		int A$ = 1;

		// Problem 3

		printf("Problem 3: Testing the candidates to see if they are constants. ");
		double num1 = 123.456;
		double num2 = 0001;
		double num3 = 0Xab05;
		double num4 = 123.5e2;
		double num5 = 98.6F;
		// double num6 = 0996;
		double num7 = 1.234L;
		double num8 = 0XABCDEFL;
		// float  num9 = 0x10.5;
		double numA = 0xFFFF;
		double numB = 0L;
		double numC = .0001;
		// double numD = 98.7U;
		double numE = -12E-12;
		// float numF = 1.2Fe-7;
		double numG = 197u;
		double numH = 0xabcu;
		// int numJ = 0X0G1;
		double numK = 123L;
		double numL = -597.25;
		double numM = +12;
		// int short numN = 17777s;
		// double numO = 15,000;
		double numP = 100U;
		double numQ = +123;
		printf("\nThe following are not valid constants:\n");
		printf("0996 (octals don't allow 9's)\n");
		printf("0x10.5 (hexadecimal float requires exponent)\n");
		printf("98.7U (invalid suffix for floating constants)\n");
		printf("1.2Fe-7 (invalid suffix on a floating constant)\n");
		printf("0x0G1 (invalid constant for integer constant)\n");
		printf("17777s (invalid suffix s on an integer constant)\n");
		printf("15,000 (comma)\n\n");

		// Problem 4


		// For problems 4,6,8 I used the C/C++ math library, math.h,
		// and functions (neither of which we've covered in the
		// lab, but you can see above before the declaration of 
		// main() for more details). You don't need either of which
		// to do these problems, but I like to organize code that
		// gets reused into functions for repeated use (see prob 8
		// for a good example of this). But you can solve those
		// problems by just saving the computations to the appropriate
		// data type (int, double, etc) and printing them out using 
		// cout or printf.

		printf("Problem 4: 27 degrees Fahrenheit is equivalent to "
		 "%g in Celcius.\n\n",fahrenToCelci((double)27));

		// Problem 5

		printf("Problem 5: program output expectation is that d = d.\n");

		char c,d;
		c = 'd';
		d = c;

		printf("d = %c\n\n",c);
		
		// Problem 6

		printf("Problem 6: Evaluating the polynomial for" 
			" x = 2.55.\np(x) = %g.\n\n",myPolyVal(2.55));

		// Problem 7

		printf("Problem 7: We evaluate the given rational expression.\n");
		printf("   ((3.31 x 10^-8) x (2.01 x 10^-7))\n"
			"x\n   ((7.16 x 10^-6) + (2.01 x 10^-8))^-1\n=\n   %e.\n\n",
			((3.31e-8)*(2.01e-7))/((7.16e-6)+(2.01e-8)));
		
		// Problem 8

		printf("Problem 8: The even multiple values that our \nfunction "
			"produced are:\n");
		printf("i       j     val\n"
			   "365     7     %i\n"
			   "12258   23    %i\n"
			   "996     4     %i\n\n",
			   evenMult(365,7), evenMult(12258,23), evenMult(996,4));
	}

	return 0;
	

}