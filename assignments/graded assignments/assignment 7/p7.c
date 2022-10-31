#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define check_larger(first_number,second_number)(first_number>second_number)?first_number:second_number // macro for determining larger number among two numbers //
#define check_smaller(first_number,second_number)(first_number<second_number)?first_number:second_number // macro for determining smaller number among two numbers //
#define null 0 

// function declaration //
double distance_point(double num1 , double num2 , double num3 , double num4);

// driver code //
signed main(void)
    {
        printf("\n\t\t ---------------------------------------------------");
        printf("\n\t\t\t point distance calculator by Aaradhy Sharma ");
        printf("\n\t\t ---------------------------------------------------");

        double x1,x2,y1,y2,result;
        printf("\n Please enter the coordinates of the first point, P1(x1,y1) : ");
        scanf("%lf%lf",&x1,&y1);
        printf("\n Please enter the coordinates of the second point, P2(x2,y2) : ");
        scanf("%lf%lf",&x2,&y2);

// calling the recursive function to find the distance between the two points input by the user //
        result = distance_point(x1,y1,x2,y2);

        printf("\n The distance between P1(%lf,%lf) and P2(%lf,%lf) is : %lf",x1,y1,x2,y2,result);
        return null;
    }

// function definition //
double distance_point(double num1 , double num2 , double num3 , double num4)
{
    double return_value,larger_point_1,larger_point_2,smaller_point_1,smaller_point_2;
    larger_point_1 = check_larger(num1,num3);
    larger_point_2 = check_larger(num2,num4);
    smaller_point_1 = check_smaller(num1,num3);
    smaller_point_2 = check_smaller(num2,num4);

    return (( sqrt( pow(( larger_point_1-smaller_point_1) ,2)+ pow((larger_point_2-smaller_point_2),2))));
}