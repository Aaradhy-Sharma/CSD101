// program 2 //

#include <stdio.h>
#include <stdlib.h>
#define null 0
#define array_size 5

// function definitions //
void watermark();
void pointer_array_maker(signed *array_pointer); // function to make an array using pointers //
void integer_array_maker(signed array[array_size]); // function to make an array using integer arrays //
void pointer_array_updater(signed *array_pointer);  // function to update the arrays by 5 using pointers //
void integer_array_updater(signed array[array_size]); // function to update the arrays by 5 using integer arrays //
void pointer_integer_assigner(signed *array_pointer, signed array[array_size]); // function to assign the values of the pointer array to the integer array //
void pointer_array_printer(signed *array_pointer); // function to print the values of the pointer array //
void integer_array_printer(signed array[array_size]); // function to print the values of the integer array //

// driver code //
void main()
{
    watermark(); // function call to print the watermark //
    signed array[array_size];
    signed *array_pointer = array;
    pointer_array_maker(array_pointer); // function call to make an array using pointers //
    integer_array_maker(array); // function call to make an array using integer arrays //
    pointer_integer_assigner(array_pointer,array); // function call to assign the values of the pointer array to the integer array //
    pointer_array_updater(array_pointer); // function call to update the arrays by 5 using pointers //
    integer_array_updater(array); // function call to update the arrays by 5 using integer arrays //
    pointer_array_printer(array_pointer); // function call to print the values of the pointer array //
    integer_array_printer(array); // function call to print the values of the integer array //
}

// function definitions //

void pointer_array_maker(signed *array_pointer) 
{
    for (signed i = null; i < array_size; i++)
    {
        printf("\n Please enter the element in position %d of the pointer array : ", i);
        scanf("%d", (array_pointer+i));
    }
    printf("\n The pointer initial array you entered is : ");
    for (signed i = null; i < array_size; i++)
    {
        printf("%d ", *(array_pointer+i));
    }
}

void integer_array_maker(signed array[array_size])
{
    for (signed i = null; i < array_size; i++)
    {
        printf("\n Please enter the element in position %d of the integer array : ", i);
        scanf("%d", &array[i]);
    }
    printf("\n The integer initial array you entered is : ");
    for (signed i = null; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
}

void pointer_array_updater(signed *array_pointer)
{
    for (signed i = null; i < array_size; i++)
    {
        *(array_pointer+i) += 5;
    }
    printf("\n The updated pointer array is : ");
    for (signed i = null; i < array_size; i++)
    {
        printf("%d ", *(array_pointer+i));
    }
}

void pointer_integer_assigner(signed *array_pointer, signed array[array_size])
{
    for (signed i = null; i < array_size; i++)
    {
        array[i] = *(array_pointer+i);
    }
    printf("\n The integer array after assigning the values of the pointer array is : ");
    for (signed i = null; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
}

void integer_array_updater(signed array[array_size])
{
    for (signed i = null; i < array_size; i++)
    {
        array[i] += 5;
    }
    printf("\n The updated integer array is : ");
    for (signed i = null; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
}

void pointer_array_printer(signed *array_pointer)
{
    printf("\n The final pointer array is : ");
    for (signed i = null; i < array_size; i++)
    {
        printf("%d ", *(array_pointer+i));
    }
}

void integer_array_printer(signed array[array_size])
{
    printf("\n The final integer array is : ");
    for (signed i = null; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
}

void watermark()
{
    printf("\n\t\t -----------------------------------------------------");
    printf("\n\t\t\t Pointer array pointers by Aaradhy Sharma ");
    printf("\n\t\t -----------------------------------------------------");
    printf("\n\n");
}



