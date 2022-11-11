// program 4 //

#include <stdio.h>
#include <stdlib.h>
#define null 0
#define rows 3 // defining the number of rows //
#define columns 5 // defining the number of columns //

// function definitions //
void watermark(); // function to print the watermark //
void array_maker(signed array[rows][columns]); // function to make a two dimensional array //
signed array_sorter_ascending(signed array[rows][columns]); // function to sort the array in ascending order //
void array_printer(signed array[rows][columns]); // function to print the array //
void pointer_to_array(signed *array_pointer, signed array[rows][columns]); // function to assign the values of the pointer array to the integer array //
void pointer_array_printer(signed *array_pointer); // function to print the values of the pointer array //

// driver code //
void main()
{
    watermark(); 
    signed array[rows][columns];
    signed final_array[rows][columns];
    signed *array_pointer = array;
    array_maker(array); // function call to make a two dimensional array //
    pointer_to_array(array_pointer,array); // function call to assign the values of the pointer array to the integer array //
    final_array[rows][columns] = array_sorter_ascending(array); // function call to sort the array in ascending order //
    array_printer(final_array); // function call to print the array //
    pointer_array_printer(array_pointer); // function call to print the values of the pointer array //
}

// function definitions //

void array_maker(signed array[rows][columns])
{
    for (signed i = null; i < rows; i++)
    {
        for (signed j = null; j < columns; j++)
        {
            printf("\n Please enter the element in position [%d][%d] of the array : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

signed array_sorter_ascending(signed array[rows][columns])
{
    signed temp;
    for (signed i = null; i < rows; i++)
    {
        for (signed j = null; j < columns; j++)
        {
            for (signed k = null; k < columns; k++)
            {
                if (array[i][j] < array[i][k])
                {
                    temp = array[i][j];
                    array[i][j] = array[i][k];
                    array[i][k] = temp;
                }
            }
        }
    }
    return array;

}

void array_printer(signed array[rows][columns])
{
    printf("\n The array you entered is : ");
    for (signed i = null; i < rows; i++)
    {
        printf("\n");
        for (signed j = null; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
    }
}

void pointer_to_array(signed *array_pointer, signed array[rows][columns])
{
    for (signed i = null; i < rows; i++)
    {
        for (signed j = null; j < columns; j++)
        {
            *array_pointer = array[i][j];
            array_pointer++;
        }
    }
}

void pointer_array_printer(signed *array_pointer)
{
    printf("\n The array you entered using pointer arithmetic is : ");
    for (signed i = null; i < rows; i++)
    {
        printf("\n");
        for (signed j = null; j < columns; j++)
        {
            printf("%d ", *array_pointer);
            array_pointer++;
        }
    }
}

void watermark()
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Pointer array sorter by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

