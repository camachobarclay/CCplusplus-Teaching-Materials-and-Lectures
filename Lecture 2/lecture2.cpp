#include <iostream> 
#include <stdio.h>
using namespace std;
int main()
{

/* Code Block 1 */
   	cout<<"\n";
   	cout<< "Hello World!\n";
 	cout<<"Programming is fun.\n";
	cout<<"And programming in C++ is more fun!\n\n";

/*
 *	printf("\n");
 *	printf("Hello World.\n");
 *	printf("Programmiing is fun.\n");
 *	printf("And programming in C is more fun.\n\n");
 */
	int sum;
	sum = 50+25;
	cout<<"The sum of 50 and 25 is "<<sum<<"."<<endl;
	//printf("The sum of 50 and 25 is %i.\n", sum);

	int value1, value2;
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	

	cout<<"The sum of "<< value1 <<" and " << value2 << " is "<< sum <<".\n\n";
	cout<<"In C++, lowercase letters are significant.\n";
	cout<<"main is where program execution begins.\n";
	cout<<"Opening and closing braces enclose program statements in a routine.\n";
	cout<<"All program statements must be terminated by a semicolon.\n\n";

	cout<<"Testing...";
	cout<<"....1";
	cout<<"...2";
	cout<<"..3";
	cout<<"\n\n";


/*
	printf("The sum of %i and %i is %i.\n\n", value1,value2,sum);

	printf("In C, lowercase letters are significant.\n");
	printf("main is where program execution begins.\n");
	printf("Opening and closing braces enclose program statements in a routine.\n");
	printf("All program statements must be terminated by a semicolon.\n\n");

	printf("Testing...");
	printf("....1");
	printf("...2");
	printf("..3");
	printf("\n\n");
*/
	cout<<"The value of 87 - 15  is "<< 87-15<< ".\n";
//	printf("The value of 87 - 15 is %i.\n\n",87-15);

	int SUM;
	/* Compute result */
	SUM = 25 + 37 - 19;
	/* Display results */
	cout<<"The answer is "<< SUM <<".\n\n";

	int answer, result;
	answer = 100;
	result = answer - 10;
	cout << "The result is "<< result + 5<<".\n\n";


/*
 * Typically, comments should be used for three things.
 * For a given library, program, or function, comments are
 * best used to describe what the library, program, or
 * function, does. 
 * 
 * Second, within a library, program, or function described
 * above, comments can be used to describe how the code is
 * going to accomplish its goal.
 * 
 * Finally, comments should be written in a way that makes
 * sense to someone who has no idea what the code does. It
 * is often the case that a programmer will say “It’s obvious
 *  what this does! There’s no way I’ll forget about this”. 
 * Guess what? It’s not obvious, and you will be amazed how
 * quickly you forget. 
 */


    std::cout << 1;
    std::cout << 2;
    std::cout << 3;

//    std::cout << 1;
//    std::cout << 2;
//    std::cout << 3;

/*
    std::cout << 1;
    std::cout << 2;
    std::cout << 3;
*/
    {
		int myint = 0177;
		printf("My octal number is %o.\n", 127);
		int octalnum = 17;
		printf("My hexadecimal number is %#x.\n", octalnum);
		float myfloat = 0.000000007;
		printf("The value of my float is %g.\n",myfloat);
		printf("Testing whether %f is a float.\n",0x0.3p10);
		char mychar = 'f';
		printf("My char is %c.\n",mychar);
		int integerVar =  100;
		float floatingVar = 331.79;
		double doubleVar = 8.44e+11;
		char charVar = 'W';
		_Bool boolVar = 0;
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
		int a, b;
		float c,d;
		a = 25; b = 2;
		c = 25.0; d = 2.0;	
		printf("6 + a/5*b = %i\n",6 + a/5*b);
		printf("a/b * b = %i\n", a/b * b);
		printf("c/d * d = %f\n",c/d * d);
		printf("-a = %i\n",-a);
		printf("\n\n");
	}

	{
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
		   arithmetic again.

		_Complex double z = 1 + 2*I;
		z = 1/z;
  		printf("1/(1.0+2.0i) = %.1f%+.1fi\n", creal(z), cimag(z));
		*/

	}

   return 0;
}