#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;


int main()
{

	// {

	// 	int number_of_pods, peas_per_pod, total_peas;
	// 	cout << "Press return afte entering a numnber.\n";
	// 	cout << "Enter the number o pods:\n";
	// 	cin >> number_of_pods;

	// 	cout << "Enter the number of peas in a pod:\n";
	// 	cin >> peas_per_pod;

	// 	total_peas  = number_of_pods*peas_per_pod;

	// 	cout << "The total number of peas that you have is "
	// 		 << total_peas << ".\n";
	// }
/*
	{
          int number_of_bars;
          double one_weight, total_weight;

          cout << "Enter the number of candy bars in a package\n";
          cout << "and the weight in ounces of one candy bar.\n";
          cout << "Then press return.\n";
          cin >> number_of_bars;
          cin >> one_weight;

          total_weight = one_weight * number_of_bars;

          cout << number_of_bars << " candy bars\n";
          cout << one_weight << " ounces each\n";
          cout << "Total weight is " << total_weight << " ounces.\n";

          cout << "Try another brand.\n";
          cout << "Enter the number of candy bars in a package\n";
          cout << "and the weight in ounces of one candy bar.\n";
          cout << "Then press return.\n";
          cin >> number_of_bars;
          cin >> one_weight;

          total_weight = one_weight * number_of_bars;

          //cout << R"(c:\files\)";
          cout.setf(ios::fixed); 
          cout.setf(ios::showpoint);
          cout.precision(5);

          cout << number_of_bars << " candy bars\n";
          cout << one_weight << " ounces each\n";
          cout << "Total weight is " << total_weight <<"  ounces.\n";

          cout << "Perhaps an apple would be healthier.\a\n";


     //      // new line         \n
     //      // horizontal tab   \t
     //      // alert            \a
     //      // backslash        \\
     //      // double quote     \"

     }

*/
     // {

     	// char symbol1, symbol2, symbol3;

     	// cout << "Enter two initials, without any periods:\n";
     	// cin >> symbol1 >> symbol2;

     	// cout << "The two initials are:\n";
     	// cout << symbol1 << symbol2 << endl;

     	// cout << "Once more with a space:\n";
     	// symbol3 = ' ';
     	// cout << symbol1 << symbol3 << symbol2 << endl;

     	// string alter_ego_name;
     	// string middle_name, pet_name;

     	// cout << "Enter your middle name and the name of your pet.\n";
     	// cin >> middle_name;
     	// cin >> pet_name;

     	// alter_ego_name = pet_name + " " + middle_name;
     	// cout << "The name of your alter ego is ";
     	// cout << alter_ego_name << "."<< endl;

     	// cout << "test " << pet_name + ' ' + middle_name << endl;
     // }	


	// {
	// 	int triangularNumber;
	// 	triangularNumber = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;
	// 	cout << "The 8th triangular number is " << triangularNumber << ".\n";

		  // for ( init_expression; loop_condition; loop_expression )
          // {
          //      program statement 1;
          //      program statement 2;
          //      program statement 3;
          //      .
          //      .
          //      .
          // }
		// int n;
		// triangularNumber = 0;
		// for(n= 1;n<=200; n++)
		// {
		// 	//triangularNumber = triangularNumber + n;
		// 	cout << "The value of n is " << n << endl;
			
		// 	triangularNumber += n;
		// 	cout << "The current triangular number is " << triangularNumber << endl;
		// }

		// cout << "The 200th triangular number is " << triangularNumber << "\n";

		// cout << "TABLE OF TRIANGULAR NUMBERS\n\n";
  //         cout << " n     Sum from 1 to n\n";
  //         cout << "----   ---------------\n";

  //         triangularNumber = 0;
  //         for(n = 1; n<=10; ++n)
  //         {
  //              triangularNumber +=n;
  //              printf(" %2i            %i\n", n, triangularNumber);
  //         }
  //         printf("\n");


	// }

	// {
	// 	int n, number, triangularNumber, counter;
	// 	for(counter = 1; counter <=5; ++counter)
	// 	{
	// 		cout << "What triangular number do you want?";
	// 		cin >> number;

	// 		triangularNumber = 0;

	// 		for(n = 1; n<=number; ++n)
	// 		{
	// 			triangularNumber +=n;
	// 		}
	// 		cout << "Triangular number "<< number << " is  "
	// 			 << triangularNumber << ".\n\n";
	// 	}
	// }

	// {
	// 	int count = 1;
		
	// 	while(loop condition)
	// 	{
	// 		program statement 1
	// 		program statement 2
	// 		.
	// 		.
	// 		.
	// 	}

		

	// 	while(count <=5)
	// 	{
	// 		cout << count << endl;
	// 		++count;
	// 	}
	// 	cout << "\n";

	// }

	{
			// Write  a program that prints a number in reverse
		int number;
		cout << "Enter your number.\n";
		cin >> number;
		int right_digit;
		while (number != 0)
		{
			right_digit = number%10;
			cout << right_digit;
			number = number/10;
		}
	}
	return 0;
	
	

		
	
}