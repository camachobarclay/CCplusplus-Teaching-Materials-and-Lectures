#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{

     // {
     //      int number_of_pods, peas_per_pod, total_peas;
     //      cout << "Press return after entering a number.\n";
     //      cout << "Enter the number of pods:\n";
     //      cin >> number_of_pods;

     //      cout << "Enter the number of peas in a pod:\n";
     //      cin >> peas_per_pod;

     //      total_peas = number_of_pods * peas_per_pod;

     //      cout << "If you have ";
     //      cout << number_of_pods;
     //      cout << " pea pods\n";
     //      cout << "and ";
     //      cout << peas_per_pod;
     //      cout << " peas in each pod, then\n";
     //      cout << "you have ";
     //      cout << total_peas;
     //      cout << " peas in all the pods.\n";
     // }

     // {
     //      int number_of_bars;
     //      double one_weight, total_weight;

     //      cout << "Enter the number of candy bars in a package\n";
     //      cout << "and the weight in ounces of one candy bar.\n";
     //      cout << "Then press return.\n";
     //      cin >> number_of_bars;
     //      cin >> one_weight;

     //      total_weight = one_weight * number_of_bars;

     //      cout << number_of_bars << " candy bars\n";
     //      cout << one_weight << " ounces each\n";
     //      cout << "Total weight is " << total_weight << " ounces.\n";

     //      cout << "Try another brand.\n";
     //      cout << "Enter the number of candy bars in a package\n";
     //      cout << "and the weight in ounces of one candy bar.\n";
     //      cout << "Then press return.\n";
     //      cin >> number_of_bars;
     //      cin >> one_weight;

     //      total_weight = one_weight * number_of_bars;

     //      //cout << R"(c:\files\)";
     //      cout.setf(ios::fixed); 
     //      cout.setf(ios::showpoint);
     //      cout.precision(6);

     //      cout << number_of_bars << " candy bars\n";
     //      cout << one_weight << " ounces each\n";
     //      cout << "Total weight is " << total_weight <<"  ounces.\n";

     //      cout << "Perhaps an apple would be healthier.\n";

     // }
     //      // To adjust output of numbers with cout, use the following:
     //      // cout.set(ios::fixed), 
     //      // cout.setf(ios::showpoint), 
     //      // cout.precision(n) (where n is some natural number) 

     //      // new line         \n
     //      // horizontal tab   \t
     //      // alert            \a
     //      // backslash        \\
     //      // double quote     \"

     // {
     //      char symbol1, symbol2, symbol3;

     //      cout << "Enter two initials, without any periods:\n";
     //      cin >> symbol1 >> symbol2;

     //      cout << "The two initials are:\n";
     //      cout << symbol1 << symbol2 << endl;

     //      cout << "Once more with a space:\n";
     //      symbol3 = ' ';
     //      cout << symbol1 << symbol3 << symbol2 << endl;
     //      cout << "That's all.";

     //      string middle_name, pet_name;
     //      string alter_ego_name;

     //      cout << "Enter your middle name and the name of your pet.\n";
     //      cin >> middle_name;
     //      cin >> pet_name;

     //      alter_ego_name = pet_name + " " + middle_name;
     //      cout << "The name of your alter ego is ";
     //      cout << alter_ego_name << "." << endl;  
     // }

     {
          int triangularNumber;
          triangularNumber = 1+2+3+4+5+6+7+8;
          cout << "The eigth triangular number is " << triangularNumber << ".\n";
          
          int n;
          triangularNumber = 0;
          
          for(n = 1; n<= 200; n++)
          {
               triangularNumber +=n;
          }

          // for ( init_expression; loop_condition; loop_expression )
          // {
          //      program statement 1;
          //      program statement 2;
          //      program statement 3;
          //      .
          //      .
          //      .
          // }
          cout << "The 200th triangular number is "<< triangularNumber << " \n";
          cout << "TABLE OF TRIANGULAR NUMBERS\n\n";
          cout << " n     Sum from 1 to n\n";
          cout << "----   ---------------\n";

          triangularNumber = 0;
          for(n = 1; n<=10; ++n)
          {
               triangularNumber +=n;
               printf(" %2i            %i\n", n, triangularNumber);
          }
          printf("\n");
     }
     
     {
          int n, number, triangularNumber;
          cout << "What triangular number do you want? ";
          cin >> number;
          
          //scanf("%i", &number);

          triangularNumber = 0;

          for(n = 1; n<=number; ++n)
          {
               triangularNumber +=n;
          }
          cout << "Triangular number " << number << " is " 
               << triangularNumber << ".\n\n";
        
     }

     {
          int n, number, triangularNumber, counter;
          for(counter = 1; counter<=5; ++counter)
          {
               cout << "What triangular number do you want? ";
               cin >> number;

               triangularNumber = 0;
               for(n = 1; n<=number; n++)
               {
                    triangularNumber += n;
               }

               cout << "Triangular number " << number 
               << " is " << triangularNumber <<".\n\n";
               
          }
     }
     
     {
          int count = 1;

          while(count <=5)
          {
               cout << count << endl; 
               ++count;
          }
          cout << "\n";
     }
     {

          int u, v, temp;
          cout << "Please type in two nonnegative integers.\n"; 
          cin >> u >> v;

          while ( v != 0 ) 
          { 
               temp = u % v;
               u = v;
               v = temp;
          }
          cout << "Their greatest common divisor is "<< u << ".\n";

     }
   
     {
          int number, right_digit;
          
          cout << "Enter your number.\n";
          cin >> number;
          

          while(number != 0)
          {
               right_digit = number%10;
               cout << right_digit;
               number = number/10;
          }
          cout << "\n\n";
     }

     {
          int number, right_digit;
          
          cout << "Enter your number.\n";
          cin >> number;
          do
          {
               right_digit = number%10;
               cout << right_digit;
               number = number/10;
          }
          while(number!=0);

          cout << "\n\n";
     }

 /*    
     
     {
          printf("Problem 1: All nine programs in this "
               "chapter are done.\n");
          printf("Problem 2: We write a program to generate"
               " a table of\n"
                  "(n,n^2) values for n ranging from 1 to 10.\n\n");
          printf("  n           n^2\n");
          printf("---------------------\n");
          for(int n = 1; n<=10; n++)
          {
               printf(" %2i          %3i   \n",n,(int)pow(n,2));
          }
          printf("\n");
          printf("Problem 3: Generate the nth triangular number:\n");
          printf("  n           n(n+1)/2\n");
          printf("-------------------------\n");
          for(int i = 5; i<=50; i+=5)
          {
               printf(" %2i             %4i     \n",i, sumFirst_n(i));
          }
          printf("\n");
          printf("Problem 4: We give the factorial program to "
               "calculate the first \n10 factorials:\n");
          printf("  n           n!\n");
          printf("-------------------\n");

          for(int i = 1; i<=10; i++)
          {
               printf(" %2i      %7i   \n",i, factorial(i));
          }
          printf("\n");
          printf("Prblem 5: Read and run chap5problem5.c.\n\n");
          printf("Problem 6: Rerun program 5.2 with a - sign field" 
               " adjustment:\n");
          printf("Right justified:\n\n");
          printf("TABLE OF TRIANGULAR NUMBERS\n");
          printf(" n     Sum from 1 to n\n");
          printf("----   ---------------\n");
          int triangularNumber = 0;
          for(int n = 1; n<=10; ++n)
          {
               triangularNumber +=n;
               printf(" %2i            %i\n", n, triangularNumber);
          }
          printf("\n");
          printf("Left justified:\n\n");

          printf("TABLE OF TRIANGULAR NUMBERS\n");
          printf(" n     Sum from 1 to n\n");
          printf("----   ---------------\n");
          triangularNumber = 0;
          for(int n = 1; n<=10; ++n)
          {
               triangularNumber +=n;
               printf(" %-2i            %i\n", n, triangularNumber);
          }
          printf("\n\n");
          printf("Problem 7: This routine prints the amount using"
               " the bank format.\n");
          int dollars, cents, count;

          for(count = 1; count <=2; ++count)
          {
               printf("Enter dollars: ");
               scanf("%i", &dollars);
               printf("Enter cents: ");
               scanf("%i", &cents);
               printf("$%i.%.2i\n\n",dollars,cents);
          }

          printf("Problem 8: Program modified for arbitrary n.\n");



          {
               int n, number, triangularNumber, counter;
               counter = 1;
               int k;
               printf("How many times should we run this program?");
               scanf("%i",&k);

               while(counter<=k)
               {
                    printf("What triangular number do you want? ");
                    scanf("%i", &number);

                    triangularNumber = 0;
                    n = 1;
                    while(n<=number)
                    {
                         triangularNumber += n;
                         n++;
                    }
                    printf("Triangular  number %i is %i.\n\n", number, triangularNumber);
                    ++counter;
               }
          }

          printf("Problem 9: All the while and for loops are equivalent.\n\n");
          
          {
               int n;
               triangularNumber = 0;
               for(n = 1; n<= 200; n++)
               {
                    triangularNumber +=n;
               }
               printf("The 200th triangular number is %i\n", triangularNumber);
               printf("TABLE OF TRIANGULAR NUMBERS\n\n");
               printf(" n     Sum from 1 to n\n");
               printf("----   ---------------\n");
               triangularNumber = 0;
               n = 1;
               while(n<=10)
               {
                    triangularNumber +=n;
                    printf(" %2i            %i\n", n, triangularNumber);
                    ++n;
               }
               printf("\n");
          }
          
          {
               int n, number, triangularNumber;
               printf("What triangular number do you want? ");
               scanf("%i", &number);
               triangularNumber = 0;
               n = 1;
               while(n<=number)
               {
                    triangularNumber +=n;
                    ++n;
               }

               printf("Triangular number %i is %i.\n\n", 
                    number, triangularNumber);
          }

          {
               int n, number, triangularNumber, counter;
               counter = 1;
               while(counter<=5)
               {
                    printf("What triangular number do you want? ");
                    scanf("%i", &number);

                    triangularNumber = 0;
                    n = 1;
                    while(n<=number)
                    {
                         triangularNumber += n;
                         n++;
                    }
                    printf("Triangular  number %i is %i.\n\n", number, triangularNumber);
                    ++counter;
               }
          }
          
          printf("Problem 10: Let's see what happens when we input"
               " a negative number.\n");
          {
               int number, right_digit;
               printf("Enter your number.\n");
               scanf("%i",&number);

               while(number != 0){
                    right_digit = number%10;
                    printf("%i", right_digit);
                    number = number/10;
               }
               printf("\n\n");
          }
          printf("Weird things happen.\n\n");
          printf("Problem 11: Testing our function on -2155 "
               "(sum = 13):\n");
          printf("digsum(-2155) = %i\n\n",digsum(-2155));

     }    
*/
return 0;
}



// int temp, u, v, U, V;
//           u = 10;
//           v = 4;
//           U = u;
//           V = v;

//           int gcd = 0;
//           while(1)
//           {
//                if(v == 0)
//                {
//                     gcd = u;
//                     break;
//                }
//                else
//                {
//                     temp = u%v;
//                     u = v;
//                     v = temp;
//                }
//           }
//           printf("The gcd of %i and %i is %i.\n",U,V,gcd);

