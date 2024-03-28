#include "stdio.h"

int main()
{
  // declare variables
  int input = 1; // starts at 1 for the default
  int output = 1; // starts at 1 instead of zero (see while loop)

  // get input
  printf("Please enter a non-negative integer [default = 1]... \n");
  scanf("%d",&input);

  // loop through to find our factorial
  // we start at 1 because 0 would cause
  // the whole thing to be 0
  int i = 1;
  while (i <= input) 
  {
    output *= i;
    ++i;
  }

  // display our newly calculated value
  printf("The factorial of %d is %d\n", input, output);

  // always return zero :p
  return 0;
}

