#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdbool.h>

using namespace std;
int main()
{



// given condition cond, and cond is true or false
/*	if(cond)
	{
		statement 1;
		statement 2;
		.
		.
		.
	}
*/
	int ex1 = 0;
	if(ex1)
		{
			int number;
			cout << "Type in your number: ";
			cin >> number;
			if(number <0)
			{
				number = -number;
			}
			cout << "The absolute value is " << number <<".\n";

		}
	int ex2 = 0;
	if(ex2)
	{
		int numberOfGrades, i, grade;
		int gradeTotal = 0;
		int failureCount = 0;
		int failingGrade = 65;
		double average;

		cout << "How many grades will you be entering? ";
		cin >> numberOfGrades;

		for(i = 1; i<=numberOfGrades; i++)
		{
			cout << "Enter grade " << i << ": ";
			cin >> grade;
			gradeTotal += grade;
			if (grade<failingGrade)
				failureCount++;


		}

		if(numberOfGrades > 0)
			average = (double)gradeTotal/numberOfGrades;
		cout << "\nGrade average = " << average << endl;
		cout << "Number of failures = " << failureCount << "\n\n";
	}

	int ex3 = 0;

	if(ex3)
	{

		long long int number_to_test, remainder;
		cout << "Enter your number to be tested: ";
		cin >> number_to_test;
		cout << "Your number is " << number_to_test << ".\n";
		remainder = number_to_test %2;
		if(remainder)
			cout << "The number is odd.\n";
		if(remainder == 0)
			cout << "The number is even.\n";



	}

int ex4 = 0;

	if(ex4)
	{

		long long int number_to_test, remainder;
		cout << "Enter your number to be tested: ";
		cin >> number_to_test;
		cout << "Your number is " << number_to_test << ".\n";
		remainder = number_to_test %2;

		if(remainder == 0)
		{
			cout << "The number is even.\n";
		}
		else
		{
			cout << "The number is odd.\n";
		}


	}
int ex5 = 0;

	if(ex5)
	{
		int year;
		cout << "Enter the yar to be tested: ";
		cin >> year;
		int rem_4, rem_100, rem_400;

		rem_4 = year % 4;
		rem_100 = year % 100;
		rem_400 = year % 400;

		if ((rem_4 == 0 && rem_100 != 0) || (rem_400 ==0))
			cout << "It's a leap year.\n";
		else
			cout << "Nope, it's not a leap year.\n";




	} 

int ex6 = 0;
	if(ex6)
	{

		int number, sign;
		cout << "Please type in a number: ";
		cin >> number;
		if(number<0)
		{
			sign = -1;
		}
		else if(number == 0)
		{
			sign = 0;
		}
		else
		{
			sign = 1;
		}
		cout << "Sign = " << sign << endl;


	}

int ex7 = 0;

	if(ex7)
	{

		char c;
		cout << "Enter a single character: ";
		cin >> c;

		if ((c >= 'a' && c <= 'z') || ( c>='A' && c<= 'Z'))
		{
			cout << "It's an alphabetic character.\n";
		}
		else if(c >= '0' && c <= '9')
		{
			cout << "It's a digit.\n";
		}
		else
		{
			cout << "It's a special character.\n";
		}

	}


int ex8 = 0;

	if(ex8)
	{

		double value1, value2;
		char operatoRR;
		cout << "Type in your expression.\n";
		cin >> value1 >> operatoRR >> value2;
		cout << "The result is: ";
		if(operatoRR == '+')
			cout << value1+value2 << endl;
		else if(operatoRR == '-')
			cout <<value1-value2 << endl;
		else if(operatoRR =='*')
			cout <<value1*value2 << endl;
		else if(operatoRR =='/')
			if(value2 == 0)
				cout << "division by 0 is not allowed.\n";
			else
				cout << value1/value2 << endl;
		else
			cout << "Unknown operator entered.\n";


	}

int ex9 = 0;
if(ex9)
{

	double value1, value2;
	char OP;
	cout << "Type in your expression.\n";
	cin >> value1 >> OP >> value2;
	cout << "The value of your expression is: ";
	switch(OP)
	{
		case '+':
			cout << value1 + value2 << endl;
			break;
		case '-':
			cout << value1 -value2 << endl;
			break;
		case '*':
		case 'x':
		case 'X':  
			cout << value1 * value2 << endl;
			break;
		case '/':
			if(value2 == 0)
			{
				cout << "division by 0 not allowed.\n";
			}
			else
			{
				cout << value1/value2 << endl;
			}

			break;
		default:
			cout <<"Unknown operator.\n";
			break;

	}

int ex10 = 1;

if(ex10)
	{
		int p,d;
		_Bool isPrime; 
		for(p =2; p<50; ++p)
		{
			isPrime = 1;
			for(d =2; d< p; ++d)
			{
				if(p %d ==0)
				{
					isPrime =0;
					break;
				}
				if(isPrime)
					cout << p;
			}
			cout <<"\n";
		}
	}

}





















	return 0;
}