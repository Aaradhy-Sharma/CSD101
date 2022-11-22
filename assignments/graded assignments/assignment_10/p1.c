// simple c program using structs to check if three given points form a triangle or not //
#include <stdio.h>
#include <stdlib.h>
#define null 0

// structure declaration //
struct point 
{
    signed x;
    signed y;
};

struct triangle // structure to check if the three points form a triangle //
{
    struct point point1;
    struct point point2;
    struct point point3;
};


// function declarations //
void watermark(); // function to print my watermark //
signed point_distance(struct point point1, struct point point2); // function to calculate the distance between two points //
signed if_triangle(struct triangle triangle); // function to check if the three points form a triangle using the property that lenght of two sides should be greater than the third side //
signed if_collinear(struct point point1, struct point point2, struct point point3); // function to check if the three points are collinear //
signed distance_printer(struct point point1, struct point point2, struct point point3); // function to print the distance between the points //




// driver code //
signed main(void)
{
    watermark();
    struct triangle triangle;
    printf("\n Please enter the coordinates of the first point : ");
    scanf("%d %d", &triangle.point1.x, &triangle.point1.y);
    printf("\n Please enter the coordinates of the second point : ");
    scanf("%d %d", &triangle.point2.x, &triangle.point2.y);
    printf("\n Please enter the coordinates of the third point : "); 
    scanf("%d %d", &triangle.point3.x, &triangle.point3.y);
    if (if_collinear(triangle.point1, triangle.point2, triangle.point3) == 1)
        {
            printf("\n The three points are collinear."); // if the three points are collinear //
            return null;
        }
    if (if_triangle(triangle) == 1)
        {
            printf("\n The three points form a triangle."); 
            distance_printer(triangle.point1, triangle.point2, triangle.point3); // to print the distance between the points //
        }
    else
        {
            printf("\n The three points do not form a triangle."); // if the three points do not form a triangle //
            distance_printer(triangle.point1, triangle.point2, triangle.point3); // to print the distance between the points //
        }
    return null;
}

// function definitions //
void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Triangle validity check by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

signed if_triangle(struct triangle triangle) // function to check if the three points form a triangle //
{
    signed distance1 = point_distance(triangle.point1, triangle.point2);
    signed distance2 = point_distance(triangle.point2, triangle.point3);
    signed distance3 = point_distance(triangle.point1, triangle.point3);
    if (distance1 + distance2 > distance3 && distance2 + distance3 > distance1 && distance1 + distance3 > distance2)
        {
            return 1;
        }
    else
        {
            return null;
        }
}

signed point_distance(struct point point1, struct point point2)
{
    signed distance = null;
    distance = (point1.x - point2.x) * (point1.x - point2.x) + (point1.y - point2.y) * (point1.y - point2.y);
    return distance;
}

signed if_collinear(struct point point1, struct point point2, struct point point3)
{
    signed distance1 = null;
    signed distance2 = null;
    signed distance3 = null;
    distance1 = point_distance(point1, point2);
    distance2 = point_distance(point2, point3);
    distance3 = point_distance(point1, point3);
    if (distance1 == distance2 + distance3 || distance2 == distance1 + distance3 || distance3 == distance1 + distance2)
        return 1;
    else
        return null;
}

signed distance_printer(struct point point1, struct point point2, struct point point3)
{
    signed distance1 = null;
    signed distance2 = null;
    signed distance3 = null;
    distance1 = point_distance(point1, point2);
    distance2 = point_distance(point2, point3);
    distance3 = point_distance(point1, point3);
    printf("\n The distance between the first and second point is : %d", distance1);
    printf("\n The distance between the second and third point is : %d", distance2);
    printf("\n The distance between the first and third point is : %d", distance3);
    return null;
}


