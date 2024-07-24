#include <iostream>
using namespace std;

// ex 8
void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    ++(*current);  // increment value pointed
    ++current;     // increment pointer
  }
}

void print_all (const int* start, const int* stop)
{
  const int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    ++current;     // increment pointer
  }
}

void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { char* pchar; pchar=(char*)data; ++(*pchar); }
  else if (psize == sizeof(int) )
  { int* pint; pint=(int*)data; ++(*pint); }
}

int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}

int main()
{
	
	int ex1 = 0;
	if(ex1)
	{
		int myvar = 25;
		int * foo; // * after int but before foo declares foo to be a pointer
		foo = &myvar; //& address of the operator. foo points to the address of myvar 
		int bar = myvar;
	
		cout << "The value of myvar is " << myvar << ".\n";
		cout << "The value of foo is " << foo << ".\n";
		cout << "The value of bar is " << bar << ".\n";
		
		int baz = *foo; //* also dereferenes foo and thus *foo = myvar = 25.
		cout << "The value of baz is " << baz << ".\n";
		
		//baz = foo; //this line of code will produce an error
	
		//general declaration of a pointer is 
		//type * name
		//once dereferenced have different values depending on the type
		//most pointers occupy the same amount of space
		//examples:
	
		int * number;
		char * character;
		double * decimal;
	}

	int ex2 = 0;
	if(ex2)
	{
		int firstvalue, secondvalue;
  		int * mypointer;

  		mypointer = &firstvalue;
  		*mypointer = 10;
  		mypointer = &secondvalue;
  		*mypointer = 20;
  		cout << "firstvalue is " << firstvalue << '\n';
  		cout << "secondvalue is " << secondvalue << '\n';

  		//both variables have values even though they were never accessed.
	}

	int ex3 = 0;
	if(ex3)
	{
		int firstvalue = 5, secondvalue = 15;
		int *p1, * p2; //need a * for each pointer in declaration
		//if only one in front of p1, p2 would be an int

		p1 = &firstvalue;  // p1 = address of firstvalue
		p2 = &secondvalue; // p2 = address of secondvalue
		*p1 = 10;          // value pointed to by p1 = 10
		*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
		p1 = p2;           // p1 = p2 (value of pointer is copied)
		*p1 = 20;          // value pointed to by p1 = 20

		cout << "firstvalue is " << firstvalue << '\n';
		cout << "secondvalue is " << secondvalue << '\n';
	}

	int ex4 = 0;
	if(ex4)
	{
		int myarray[20];
		int * mypointer;

		mypointer = myarray; // valid assignment
		//myarray = mypointer;// not valid, myarray always points to a block of 20 elements
	}

	int ex5 = 0;
	if(ex5)
	{
		int numbers[5];
		int * p, * q;
		p = numbers; 
		q = numbers;
		 *p = 10;
		p++;  *p = 20;
		p = &numbers[2];  *p = 30;
		p = numbers + 3;  *p = 40;
		p = numbers;  *(p+4) = 50;
		for (int n=0; n<5; n++)
			cout << numbers[n] << ", ";

		cout << endl;
		//Pointers and arrays support the same set of operations, 
		//with the same meaning for both. The main difference being 
		//that pointers can be assigned new addresses, while arrays cannot.

		//Note that the following are equivalent
		

		numbers[4] = 1;
		cout << "The value of numbers is = "; 

		for (int n=0; n<5; n++)
			cout << numbers[n] << ", ";

		cout << endl;

		*(q+4) = 2;
		cout << "The value of numbers is = ";


		for (int n=0; n<5; n++)
			cout << numbers[n] << ", ";

		cout << endl;
		
	} 

	int ex6 = 0;
	if(ex6)
	{
		//Pointers can be initialized to point to specific 
		//locations at the very moment they are defined:
		{
			int myvar;
			int * myptr = &myvar;
		}
		//The resulting state of variables after this code is the same as after:
		{
			int myvar;
			int * myptr;
			myptr = &myvar;
		}	
		//When pointers are initialized, what is initialized is the address 
		//they point to (i.e., myptr), never the value being pointed (i.e., *myptr). 
		//Therefore, the code above shall not be confused with: 

		// However, the code that follows is not valid (why)?:


//		int myvar;
//		int * myptr;
//		*myptr = &myvar;

		//Pointers can be initialized either to the address of a variable (such as 
		//in the case above), or to the value of another pointer (or array):
		{
				int myvar;
				int *foo = &myvar;
				int *bar = foo;
		}
	}

	int ex7 = 0;
	if(ex7)
	{
		//pointer arithmetic: only addition and subtraction are allowed
		char mychar = 'f';
		int myshort = 1;
		long mylong = 2;

		char *myptchar = &mychar;
		int *myptshort = &myshort;
		long *myptlong = &mylong;

		//the pointer is made to point to the following element of the same type, 
		//and, therefore, the size in bytes of the type it points to is added to the pointer.

		cout << myptchar << endl;
		cout << myptshort << endl;
		cout << myptlong << endl;

		++myptchar;
		++myptshort;
		++myptlong;

		cout << myptchar << endl;
		cout << myptshort << endl;
		cout << myptlong << endl;

		++myptchar;
		++myptshort;
		++myptlong;

		cout << myptchar << endl;
		cout << myptshort << endl;
		cout << myptlong << endl;

		//equivalent formulation

		myptchar = myptchar + 1;
		myptshort = myptshort + 1;
		myptlong = myptlong + 1;

		cout << myptchar << endl;
		cout << myptshort << endl;
		cout << myptlong << endl;

		//Essentially, these are the four possible combinations of the dereference operator with both the prefix and suffix versions of the increment operator (the same being applicable also to the decrement operator):
		int * p = myptshort;
		int * q = myptshort + 1;
		//*p++   // same as *(p++): increment pointer, and dereference unincremented address
		//*++p   // same as *(++p): increment pointer, and dereference incremented address
		//++*p   // same as ++(*p): dereference pointer, and increment the value it points to
		//(*p)++ // dereference pointer, and post-increment the value it points to 
		

		//A typical -but not so simple- statement involving these operators is:

 
		*p++ = *q++;


		//Because ++ has a higher precedence than *, both p and q are incremented, 
		//but because both increment operators (++) are used as postfix and not prefix, the value assigned to *p is *q before both p and q are incremented. And then both are incremented. It would be roughly equivalent to:

		*p = *q;
		++p;
		++q;
		
	}

	int ex8 = 0;
	if(ex8)
	{
		//But it is also possible to declare pointers that can access the pointed value to read it, 
		//but not to modify it. For this, it is enough with qualifying the type pointed to by the pointer as const.
		{		
			int x;
			int y = 10;
			const int * p = &y;
			x = *p;          // ok: reading p
			//*p = x;          // error: modifying p, which is const-qualified 
			y = 20;
		}

		int numbers[] = {10,20,30};
  		increment_all (numbers,numbers+3);
  		print_all (numbers,numbers+3);

  		// four cases to consider:

  		int x;
      	int *       p1 = &x;  // non-const pointer to non-const int
		const int *       p2 = &x;  // non-const pointer to const int
      	int * const p3 = &x;  // const pointer to non-const int
		const int * const p4 = &x;  // const pointer to const int 


		//To add a little bit more confusion to the syntax of const with 
		//pointers, the const qualifier can either precede or follow the 
		//pointed type, with the exact same meaning:

		const int * p2a = &x;  //      non-const pointer to const int
		int const * p2b = &x;  // also non-const pointer to const int 


		//As with the spaces surrounding the asterisk, the order of 
		//const in this case is simply a matter of style. This chapter uses a 
		//prefix const, as for historical reasons this seems to be more extended, 
		//but both are exactly equivalent. The merits of each style are still 
		//intensely debated on the internet.


	}
	int ex9 = 0;
	if(ex9)
	{
		{
			const char * foo = "hello";
			//foo points to the h

			//*(foo+4) has value o
			//foo[4] has value o

			cout << "The value of *(foo + 4) is " << *(foo + 4) << "." << endl;
			cout << "The value of foo[4] is " << foo[4] << "." << endl;
		}

		{
		//C++ allows the use of pointers that point to pointers, that these, in its turn, point to data (or even to other pointers). The syntax simply requires an asterisk (*) for each level of indirection in the declaration of the pointer:

		char a; // a char
		char * b; // a pointer to a char
		char ** c; // a pointer that points to a pointer of a char
		a = 'z';
		b = &a;
		c = &b;

		cout << a << endl;
		cout << b << endl;
		cout << c << endl;

		//c is of type char** and a value of ----
		//*c is of type char* and a value of ----
		//**c is of type char and a value of 'z'
		}

	}
	int ex10 = 1;
	if(ex10)
	{
		// can use void pointers for arbitrary data
		  char a = 'x';
		  int b = 1602;
		  increase (&a,sizeof(a));
		  increase (&b,sizeof(b));
		  cout << a << ", " << b << '\n';
	}

	int ex11 = 1;
	if(ex11)
	{
		{
			int * p;               // uninitialized pointer (local variable)
	
			int myarray[10];
			int * q = myarray+20;  // element out of bounds 
		}
		{
			int * p = 0;
			int * q = nullptr; //or int * q  = NULL; if using the standard library header

			//NULL pointer is not equal to void pointer
		}
	}

	int ex12 = 1;
	if(ex12)
	{
		//C++ allows operations with pointers to functions. The typical 
		//use of this is for passing a function as an argument to another 
		//function. Pointers to functions are declared with the same syntax 
		//as a regular function declaration, except that the name of the 
		//function is enclosed between parentheses () and an asterisk (*) is 
		//inserted before the name:

		int m,n;
		int (*minus)(int,int) = subtraction;

		m = operation (7, 5, addition);
		n = operation (20, m, minus);
		cout << "The value of n is " << n << ".\n";


		//In the example above, minus is a pointer to a function that has two 
		//parameters of type int. It is directly initialized to point to the 
		//function subtraction:

 
		//int (* minus)(int,int) = subtraction;

	}

	return 0;
}