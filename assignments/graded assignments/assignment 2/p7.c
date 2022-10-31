#include <stdio.h>
#include <stdlib.h>

// Question 7 : program to enter month number and display the number of days in it //

int main()
{

 int month_number;
 printf("Enter the month number to display the number of days in it : \n ");
 scanf("%i", &month_number);

// initialising the if else statement for checking the days in month_number //

 if(month_number == 1 || month_number == 3 || month_number == 5 || month_number == 7 || month_number == 8 || month_number == 10 || month_number == 12) {
  printf("The month input with month number : %i has 31 days \n" , month_number);
 }

 else if(month_number == 2) {
  
  printf("The month input with month number : %i has 28 days ( 29 if it is a leap year) \n " , month_number);
 }
 
 else {
  printf("The month input with month number : %i has 30 days \n" , month_number);
 }

 return 0;
}
