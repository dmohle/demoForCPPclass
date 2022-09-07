/* LargestOfThreeFunctions.cpp
   dH 1/19/2006
   Demo for CIT-68 week 2.
   
   Find the largest of three integers entered by the user and display that (largest) integer.
*/ 

#include <iostream>

using namespace std;

// Function prototypes
void GetThreeInts(int& num1, int& num2, int& num3);
int FindLargest(int num1, int num2, int num3);
void DisplayLargest(int num1);


// The main() function - entry point for the calling program (only one main() is allowed).
void main(void)
{
  // Variable Declaration Section
  // Notice the data table in this program section.
  
  int num1 = 0;		// CALC, OUTPUT - integer used in comparision test and echoed to the user
  int num2 = 0;		// CALC, OUTPUT  - integer used in comparision test and echoed to the user
  int num3 = 0;		// CALC, OUTPUT  - integer used in comparision test and echoed to the user

  int largestInt = 0; // CALC, OUTPUT - the largest of three integers

  GetThreeInts(num1, num2, num3);
  largestInt = FindLargest(num1, num2, num3);
  DisplayLargest(largestInt);
}


// Function definition section.

// Notice the function header is exactly the same as the prototype.  The compiler doesn't care
// about parameter names, but it doesn't complain either! This makes coding changes easy and accurate,
// after changing a function header, simply copy and paste to the function prototype.


//*************************************************************************
// 
// GetThreeInts()
//
// This function obtains three integer values from the keyboard buffer and 
// returns them (via pass-by-reference) to the calling module.
//
// Preconditions:
//   num1, num2, and num3 are undefined
// Postconditions:
//   num1, num2, and num3 are input from the user (read from the keyboard 
//   buffer) and returned
//
//  num1, num2, and num3 are all reference parameters because the purpose 
//  of this function is to get input from the user and this input must be 
//  returned to the calling module for further processing.
//
// void GetThreeInts(int& num1,     // first integer read - OUT 
//                   int& num2,     // second integer read - OUT
//                   int& num3)     // third integer read - OUT
//************************************************************

void GetThreeInts(int& num1, int& num2, int& num3)
{  
  // Input Section
  // Get the three integers from the user.

  cout << "\n\n Please enter your first integer: ";
  cin >> num1;
  cout << "\n Your first entered number is: " << num1;
  
  cout << "\n\n Please enter your second integer: ";
  cin >> num2;
  cout << "\n Your second entered number is: " << num2;
	
  cout << "\n\n Please enter your third integer: ";
  cin >> num3;
  cout << "\n Your third entered number is: " << num3;
}


//*************************************************************************
//
// FindLargest()
//
// This value-returning function accepts three integer values as three value
// parameters and returns the largest of the three. 
//
// Preconditions:
//   num1, num2, and num3 are defined
// Postconditions:
//   an integer is returned representing the largest value input
//
//  num1, num2, and num3 are all value parameters because the purpose 
//  of this function is to find and return the largest value - we don't need 
//  to change anything, we need a single value returned.
//
// int FindLargest(int num1,     // first integer - IN 
//                 int num2,     // second integer - IN
//                 int num3)     // third integer - IN
//************************************************************

int FindLargest(int num1, int num2, int num3)
{
  int largestInt = 0;
	
	if (num1 > num2)
  {
	  if (num1 > num3)
	  {
	    largestInt = num1;
    }
    else
 	  {
	    largestInt = num3;
    }
  }
  else
  {
	  if (num2 > num3)
	  {
      largestInt = num2;
    }
    else
	  {
      largestInt = num3;
    }
  }

	return largestInt;
}

//*************************************************************************
//
// FindLargest()
//
// This void function accepts an integer values as a value
// parameter and displays the value with a message indicating 
// the largest integer was found. 
//
// Preconditions:
//   num1 was defined and calculated to be the largest of three integers
// Postconditions:
//   an integer is returned representing the largest value input
//
//  num1 is a value parameter because the purpose 
//  of this function is to display a single value, not to change anything.
//  This function will be used to display the largest of three integers.
//
// void DisplayLargest(int num1)    // an integer - IN / OUT 
//************************************************************

void DisplayLargest(int num1)
{
  cout << "\n\n\n***************************\n";
  cout << "\nThe largest integer is: " << num1;
  cout << "\n\n***************************\n\n";

}