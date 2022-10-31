#include <stdio.h>
int main() 
{
 int  year_input;
 printf("Please enter a year to check if it is a leap year or not : "); // taking a year as an input from the user //
 scanf("%d", &year_input );
 

 if(year_input % 4 == 0)						// a year is a leap year if it is divisible by 4 so we divide the year input by the user by 4 and if the remainder is zero it is a leap year and if its not then we say that the year is not a leap year //
    printf("The year %d is a leap year \n", year_input);
 
 else 
    printf("The year %d is NOT a leap year \n", year_input);

 return 0;

}
