#include <stdio.h>
#include <stdlib.h>
#define null 0 

// function declaration //
signed pow_2(int given_number);

// driver code //
signed main(void)
    {
        printf("\n\t\t ---------------------------------------------------");
        printf("\n\t\t\t recursive power calculator by Aaradhy Sharma ");
        printf("\n\t\t ---------------------------------------------------");
        signed number_input;
        printf("\n Please enter a number to find the result : ");
        scanf("%d",&number_input);
// calling the recursive function //
        printf("\n The value of 2 raised to the power %d is : %d", number_input, pow_2(number_input));
        return null;
    }

// function definition //
signed pow_2(int given_number)
{
    signed final;
    if(given_number==null)
        {
            final = 1;
            return final;
        }
    else
        {
            final = 2*pow_2(given_number-1);
        }
}