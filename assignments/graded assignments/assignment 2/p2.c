#include <stdio.h>
#include <stdlib.h>

// Question 2 : To check if a number is positive, negative or zero //



int main() {
 int number_input;

 printf("Input a number to check if it is positive, negative or a zero \n");
 scanf("%d", &number_input);

//initiating the if else statements// 
 
 if(number_input > 0)
 printf("The number input : %d is a POSITIVE number.\n", number_input);

 if(number_input < 0)
 printf("The number input : %d is a NEGATIVE number \n", number_input);

 else 
 printf("The number input : %d is EQUAL TO ZERO \n", number_input);



 return 0;
}
