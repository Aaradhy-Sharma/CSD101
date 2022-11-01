#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0 

// function declaration //
signed squaresum(int n);

// driver code //
signed main(void)

    {
        signed int_choice;
        printf("\n\t\t ---------------------------------------------------------------");
        printf("\n\t\t\t recursive natural number square printer by Aaradhy Sharma ");
        printf("\n\t\t ---------------------------------------------------------------");
        printf("\n Please enter the number upto which you want the series to be : ");
        scanf("%d",&int_choice);
        printf(" %d ", squaresum(int_choice));

        return null;
    }

signed squaresum(int n)
{
    if(n==1)
        {
            return 1;

        }
    else
        {
            // recursive call //
            return pow(n,2)+squaresum(n-1);
        }
}