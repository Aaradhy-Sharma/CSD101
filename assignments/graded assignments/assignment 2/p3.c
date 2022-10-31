#include <stdio.h>
#include <stdlib.h>

// Question 3: to check if the number input is divisble by both 5 and 11 or not //

int main() {

 int number_input;
 printf("\n Enter a number to check it's divisibility by both 5 and 11 :");
 scanf("%d", &number_input);
 
// initiating the if else statements //
 
 if(number_input%5==0 , number_input%11==0)
 printf("\n The number input : %d is divisible by both 5 and 11", number_input);
 
 else
 printf("\n The number input : %d is NOT divisible by either 5 or 11 or both" , number_input);
 
 return 0;
}
