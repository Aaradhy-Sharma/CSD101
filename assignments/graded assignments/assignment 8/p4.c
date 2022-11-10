#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0

// function declarations //
void pointer_string_reverser(char *string);
void watermark();

// driver code //
signed main(void)
{
    watermark();
    char string[100];
    printf("\n Please enter the string : ");
    scanf("%s", string);

    pointer_string_reverser(string);
    printf("\n The reversed string is %s", string);
    return null;

}

// function definitions //
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

void watermark()
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Pointer string reverser by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}
