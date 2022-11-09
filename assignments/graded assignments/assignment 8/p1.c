#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0

// function declaration //
void cycle_pointer(signed *first_number, signed *second_number, signed *third_number);

// driver code //
signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t pointer number cycler by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    signed first_number, second_number, third_number;
    printf("\n Please enter the first number : ");
    scanf("%d", &first_number);
    printf("\n Please enter the second number : ");
    scanf("%d", &second_number);
    printf("\n Please enter the third number : ");
    scanf("%d", &third_number);

    cycle_pointer(&first_number, &second_number, &third_number);
    printf("\n The first number is %d", first_number);
    printf("\n The second number is %d", second_number);
    printf("\n The third number is %d", third_number);
    return null;

}

// function definition //
void cycle_pointer(signed *first_number, signed *second_number, signed *third_number)
{
    signed temp = *second_number;
    *second_number = *first_number;
    *first_number = *third_number;
    *third_number = temp;
}