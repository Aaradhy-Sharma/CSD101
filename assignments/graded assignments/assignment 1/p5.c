#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int a , b;
    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    if (a%b == 0)
        printf(" \n The first number is divisible by the second");
    else
        printf("\n The first number is not divisible by the second");

    return 0;
}




















