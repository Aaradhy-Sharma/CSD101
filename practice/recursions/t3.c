#include <stdio.h>
#include <stdlib.h>
#define null 0

void display(int n)
{
    if(n<1) 

     {
        return;
     }

    else
    {
        printf("%d",n);
        display(n-1);
        printf("%d",n);
    }

}

void main()
{
    int n = 3;
    display(3);
}