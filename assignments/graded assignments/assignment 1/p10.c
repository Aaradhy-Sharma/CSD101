#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 	
int main()
{
  int number_input, a,reversenumber =0, temp;
  
  // taking a five digit number as input from the user //
  printf("Enter the 5 digit number(the number should not be greater than 32767):\n");   // we need to mention that the number input should be less than 327677 becuase otherwise c would not compile it //
  scanf("%d",&number_input);

  temp = number_input; //initiating a temp variable so that we can use it in the if else commands later //
  // to reverse the number we got as input from the user we need to 
 
  a=number_input%10;
  number_input= number_input/10;
  reversenumber=reversenumber+a*10000;
 
  a=number_input%10;
  number_input=number_input/10;
  reversenumber=reversenumber+a*1000;
 
  a=number_input%10;
  number_input=number_input/10;
  reversenumber=reversenumber+a*100;
 
  a=number_input%10;
  number_input=number_input/10;
  reversenumber=reversenumber+a*10;
 
  a=number_input%10;
  number_input=number_input/10;
  reversenumber=reversenumber+a*1;
 
  printf("The number ontained after reversing %d is :%d\n",temp,reversenumber);
  
  // checking if the number input by the user is equal to the reversed number or not //
 
  if( temp == reversenumber ) // we use temp here instead of number_input because while reversing the number input, the value of number_input becomes zero //
    printf("The number input is equal to the reversed number\n");
  else
    printf("The number input is NOT equal to the reversed number\n");
  
  return 0;
}
