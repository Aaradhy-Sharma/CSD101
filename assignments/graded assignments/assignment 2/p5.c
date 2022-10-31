#include <stdio.h>
#include <stdlib.h>

// Question 5 : To check if any input character is an alphabet, digit or a special character //

int main(){

 char input;
 printf("\n Enter any character :");
 scanf("%c",&input);

// initiating the if else statements to check if the input character is an alphabet, digit or a special character //

 if(input>='0'&&input<='9')
 {
  printf("\n The character input : %c is a DIGIT", input);
 }

 else if(input>='A'&&input<='Z', input>='a'&&input<='z')
 {
  printf("\n The character input : %c is an ALPHABET", input);
 }

 else
 {
  printf("\n The character input : %c is a SPECIAL CHARACTER", input);
 }


 return 0;
}
