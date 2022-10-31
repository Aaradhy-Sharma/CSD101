#include <stdio.h>
#include <stdlib.h>

// Question 4: To check if an alphabet input is a vowel or a consonant //

int main() {

 char alphabet_input;
 printf("\n Please enter an alphabet to check if it is a vowel or a consonant : ");
 scanf("%c", &alphabet_input);

// initiating the if else statements to check if the alphabet_input is a vowel or not //

 if(alphabet_input == 'a'|| alphabet_input == 'e' || alphabet_input == 'i' || alphabet_input == 'o' || alphabet_input == 'u' || alphabet_input == 'A' || alphabet_input == 'E' || alphabet_input == 'I' || alphabet_input == 'O' || alphabet_input == 'U')
 printf("\n The alphabet input : %c is a VOWEL" , alphabet_input);

 else 
 printf("\n The alphabet input : %c is a CONSONANT" , alphabet_input);

 return 0;
}
