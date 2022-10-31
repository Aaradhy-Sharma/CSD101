#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0

signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t math.h library function tester by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    
    int x;


    x = fabs(7.5);
    printf("\n fabs(7.5) = %d",x);

    x = floor(7.5);
    printf("\n floor(7.5) = %d",x);

    x = fabs(0.0);
    printf("\n fabs(0.0) = %d",x);

    x = ceil(0.0);
    printf("\n ceil(0.0) = %d ",x);

    x = fabs(-6.4);
    printf("\n fabs(6.4) = %d ",x);

     x=ceil(-fabs(-8+floor(-5.5)));
    printf("\n ceil(-fabs(-8+floor(5.5))) = %d",x);

    return null;
}