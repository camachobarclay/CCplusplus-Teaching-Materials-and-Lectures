#include <stdio.h>
#include <cmath>
#include <stdbool.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	int ex1 = 0;

	if(ex1)
	{
		int myarray[10];
		int index;

		myarray[0] = 197;
		myarray[2] = -100;
		myarray[5] = 350;
		myarray[3] = myarray[0] + myarray[5];
		myarray[9] = myarray[5]/10;

		for(index = 0; index <10 ; ++index)
		{
			cout << "myarray[" << index << "] = " << myarray[index] << "\n";
		}

		cout << "Decrementing myarray[2] using -- yields: "<< --myarray[2] << endl;
		cout << "Has myarray[2] been changed? myarray[2] = " << myarray[2] << endl;
	}

	int ex2 = 0;

	if(ex2)
	{
		int ratingCounters[11], i, response;
		
		for(i = 1; i<=10; i++)
		{
			ratingCounters[i] = 0;
		}
		
		cout << "Enter your responses:\n";

		for(i = 1; i<= 20; i++)
		{
			cin >> response;

			if(response <1 || response >10)
			{
				cout << "Bad response: " << response << endl;
			}
			else
			{
				++ratingCounters[response];
			}


		}
		cout << "\n\nRating  Number of Responses\n";
		cout << "------ --------------------\n";

		for(i = 1; i<=10; ++i)
		{
			printf("%4i%14i\n", i, ratingCounters[i]);
		}



	}

	int ex3 = 0;
	if(ex3)
	{
		int N = 300;
		unsigned long long long int Fibonacci[N], i;

		Fibonacci[0] = 0; // by definition
		Fibonacci[1] = 1; // by definition

		for(i = 2; i < N; i++)
		{
			Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
		}

		cout << "The first "<< N << " Fibonacci numbers:" << endl;

		for(i = 0; i < N; ++i)
		{
			cout << Fibonacci[i] << endl;
		}
	}

	int ex4 = 0;

	if(ex4)
	{

		// As a further 
		// optimization of the prime number generator program, 
		// it can be readily demonstrated that any nonprime 
		// integer n must have as one of its factors an integer
		// that is less than or equal to the square root of n.
		// This means that it is only necessary to determine 
		// if a given integer is prime by testing it for even 
		// divisibility against all prime factors up to the 
		// square root of the integer.

		int p, i, primes[50], primeIndex = 2;
		bool isPrime;

		primes[0] = 2;
		primes[1] = 3;

		for(p = 5; p <50; p+=2)
		{
			isPrime = true;

			// p/primes[i] >= primes[i]
			//p >= (primes[i])^2

			for(i = 1; isPrime && float (p/primes[i]) >= float (primes[i]); ++i)
			{
				if(p % primes[i] == 0)
				{
					isPrime = false;
				}
			}

			if(isPrime == true)
			{
				primes[primeIndex] = p;
				++primeIndex;
			}
		}

		cout << "The first primes under 50 are:" << endl;
		for(i = 0; i <primeIndex; ++i)
		{
			cout << primes[i] << endl;
		}

		cout << endl;

	}

	int ex5 = 0;

	if(ex5)
	{
		
		int array_values[10] = {0, 1, 4 ,9, 16};
		int i;
		
		for(i = 5; i <10; ++i)
		{
			array_values[i] = (array_values[i-5])*(array_values[i-5]);
		}

		for (i = 0; i <10; i++)
		{
			cout << "array_values[" << i << "] = " << array_values[i] << endl;
		}
	}

	int ex6 = 1;
	if(ex6)
	{
		char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
		int i;

		//cout << "The size of the array word[] is " << sizeof(word)/sizeof(word[0]) << endl;

		for(i = 0; i < 6 ; i++)
		{
			cout << word[i];
		}

		cout << endl;

		string mystring = "This is my string.";

		for(i = 0; i < sizeof(mystring)/sizeof(mystring[0]); i++)
		{
			cout << mystring[i];
			cout << " ";
		}
		cout << endl;
		float sample_data[] = {[0] = 1.0, [49]= 100.0, [99] = 200.0};

		cout << "The number of elements in sample_data " << sizeof(sample_data)/sizeof(sample_data[0]) << endl;
	}

	return 0;
}