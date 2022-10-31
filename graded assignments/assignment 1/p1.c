// Question 1 of Assignment 1 //


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
  
int main ()
{


// part 1 //

 float a = 22 , b = 7 ,c ;
 c = a/b ;
 printf("The answer is : %f" , c);

// part 2 //

 float a2 = 7 , b2 = 22 ,c2 ;
 c2 = a2/b2 ;
 printf("\n The answer is : %f" , c2); 

 // part 3 //
 int a3 = 22 , b3 = 7 ,c3 ;
 c3 = a3 % b3 ;
 printf("\n The answer is : %i" , c3);
 
 // part 4 //
 int c4 = b3 % a3;
 printf("\n The answer is : %i" , c4); 

 return 0;
}

