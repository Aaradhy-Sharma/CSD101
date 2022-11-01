#include <stdio.h>
#include <stdlib.h>

// Question 12: To input electrcity unit charges and to calculate the electrcity bill //

int main() {                  //declaring the variables we require for this program//
  int units_consumed;
  float amount,total_amount, surcharge;

  printf("\n Please enter the number of units consumed :"); // taking input from the user //
  scanf("%i", &units_consumed);

// initiating the if else statements to calculate the electrcity bill according to the conditions given in the question //
  if(units_consumed<=50)
  {
    amount = 0.50* units_consumed;
  }
  else if(units_consumed<=100)
  {
    amount = 25 + (units_consumed - 50)*0.75;
  }
  else if(units_consumed<=200)
    {
      amount = 100 + (units_consumed-150)*1.20;
    }
  else if(units_consumed>250)
    {
      amount = 220 + (units_consumed-250)*1.50;
    }
// adding surcharge to amount//

  total_amount = amount + (20/100 * amount);

  printf("\n The total electicity bill is %f for %i units consumed." , total_amount , units_consumed );

return 0;
}