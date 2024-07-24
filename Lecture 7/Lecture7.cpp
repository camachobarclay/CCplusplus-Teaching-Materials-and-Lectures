#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <stdbool.h>
#include <string.h>

using namespace std;
// This function prints out the message:
// Programming is fun.

void printMessage (void) 
{
	printf ("Programming is fun.\n");
}

// This function calculates the nth
// triangular number (see chapter 5
// for more details on triangular
// numbers).

void calculateTriangularNumber (int n) 
{
	int i, triangularNumber = 0;
	for(i = 1; i<=n; ++i) 
		triangularNumber += i;
	cout << "Triangular number " << n << " is " << triangularNumber << endl;

//printf ("Triangular number %i is %i\n", n, triangularNumber); 

}

// This function computes and then
// prints the gcd of  two numbers u 
// and v.

void gcd (int u, int v) 
{
	int temp;
	cout << "The gcd of " << u << " and " << v << " is ";
	//printf("The gcd of %i and %i is ", u, v);
	while ( v != 0 ) 
	{
		temp = u % v;
		u = v;
		v = temp; 
	}
	
	cout << u << ".\n";
	 
}

int gcdR (int u, int v) 
{

	int temp;
	while (v != 0) 
	{ 
		temp = u % v;
		u = v;
		v = temp; 
	}
	return u; 
}

float absoluteValue (float x) 
{
	if ( x < 0 )
		x = -x;
	return x; 
}

// Function to compute the square 
// root of a number. It's based on
// the following algorithms:

// Newton-Raphson Method to Compute 
// the Square Root of x

// Step 1: Set the value of guess to 1.
// Step 2: If |guess^2 - x| < ε, proceed to step 4.
// Step 3: Set the value of guess to (x / guess + guess) / 2 and return to step 2.
// Step 4: The guess is the approximation of the square root.

// The idea is that you want guess to be close
// to the square root of x by requiring that 
// guess^2 is close to x (the square of the square
// root of x).

// The update formula in Step 3 

// Note that if a negative argument
// is provided, the function produces
// an error message and returns -1.

float squareRoot(float x) 
{

	if ( x < 0 ) 
	{
		cout << "Warning: Negative argument to squareRoot.\n";
		return -1.0; 
	}

	const float epsilon = .00001; 
	float guess = 1.0;

	while ( absoluteValue (guess * guess - x) >= epsilon )
	{
		guess = ( x / guess + guess ) / 2.0;
	}

	return guess; 
}

// This function finds the minimum 
// value in an array of 10 integers.

int minimum(int values[10])
{
	int minValue, i;
	minValue = values[0];
	
	for(i=1; i<10; ++i)
	{
		if (values[i] < minValue)
			{
				minValue = values[i];
			}
	}
	return minValue;
}

// This computes the minimum of an 
// array with a user supplied variable
//
int minimum(int values[], int numberOfElements)
{
	int minValue, i;
	minValue = values[0];
	
	for(i = 1; i < numberOfElements; ++i) 
	{	
		if(values[i] < minValue)
			{
				minValue = values[i];
			}
	}
	
	return minValue; 
}

// This function takes in an array
// and scales each element in the
// array by two.

void multiplyBy2(float array[], int n)
{
	int i;
	for(i=0; i<n; ++i)
		array[i] *= 2;
}


void sort (int a[], int n)
{
	int i, j, temp;
	for(i=0; i<n-1; ++i) 
	{
		for(j=i+1; j<n; ++j)
		{
			if (a[i] > a[j])
			{	
				temp = a[i];
				a[i] = a[j]; 
				a[j] = temp;
			}
		}	
	}	
}

void scalarMultiply (int matrix[3][5], int scalar)
{
	int row, column;
	for(row=0; row<3; ++row)
		for(column = 0; column < 5; ++column )
			matrix[row][column] *= scalar;
}

void displayMatrix (int matrix[3][5])
{
	int row, column;
	for(row=0; row<3; ++row)
	{
		for ( column = 0; column < 5; ++column)
		{
			printf("%5i", matrix[row][column]);			
		}
		cout << endl;
	}
}

void scalarMultiplyG(int nRows, int nCols, int matrix[nRows][nCols], int scalar)
{
	int row, column;
	for(row=0; row<nRows; ++row)
		for (column = 0; column < nCols; ++column )
			matrix[row][column] *= scalar;
}
void displayMatrixG(int nRows, int nCols, int matrix[nRows][nCols]) {
	int row, column;
		for(row=0; row<nRows; ++row)
		{
			for (column = 0; column < nCols; ++column )
			{	
				printf("%5i", matrix[row][column]);
			}
			cout << endl; 
		}
}

void auto_static (void)
{
	auto int autoVar = 1;
	static int staticVar = 1;

	printf ("automatic = %i, static = %i\n", autoVar, staticVar);

	++autoVar;
	++staticVar;
}

unsigned long int factorial (unsigned int n)
{
	unsigned long int result;

	if ( n == 0)
		result = 1;
	else
		result = n * factorial (n - 1);

	return result;
}


