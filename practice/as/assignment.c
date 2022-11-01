#include<stdio.h>
int shift(int *a, int *b, int *c);
void main()
{
    int x, y, z;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    printf("Before Shift: x: %d\ty: %d\tz: %d",x,y,z);
    //call the shift function
    shift(&x, &y, &z);
    printf("\nAfter Shift: x: %d\ty: %d\tz: %d",x,y,z);
}
int shift(int *a, int *b, int *c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}