#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Question 9: C programme to find the roots of a quadratic equation //

int main() {

 double a,b,c,d,r1,r2,real_part,img_part;

//quadraic equation is of the form ax^2 + bx + c = 0 so we need to take inputs of a,b and c from the user //
 printf("\n Quadratic Equation : ax^2 + bx + c");
 printf("\n Please enter the co-efficient of x^2, a : " );
 scanf("%lf",&a);
 printf("\n Please enter the co-efficient of x, b ; ");
 scanf("%lf", &b);
 printf("\n Please enter the constant term, c : ");
 scanf("%lf", &c);

// initiating the value of d (determinant) //
 d = b*b-4*a*c;

// checking if roots are real/imaginary and finding roots//

// condition for real and distinct roots //
    
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("\n root 1 = %.2lf and root 2 = %.2lf", r1, r2);
    }
// condition for real but equal roots //

    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("\n root 1 = root 2 = %.2lf;", r1);
    }
// if roots are imaginary //

    else {
        real_part = -b / (2 * a);
        img_part = sqrt(-d) / (2 * a);
        printf("\n root 1 = %.2lf+%.2lfi and root 2 = %.2f-%.2fi", real_part, img_part, real_part, img_part);
    }

 
 return 0;
}