int main (void) 
{
////////////////////	
	int ex1 = 1;

	if(ex1)
	{
		printMessage(); 
		printMessage();
		int i;
	
		for(i = 1; i<=5; ++i) 
			printMessage();	
	}	
	
////////////////////
	int ex2 = 1;

	if(ex2)
	{
		calculateTriangularNumber(10); 
		calculateTriangularNumber(20); 
		calculateTriangularNumber(50);
	}
	
///////////////////
	int ex3 = 1;

	if(ex3)
	{
		gcd (150, 35); 
		gcd (1026, 405); 
		gcd (83, 240);
	}
	
///////////////////
	int ex4 = 1;


	if(ex4)
	{
		int result;

		result = gcdR(150,35);
		cout << "The gcd of 150 and 35 is " << result << ".\n";

		result = gcdR(1026,405);
		cout << "The gcd of 1026 and 405 is " << result << ".\n";

		result = gcdR(83,240);
		cout << "The gcd of 83 and 240 is " << result << ".\n";
	}
	
///////////////////
	int ex5 = 1;
	
	if(ex5)
	{
		float f1 = -15.5, f2 = 20.0, f3 = -5.0;
		int i1 = -716;
		float result;

		result = absoluteValue(f1);
		printf("result = %.2f\n", result);
		printf("f1 = %.2f\n", f1);

		result = absoluteValue(f2) + absoluteValue(f3);
		printf("result = %.2f\n", result);
		
		result = absoluteValue(float (i1));
		printf("result = %.2f\n", result);
		
		result = absoluteValue(i1);
		printf("result = %.2f\n", result);
		
		printf("result = %.2f\n", absoluteValue(-6.0)/4);
	}

///////////////////
	int ex6 = 1;

	if(ex6)	
	{
		cout << "squareRoot (2.0) = " << squareRoot(2.0) << endl;
		cout << "squareRoot (144.0) = " << squareRoot(144.0) << endl;
		cout << "squareRoot (17.5) = " << squareRoot(17.5) << endl;	
	}	
	
///////////////////
	int ex7 = 0;

	if(ex7)
	{
		int scores[10], i, minScore; 
		int minimum(int values[10]);

		cout << "Enter 10 scores\n";

		for(i = 0; i<10; ++i)
			cin >> scores[i];

		minScore = minimum(scores);

		cout << "\nMinimum score is " << minScore << endl;
	}

///////////////////
	int ex8 = 1;

	if(ex8)
	{
		int array1[5] = { 157, -28, -37, 26, 10 };
		int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };

		int minimum(int values[], int numberOfElements);
		
		cout << "array1 minimum: " << minimum(array1, 5) << endl; 
		cout << "array2 minimum: " << minimum(array2, 7) << endl;
	}

///////////////////
	int ex9 = 1;

	if(ex9)
	{
		float floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.55f }; 
		
		int i;
		
		multiplyBy2(floatVals, 4);
		
		for(i = 0; i < 4; ++i)
		{
			cout << floatVals[i] << "  ";
		}
		
		cout << endl;
	}

///////////////////
	int ex10 = 1;

	if(ex10)
	{
		int i;
		int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11}; 

		//void sort(int a[], int n);

		cout << "The array before the sort:\n[";
		for(i=0; i<16; ++i)	
		{
			cout << array[i];
				if(i<15)
					cout << ", ";
				else
					cout << "]";
		}
		sort(array, 16);

		cout << "\n\nThe array after the sort:\n[";
		
		for(i=0; i<16; ++i)
		{
			cout << array[i];
				if(i<15)
					cout << ", ";
				else
					cout << "]";
		}
		
		cout << endl;
	}

///////////////////
	int ex11 = 1;

	if(ex11)
	{
		int sampleMatrix[3][5] ={{ 7,16,55,13,12},
								 {12,10,52, 0, 7},
								 {-2, 1, 2, 4, 9}};
		
		cout << "Original matrix:\n"; 
		displayMatrix(sampleMatrix);
		
		scalarMultiply(sampleMatrix, 2);
		
		cout << "\nMultiplied by 2:\n";
		displayMatrix(sampleMatrix);
		
		scalarMultiply(sampleMatrix, -1);
		
		cout << "\nThen multiplied by -1:\n";
		displayMatrix(sampleMatrix);

	}
///////////////////
	int ex12 = 1;
	if(ex12)
	{
			int sampleMatrix[3][5] ={{ 7,16,55,13,12},
								 	 {12,10,52, 0, 7},
								 	 {-2, 1, 2, 4, 9}};
		
			cout << "Original matrix:\n"; 
			displayMatrix(sampleMatrix);
		
			scalarMultiply(sampleMatrix, 2);
		
			cout << "\nMultiplied by 2:\n";
			displayMatrix(sampleMatrix);
		
			scalarMultiply(sampleMatrix, -1);
		
			cout << "\nThen multiplied by -1:\n";
			displayMatrix(sampleMatrix);	
	}
///////////////////
	int ex13 = 1;
	{
		int i;
		void auto_static (void);

		for ( i = 0; i < 5; ++i)
			auto_static();

	}

	int ex14 = 1;
	{
			unsigned int j;
			unsigned long int factorial (unsigned int n);

			for ( j = 0; j < 11; ++j )
			cout <<j << "! = " << factorial(j) << endl;
	
	}
	return 0; 
}