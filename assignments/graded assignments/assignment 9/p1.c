// program 1 //

#include <stdio.h>
#include <stdlib.h>
#define null 0

// function definitions //
void watermark();

// driver code //
void main()
{
    watermark();
    signed a[3][4] = 
    {
        {1,2,3,4},
        {11,12,13,14},
        {21,22,23,24}
    };

    signed (*p)[4] = a;
    p=a;
    
    // to print the values of p,p+1,p+2 using a as a pointer //
    
    printf("\n The value of p,p+1 and p+2 respectively are: %d %d %d\n",*a,*(a+1),*(a+2));
    
    // to print the value of *(*(p+i)+j) where 0<= i < 3 and 0<=j <4 using a as a pointer //

    for (signed i = null; i < 3; i++)
    {
        for (signed j = null; j < 4; j++)
        {
            printf("\n The value of *(*(p+%d)+%d) is : %d",i,j,*(*(p+i)+j));
        }
    }
}

// function definitions //
void watermark()
{
    printf("\n\t\t -----------------------------------------------------");
    printf("\n\t\t\t Pointer variable value printer by Aaradhy Sharma ");
    printf("\n\t\t -----------------------------------------------------");
    printf("\n\n");
}
