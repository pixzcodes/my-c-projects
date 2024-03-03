#include <stdio.h>

int main(int argc, char *argv[])
{
  int amount, twenties, tens, fives, ones;

  printf("Hello, please enter a U.S. Dollar amount... \n");
  scanf("%d", &amount);
  
  // check for twenties
  twenties = amount / 20;
  amount -= twenties * 20;

  // check for tens
  tens = amount / 10;
  amount -= tens * 10;

  // check for fives
  fives = amount / 5;
  amount -= fives * 5;

  // the rest is ones
  ones = amount;

  // print result
  if(twenties != 0) printf("$20 bills: %d \n", twenties);
  if(tens != 0) printf("$10 bills: %d \n", tens);
  if(fives != 0) printf("$5 bills: %d \n", fives);
  if(ones != 0) printf("$1 bills: %d \n", ones);

  return 0;
}
