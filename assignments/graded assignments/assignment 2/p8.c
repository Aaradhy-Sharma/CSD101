#include <stdio.h>
#include <stdlib.h>

// Question 8: program to input the length of the three sides of a triangle and to check if the triangle is valid or not //

int main() {

 int a,b,c;

 printf("Enter the first side of the triangle : " );
 scanf("%d", &a); 
 
 printf("Enter the second side of the triangle : " );
 scanf("%d", &b); 
 
 printf("Enter the third side of the triangle : " );
 scanf("%d", &c); 

// initialising the if else statements to prove if the triangle is valid or not using the basic property of a triangle i.e sum of two sides must be greater than the third side //
 
 if(a+b>c&&a+c>b&&b+c>a)
 {
  printf("The triangle with sides %d, %d and %d is VALID", a , b ,c );
 }
 
 else 
 {
  printf("The triangle with sides %d, %d and %d is NOT VALID", a , b ,c);
 }
 
 return 0;
}
