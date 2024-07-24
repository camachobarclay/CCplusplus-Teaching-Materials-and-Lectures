#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdbool.h>

int main()
{
	int ex1, ex2, ex3, ex4, ex5;
	int ex6, ex7, ex8, ex9, ex10;
	int ex11, ex12;

	ex1 = 0; ex6 = 0; ex11 = 0;
	ex2 = 0; ex7 = 0; ex12 = 0;
	ex3 = 0; ex8 = 0;
	ex4 = 0; ex9 = 0;
	ex5 = 0; ex10 = 0;

	if(ex1)
	{
		int number;
		cout << "Type in your number:\n";
		cin >> number;
		if(number < 0)
			number = -number;
		cout << "The absolute value is "<< number << ".\n";
	}

	if(ex2)
	{
		int numberOfGrades, i, grade;
		int gradeTotal = 0;
		int failureCount = 0;
		int failingGrade = 65;
		float average;
		
		cout << "How many grades will you be entering? ";
		cin >> numberOfGrades;

		for(i = 1; i<=numberOfGrades; ++i)
		{
			cout << "Enter grade "<< i << ": ";
			cin >> grade;
			gradeTotal += grade;
			if (grade<failingGrade)
				failureCount++;
		}
		if(numberOfGrades>0)
			average = (float)gradeTotal/numberOfGrades;
		cout << "\nGrade average = "<< average << endl;
		cout << "Number of failures = "<< failureCount <<"\n\n";
	}

	if(ex3)
	{
		long long int number_to_test, remainder;
		cout << "Enter your number to be tested: ";
		cin >> number_to_test;
		cout << "Your number is "<< number_to_test << ".\n";
		remainder = number_to_test % 2;
		if(remainder == 0)
			cout << "The number is even.\n";
		if(remainder != 0)
			cout << "The number is odd.\n";
	}

	if(ex4)
	{
		long long int number_to_test, remainder;
		cout << "Enter your number to be tested: ";
		cin >> number_to_test;
		cout << "Your number is "<< number_to_test << ".\n"; 
		remainder = number_to_test % 2;
		if(remainder == 0)
			cout << "The number is even.\n";
		else
			cout << "The number is odd.\n";
	}

	if(ex5)
	{
		int year, rem_4, rem_100, rem_400;
		cout << "Enter the year to be tested: ";
		cin >> year;
		rem_4 = year % 4;
		rem_100 = year % 100;
		rem_400 = year % 400;
		if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
			cout << "It's a leap year.\n";
		else
			cout << "Nope, it's not a leap year.\n";
	}

	if(ex6)
	{
		int number, sign;
		cout << "Please type in a number: ";
		cin >> number;
		if(number<0)
			sign = -1;
		else if (number == 0)
			sign = 0;
		else
			sign = 1;
		cout << "Sign = " << sign << endl;
	}

	if(ex7)
	{
		char c;
		printf("Enter a single character: ");
		cin << c;
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			cout << "It's an alphabetic character.\n";
		else if ( c >= '0' && c <= '9')
			cout << "It's a digit.\n";
		else 
			cout << "It's a special character.\n";
	}

	if(ex8)
	{
		float value1, value2;
		char operatoR;
		cout << "Type in your expression.\n";
		cin >> value1 >> operatoR >> value2;
		if(operatoR == '+')
			cout << value1+value2;
		else if(operatoR == '-')
			cout << value1-value2;
		else if(operatoR == '*')
			cout << value1*value2;
		else if(operatoR == '/')
			cout << value1/value2;
		{
			if(value2 == 0)
				cout << "Division by zero.\n";
			else
				cout << value1/value2 << endl;
		}
		else
			printf("Unknown operator.\n");
		
	}

	// if(ex9)
	// {
	// 	float value1, value2;
	// 	char operator;
	// 	printf("Type in your expression.\n");
	// 	scanf("%f %c %f", &value1, &operator, &value2);
	// 	if(operator == '+')
	// 		printf("%.2f\n",value1+value2);
	// 	else if(operator == '-')
	// 		printf("%.2f\n",value1-value2);
	// 	else if(operator == '*')
	// 		printf("%.2f\n",value1*value2);
	// 	else if(operator == '/')
	// 		if(value2 == 0)
	// 			printf("Division by zero.\n");
	// 		else
	// 			printf("%.2f\n",value1/value2);
	// 	else
	// 		printf("Unknown operator.\n");
	// }

	if(ex10)
	{
		float value1, value2;
		char operator;
		printf("Type in your expression.\n");
		scanf("%f %c %f", &value1, &operator, &value2);
		switch(operator)
		{
			case '+':
				printf("%.2f\n", value1+value2);
				break;
			case '-':
				printf("%.2f\n",value1-value2);
				break;
			case '*':
			case 'x':
			case 'X':
				printf("%.2f\n",value1*value2);
				break;
			case '/':
				if (value2 == 0)
					printf("Division by zero.");
				else
					printf("%.2f\n",value1/value2);
				break;
			default:
				printf("Unknown operator.\n");
				break;
		}
	}

	if(ex11)
	{
		int p,d;
		_Bool isPrime
		for(p = 2; p <= 50; ++p)
		{
			isPrime = 1;
			for(d = 2; d < p; ++d)
				if ( p % d == 0)
				{
					isPrime = 0;
					break;
				}
			if(isPrime)
				printf("%i ",p);
		}
		printf("\n");
	}

	if(ex12)
	{
		int p,d;
		bool isPrime;

		for(p = 2; p <= 10000; ++p)
		{
			isPrime = true;
			for( d = 2; d < p; ++d)
			{
				if ( p % d == 0)
				{
					isPrime = false;
					break;
				}
			}
			if(isPrime)
				printf("%i ", p);
		}
		printf("\n");
	}

	return 0;


}