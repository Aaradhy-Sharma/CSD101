#include <stdio.h>
int main() {

    double a,b,c;

    printf("Enter the numbers to display the greatest and smallest : ");
    scanf("%lf %lf %lf" , &a , &b , &c );

    // for a to be the greatest number it must be greater than both b and c //
    if (a >= b && a >=c)
        printf("\n %.2f is the greatest number ",a);

    // for b to be the greatest number it must be greater than both a and c //
    if (b >= a && b >=c)
        printf("\n %.2f is the greatest number ",b);

    // for c to be the greatest number it must be greater than both a and b //
    if (c >= a && c >=b)
        printf("\n %.2f is the greatest number ",c);
    
    // for a to be the smallest number it must be lesser than both b and c //
    if (a <=b && a <=c)
        printf("\n %.2f is the smallest number ", a);
    
     // for b to be the smallest number it must be lesser than both a and c //
    if (b <=a && b <=c)
        printf("\n %.2f is the smallest number ", b);
    
     // for c to be the smallest number it must be lesser than both a and b //
    if (c <=a && c <=b)
        printf("\n %.2f is the smallest number ", c);
    

    return 0;
}















