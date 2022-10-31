#include <stdio.h>
#include <stdlib.h>
#define null 0
#define unity 1

int main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t i + ch Array Creator by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");


    char array_1[26];   // declaring the variables that we would be using for creating this array program //
    int i=0;
    char alphabet='A';
    char proceed_tag;

    printf("\n\t\r Press any key to print the i + ch array");
    proceed_tag = getchar();




    while(i<26)         // initialing first while loop for alphabet upto Z //
    {
        array_1[i]=i+alphabet;
        i++;
        alphabet++;
    }

    i=0;

    while(i<26)          // initialing second while loop for printing alphabet upto Z in the form of i + ch //
    {
        printf("%d\n", array_1[i]);
        i++;
    }
    printf("\n end of array");

    return 0;
    }
