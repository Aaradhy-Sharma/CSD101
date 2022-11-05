#include <stdio.h>
#include <stdlib.h>
#define null 0
#define array_size 30

// function declaration //
void array_printer(signed *array);

// driver code //
signed main(void)
{
    signed array[array_size];
    printf("\n Please enter the elements of the array : ");
    for (signed index = 0; index < array_size; index++)
        {
            scanf("%d", &array[index]);
        }

    printf("\n The array is : ");
    array_printer(array);
    return null;

}

// function definition //
void array_printer(signed *array)
{
    for (signed index = 0; index < array_size; index++)
        {
            printf("%d ", array[index]);
        }
}
