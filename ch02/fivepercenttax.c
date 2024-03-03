#include <stdio.h>

// constant for our five percent variable
#define TAX 0.05

int main(){
  // delcare variables
  float input, result;
  // ask user for their dollar and cents amount
  printf("Please enter a dollar and cents amount...\n");
  printf("Example: 150.01 \n");
  printf("$");
  scanf("%f", &input);
  
  // calculate the tax and display the result
  result = input + (input * TAX);
  printf("With a 5%% tax that comes out to: \n");
  printf("$%.2f \n", result);

  return 0;
}
