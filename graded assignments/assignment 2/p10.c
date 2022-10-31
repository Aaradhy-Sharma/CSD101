#include <stdio.h>
#include <stdlib.h>

// Question 10 : to input three sides of a triangle and check if it is (a) right angled (b) equilateral or (c) none of the two //

int main()
{
    int a,b,c;
    printf("Enter the three sides of the triangle to check : \n");
    scanf("%d %d %d",&a,&b,&c);

// (a)right angled triangle is that which follows pythogoras theorem //
    if(a*a + b*b == c*c)
    {
        printf("\n The triangle with the sides %d %d %d is a (a) RIGHT ANGLED TRIANGLE",a,b,c);
    }

// (b) for the triangle to be an equilateral triangle a = b = c must hold true always //
    else if(a==b&&a==c)
    {
        printf("\n The triangle with the sides %d %d %d is an (b) EQUILATERAL TRIANGLE",a,b,c);
    }
// (c) none of the two //
    else
    {
        printf("\n The triangle with the sides %d %d %d is (c) NONE OF THE TWO",a,b,c);
    }
 return 0;
}
