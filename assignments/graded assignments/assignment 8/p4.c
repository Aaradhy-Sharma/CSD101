#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0

// function declaration //
void pointer_string_reverser(char *string);

// driver code //
signed main(void)
{
    char string[100];
    printf("\n Please enter the string : ");
    scanf("%s", string);

    pointer_string_reverser(string);
    printf("\n The reversed string is %s", string);
    return null;

}

// function definition //
void pointer_string_reverser(char *string)
{
    signed length = strlen(string);
    for (signed index = 0; index < length / 2; index++)
        {
            char temp = string[index];
            string[index] = string[length - index - 1];
            string[length - index - 1] = temp;
        }
}
