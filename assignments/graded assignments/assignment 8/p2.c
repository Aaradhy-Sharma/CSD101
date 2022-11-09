#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0

// function declaration //
void pointer_factorial_finder(signed *number, signed *factorial);

// driver code //
signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Pointer factorial finder by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    signed number_input;
    printf("\n Please enter the number : ");
    scanf("%d", &number_input);
    signed factorial = 1;

    pointer_factorial_finder(&number_input, &factorial);
    printf("\n The factorial of %d is %d", number_input, factorial);
    return null;

}

// function definition //
void pointer_factorial_finder(signed *number, signed *factorial)
{
    for (signed index = 1; index <= *number; index++)
        {
            *factorial *= index;
        }
}