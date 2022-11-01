#include <stdio.h>
#include <stdlib.h>

// Question 6 : programme to check if a character input is in uppercase or in lowercase //

int main() {
 char input;

 printf("Enter an alphabet to check if it is in uppercase or in lowercase \n : ");
 scanf("%c", &input);

// initiating the if else statements to check if the character is in uppercase or in lowercase //
 if(input>='a'&&input<='z')
 {
   printf("The alphabet input : %c is a LOWER CASE ALPHABET", input);
 }
 else if(input>='A'&&input<='Z')
 {
   printf("The alphabet input : %c is an UPPER CASE ALPHABET" , input);
 }
 else
 printf("Error : The character input : %c is NOT an alphabet", input);

 return 0;
}
