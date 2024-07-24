/*
 * program_08_14.c - Converting a Positive Integer to Another Base
 */

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <stdbool.h>
#include <string.h>

using namespace std;

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase (void)
{
	cout << "Number to be converted? " << endl;
	cin >> numberToConvert;

	cout << "Base? ";
	cin >> base;
	
	if (base < 2 || base > 16)
	{
		cout << "Bad base - must be between 2 and 16\n";
		base = 10;
	}
}

void convertNumber (void)
{
	do
	{
		convertedNumber[digit] = numberToConvert % base;
		++digit;
		numberToConvert /= base;
	} while (numberToConvert != 0);
}

void displayConvertedNumber (void)
{
	const char baseDigits[16] =
		{ '0', '1', '2', '3', '4', '5', '6', '7',
		  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', };
	int nextDigit;

	cout << "Converted number = ";

	for ( --digit; digit >= 0; --digit )
	{
		nextDigit = convertedNumber[digit];
		cout << baseDigits[nextDigit];
	}

	cout << endl;
}

int main (void)
{
	void getNumberAndBase (void), convertNumber (void),
			displayConvertedNumber (void);

	getNumberAndBase();
	convertNumber();
	displayConvertedNumber ();

	return 0;
}
