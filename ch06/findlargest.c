#include <stdio.h>

// dont really now how to get the accuracy with the 
// decimals yet
int main () {
  // delcare some variables
  float current, input;

  // set default value for "current"
  current = 0.0;

  // display instructions
  printf("Enter numbers one by one, enter '0' or a negative number to end \n");
  
  // loop and request input 
  do {
    scanf("%f", &input);
    if (input > current) {
      current = input;
    }
  } while (input >= 0);

  // display the largest number
  printf("The largest number is %f \n", current);

  return 0;
}
