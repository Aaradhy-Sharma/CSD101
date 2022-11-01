#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0

float HypotenuseCalc(float num1,float num2)
{
    float hypotenuse = sqrt(pow(num1,2)+pow(num2,2));
    return hypotenuse;
}

signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t hypotenuse calculator by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    float base,perpendicular,hypotenuse;
    printf("\n Please enter the perpendicular and the base of the triangle : ");
    scanf("%f%f",&perpendicular,&base);
    hypotenuse = HypotenuseCalc(perpendicular,base);
    printf("The hypotenuse of %f and %f is : %f",perpendicular,base,hypotenuse);
    
    return null;
}

