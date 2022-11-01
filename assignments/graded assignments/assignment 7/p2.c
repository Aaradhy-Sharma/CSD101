#include <stdio.h>
#include <stdlib.h>
#define null 0 

// defining the fibonacci series initiater function //
//recursive function//
void fibonacci_series(signed given_number)
    {
        static signed num1 = null , num2 = 1 , num3;
        if(given_number>0)
            {
                num3 = num1 + num2;
                num1 = num2;
                num2 = num3;
                printf(" %d ", num3);
                fibonacci_series(given_number-1);
            }
    }
//driver code//
signed main(void)
    {
        printf("\n\t\t ---------------------------------------------------------------------");
        printf("\n\t\t\t fibonacci series printer using recursion by Aaradhy Sharma ");
        printf("\n\t\t ---------------------------------------------------------------------");
        signed number_input;
        printf("\n Please enter the number of elements to be in the fibonacci series :  ");
        scanf("%d",&number_input);

        printf("%d %d",null,1);
// calling the fibonacci series recursive function //
        fibonacci_series(number_input-2);

        return null;
    }