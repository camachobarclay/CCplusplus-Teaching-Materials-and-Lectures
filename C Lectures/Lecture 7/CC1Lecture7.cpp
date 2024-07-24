#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <stdbool.h>
#include <string.h>

using namespace std;

float absoluteValue(float x)
{
	if(x<0)
		x = -x;

	return x;
}
float squareRoot(float x)
{

	if (x < 0)
	{
		cout << "Warning: Negative argument to squareRoot.\n";
		return -1.0;
	}

	const float epsilon = 0.00001;
	float guess = 1.0;

	// |guess^2 -x| < epsilon
	// then guess ~= sqrt(x);

	while(absoluteValue(guess*guess -x) >= epsilon)
	{
		guess  = (x/guess +guess)/2.;
	}
	return guess;
}

int minimum(int values[10])
{
	int minValue, i;
	minValue = values[0];

	for(i = 1; i <10; i++)
	{
		if (values[i] <minValue)
		{
			minValue = values[i];
		}
	}

	return minValue;
}
int main()
{

	int ex7 = 1;
	if(ex7)
	{
		int scores[10], i, minScore;

		cout << "Enter 10 scores\n";

		for(i = 0; i <10 ; ++i)
			cin >> scores[i];

		minScore = minimum(scores);

		cout << "The minimum score is " << minScore << endl;
	}
	return 0;
}

//void printMessage(void)
// {
// 	cout << "Programming is fun.\n";
// }

// void calculateTriangularNumber(int n)
// {
// 	int i, triangularNumber = 0;
// 	for(i = 1; i<=n; i++)
// 		triangularNumber +=i;
// 	cout << "TriangularNumber " << n << " is " << triangularNumber << endl;
// }
// void gcd(int u, int v)
// {
// 	int temp;
// 	cout << "The gcd of " << u << " and " << v << " is ";

// 	while(v !=0)
// 	{
// 		temp = u % v;
// 		u = v;
// 		v = temp;
// 	}

// 	cout << u << ".\n";
// }
// int gcdR(int u, int v)
// {
// 	int temp;
// 	//cout << "The gcd of " << u << " and " << v << " is ";

// 	while(v !=0)
// 	{
// 		temp = u % v;
// 		u = v;
// 		v = temp;
// 	}

// 	return u;
// }



	// int ex1 = 0;
	// if(ex1)
	// {
	// 	printMessage();
	// 	printMessage();
	// 	int i;

	// 	for(i = 1; i <=5; i++)
	// 		printMessage();

	// }
	// int ex2 = 0;
	// if(ex2)
	// {
	// 	calculateTriangularNumber(10);
	// 	calculateTriangularNumber(20);
	// 	calculateTriangularNumber(50);
	// }
	// int ex3 = 0;
	// if(ex3)
	// {
	// 	gcd (150, 35); 
	// 	gcd (1026, 405); 
	// 	gcd (83, 240);
	// }
	// int ex4 = 0;
	// if(ex4)
	// {
	// 	int result;


	// 	result = gcdR(150,35);
	// 	cout << "The gcd of 150 and 35 is " << result << ".\n";

	// 	result = gcdR(1026,405);
	// 	cout << "The gcd of 1026 and 405 is " << result << ".\n";

	// 	result = gcdR(83,240);
	// 	cout << "The gcd of 83 and 240 is " << result << ".\n";
	// }

	// int ex5 = 1;
	
	// if(ex5)
	// {
	// 	float f1 = -15.5, f2 = 20.0, f3 = -5.0;
	// 	int i1 = -716;
	// 	float result;

	// 	result = absoluteValue(f1);
	// 	printf("result = %.2f\n", result);
	// 	printf("f1 = %.2f\n", f1);

	// 	result = absoluteValue(f2) + absoluteValue(f3);
	// 	printf("result = %.2f\n", result);
		
	// 	result = absoluteValue(float (i1));
	// 	printf("result = %.2f\n", result);
		
	// 	result = absoluteValue(i1);
	// 	printf("result = %.2f\n", result);
		
	// 	printf("result = %.2f\n", absoluteValue(-6.0)/4);
	// }

	// int ex6 = 1;

	// if(ex6)	
	// {
	// 	cout << "squareRoot (2.0) = " << squareRoot(2.0) << endl;
	// 	cout << "squareRoot (144.0) = " << squareRoot(144.0) << endl;
	// 	cout << "squareRoot (17.5) = " << squareRoot(17.5) << endl;	
	// }	