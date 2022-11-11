// program 3 //
// general expression is  *(*(*(arr + i) + j) +k) //
#include <stdio.h>
#include <stdlib.h>
#define null 0

// function definitions //
void watermark(); // function to print my watermark //
void array_maker(signed array[2][3][2]); // function to make an array //
void array_printer_using_pointers_in_matrix(signed array[2][3][2]); // function to print the array using pointers in matrix form //
void array_printer_using_pointers_in_line(signed array[2][3][2]); // function to print the array using pointers in line form //

// driver code //
void main()
{
    watermark(); // function call to print the watermark //
    signed array[2][3][2];
    array_maker(array); // function call to make an array //
    array_printer_using_pointers_in_matrix(array); // function call to print the array using pointers in matrix form //
    array_printer_using_pointers_in_line(array); // function call to print the array using pointers in line form //
}

// function definitions //
void array_maker(signed array[2][3][2])
{
    for (signed i = null; i < 2; i++)
    {
        for (signed j = null; j < 3; j++)
        {
            for (signed k = null; k < 2; k++)
            {
                printf("\n Please enter the element in position %dx%dx%d of the array : ", i,j,k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }
}

void array_printer_using_pointers_in_matrix(signed array[2][3][2])
{
    printf("\n The array you entered in matrix form is  : ");
    for (signed i = null; i < 2; i++)
    {
        for (signed j = null; j < 3; j++)
        {
            for (signed k = null; k < 2; k++)
            {
                printf("%d ", *(*(*(array + i) + j) + k));
            }
            printf("\n");
        }
        printf("\n");
    }
}

void array_printer_using_pointers_in_line(signed array[2][3][2])
{
    printf("\n The array you entered in line form is  : ");
    for (signed i = null; i < 2; i++)
    {
        for (signed j = null; j < 3; j++)
        {
            for (signed k = null; k < 2; k++)
            {
                printf("%d ", *(*(*(array + i) + j) + k));
            }
            printf(" ");
        }
        printf(" ");
    }
}

void watermark()
{
    printf("\n\t\t -----------------------------------------------------");
    printf("\n\t\t\t Pointer 3d array printer by Aaradhy Sharma ");
    printf("\n\t\t -----------------------------------------------------");
    printf("\n\n");
}

