#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
	int ex1 = 1;

	if(ex1)
	{
		int values[10];
		int index;

		values[0] = 197;
		values[2] = -100;
		values[5] = 350;
		values[3] = values[0] + values[5];
		values[9] = values[5]/10;
		--values[2];

		for(index = 0; index < 10; ++index)
		{
			cout << "values[" << index << "] = " << values[index] << ".\n";
			// printf("values[%i] = %i\n", index, values[index]);
		}
	}
	
	int ex2 = 1;

	if(ex2)
	{
		int ratingCounters[11], i, response;

		for(i = 1; i<=10; ++i)
		{
			ratingCounters[i] = 0;
		}

		cout << "Enter your response\n";

		for(i = 1; i <= 20; i++)
		{
			cin << response;
			// scanf("%i", &response);

			if(response < 1|| response > 10)
			{
				cout << "Bad response: " << response << endl;
				// printf("Bad response: %i\n", response);
			}
			else
			{
				++ratingCounters[response];
			}
		}

		cout << "\n\nRating  Number of Responses\n";
		cout << "------ --------------------\n";
		// printf("\n\nRating  Number of Responses\n");
		// printf("------ --------------------\n");

		for(i = 1; i<=10; ++i)
		{
			printf("%4i%14i\n", i, ratingCounters[i]);
		}
	}

	int ex3 = 1;

	if(ex3)
	{
		int Fibonacci[15], i;

		Fibonacci[0] = 0;	// by definition
		Fibonacci[1] = 1;	// ditto

		for( i = 2; i <15; ++i)
		{
			Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
		}

		for (i = 0; i <15; ++i)
		{
			cout << Fibonacci[i] << endl;
			// printf("%i\n", Fibonacci[i]);
		}
	}

	int ex4 = 1;

	if(ex4)
	{
		// An improved method for generating prime numbers 
		// involves the notion that a number is prime if 
		// it is not evenly divisible by any other prime 
		// number.This stems from the fact that any 
		// nonprime integer can be expressed as a multiple 
		// of prime factors. (For example, 20 has the 
		// prime factors 2, 2, and 5.) You can use this 
		// added insight to develop a more efficient prime 
		// number program.The program can test if a given 
		// integer is prime by determining if it is evenly 
		// divisible by any other previously generated prime. 
		// By now the term “previously generated” should trigger
		// in your mind the idea that an array must be 
		// involved here. You can use an array to store each 
		// prime number as it is generated. As a further 
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

		for(p = 5; p <=50; p+=2)
		{
			isPrime = true;

			for(i = 1; isPrime && p/primes[i] >= primes[i]; ++i)
			{
				if(p % primes[i]==0)
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

		for(i = 0; i <primeIndex; ++i)
		{
			cout << primes[i];
			// printf("%i ", primes[i]);
		}

		cout << "\n";

	}

	int ex5 = 1;

	if(ex5)
	{
		int array_values[10] = {0, 1, 4, 9, 16};
		int i;

		for(i = 0; i < 5; ++i)
		{
			cout << "array_values[" << i << "] = " << array_values[i] << endl;
		}

		cout << endl;

		for(i = 5; i <10; ++i)
		{
			array_values[i] = i*i;
		}

		for(i = 0; i <10; ++i)
		{
			cout << "array_values[" << i << "] = " << array_values[i] << endl;
		}
	}

	int ex6 = 1;

	if(ex6)
	{
		char word[] = {'H', 'e', 'l', 'l','o','!'};
		int i;

		for(i = 0; i <6; i++)
		{
			cout << word[i];
			// printf("%c",word[i]);
		}

		cout << endl;


		float sample_data[] = { [0] = 1.0, [49] = 100.0, [99] = 200.0 };
	}
	
	int ex7 = 1;

	if(ex7)
	{
		// Table 7.1 Converting an Integer from Base 10 to Base 2
		// Number Number Modulo 2 Number / 2
		// 10 		0				5
		// 5		1				2
		// 2		0				1
		// 1		1				0

		const char baseDigits[16] = 
		{
			'0','1','2','3','4','5','6','7',
			'8', '9', 'A','B','C','D','E','F'
		};
		int convertedNumber[64];
		long int numberToConvert;
		int nextDigit, base, index = 0;

		// get the number and the base

		cout << "Number to be converted? ";
		cin >> numberToConvert;
		// scanf("%ld", &numberToConvert);
		
		cout << "Base? ";
		cin >> base;

		// printf("Base? ");
		// scanf("%i", &base);

		// convert to the indicated base

		do{
			convertedNumber[index] = numberToConvert % base;
			++index;
			numberToConvert = numberToConvert/base;
		}
		while(numberToConvert != 0);

		// display the results in reverse order

		cout << "Converted number = ";

		for(--index; index >=0; --index)
		{
			nextDigit = convertedNumber[index];
			cout << baseDigits[nextDigit];
			// printf("%c", baseDigits[nextDigit]);
		}

		cout << endl;
		// printf("\n");
	}

	int ex8 = 1;

	if(ex8)
	{
		int M[4][5] = {	{10, 5,-3,17,82}, 
					 	{ 9, 0, 0, 8,-7}, 
					 	{32,20, 1, 0,14},
					 	{ 0, 0, 8, 7, 6}
					  };

/*
Table 7.2 A 4 x 5 Matrix
10 5 -3 17 82 
9 0 0 8 -7 
32 20 1 0 14
0 0 8 7 6
*/
	}

	// int prob1, prob2, prob3;
	// int prob4, prob5, prob6;
	// int prob7;

	// prob1 = 0; prob2 = 0; prob3 = 1;
	// prob4 = 1; prob5 = 1; prob6 = 1;
	// prob7 = 1;

	// if(prob1)
	// {
	// 	printf("Problem 1: All problems have been done.\n");
	// }

	// if(prob2)
	// {
	// 	printf("Problem 2: Modify the first example to fill "
	// 		"in the array with zeroes. \nA for loop was used to "
	// 		"perform the initialization.\n");
	// 	int values[10];
	// 	int index;
		
	// 	for(index = 0; index < 10; ++index)
	// 	{
	// 		values[index] = 0;
	// 	}

	// 	values[0] = 197;
	// 	values[2] = -100;
	// 	values[5] = 350;
	// 	values[3] = values[0] + values[5];
	// 	values[9] = values[5]/10;
	// 	--values[2];

	// 	for(index = 0; index < 10; ++index)
	// 	{
	// 		printf("values[%i] = %i\n", index, values[index]);
	// 	}	
	// }

	// if(prob3)
	// {
	// 	int ratingCounters[11], i, response;

	// 	for(i = 1; i<=10; ++i)
	// 	{
	// 		ratingCounters[i] = 0;
	// 	}

	// 	printf("Enter your response\n");

	// 	while(true)
	// 	{
	// 		scanf("%i", &response);
	// 		if(response==999)
	// 		{
	// 			break;
	// 		}
	// 		else if(response < 1|| response > 10)
	// 		{
	// 			printf("Bad response: %i\n", response);
	// 		}
	// 		else
	// 		{
	// 			++ratingCounters[response];
	// 		}
	// 	}

	// 	printf("\n\nRating  Number of Responses\n");
	// 	printf("------ --------------------\n");

	// 	for(i = 1; i<=10; ++i)
	// 	{
	// 		printf("%4i%14i\n", i, ratingCounters[i]);
	// 	}
	// }

return 0;

}