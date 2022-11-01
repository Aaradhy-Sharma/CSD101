#include <stdio.h>
#include <stdlib.h>
#define null 0 


// driver code //
signed main(void)
{
    printf("\n\t\t ----------------------------------------------------------------");
    printf("\n\t\t\t multiple type variable adress printer by Aaradhy Sharma ");
    printf("\n\t\t ----------------------------------------------------------------");

    signed integer,*pointer_integer;
    float floater,*pointer_floater;
    char character, *pointer_character;

    printf("\n Please enter a character : ");
    scanf("%c",&character);
    pointer_character = &character;

    printf("\n Please enter an integer : ");
    scanf("%d",&integer);
    pointer_integer = &integer;

    printf("\n Please enter a float number : ");
    scanf("%f",&floater);
    pointer_floater = &floater;


    printf("\n The character, %c has the address:\t %u",character,pointer_character);
    printf("\n The integer, %d has the address :\t %u",integer,pointer_integer);
    printf("\n The floater, %f has the address :\t %u",floater,pointer_floater);
    
    return null;
}