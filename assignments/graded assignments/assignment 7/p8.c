#include <stdio.h>
#include <stdlib.h>
#define null 0 

// driver code //
void main()
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Variable adress printer by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    signed i, *p, **q;

    printf("\n Please enter the value of i : ");
    scanf("%d", &i);

    p = &i;
    q = &p;

    printf("Address of i = %u or p=%u or *q=%u\n", &i, p, *q);
    printf("Address of p = %u or q= %u\n", &p, q);
    printf("Address of q = %u\n", &q);
    printf("Value of i = %d or *(&i) = %d or *p = %d or **q=%d\n", i, *(&i), *p, **q);
    printf("Value of q = %d\n", q);
}