#include <stdio.h>
#include <stdlib.h>
#define null 0

int main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Code Decrypter by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    int i=null;
    char code_input[255];   // declaring variables and the array that we would make use of in this program //

    printf("\n Please enter the code that is required to be deciphered : ");

    while(i<255)
    {
        scanf("%c",&code_input[i]);     // taking the code as input from the user //
        if(code_input[i] == '\n')
        {
            break;
        }
        i++;
    }

    i=null;

    while(i<255 && code_input[i]!= '\n')
    {
        code_input[i] = code_input[i]-3;    // initiating the condition of the code as given in the assignment 3 question 7 and decoding the code_input //
        i++;
    }

    printf("\n The decrypted result of the code is : ");
    i=null;

    while(i<255 && code_input[i]!='\n')
    {
        printf("%c", code_input[i]);    // printing the decoded message, according to the question, 'khosph' corresponds to 'helpme' //
        i++;
    }

    return 0;
}
