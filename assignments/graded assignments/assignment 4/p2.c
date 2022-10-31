#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0

signed main(void)
{   
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t a-5 printer by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    
    int a,result;
    printf("\n Please enter a number : ");
    scanf("%d",&a);

    result = sub5(a);
    printf("\n sub5(%d) = %d",a,result);
    

    return null;
}

int sub5(int x)
{
    x -= 5;
    return x;
}