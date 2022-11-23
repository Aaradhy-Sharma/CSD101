// simple c program to generate array of pointers to strings where strings are entered by the user and sort them alphabetically using pointers and dynamic memory allocation //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0

// function declarations //
void watermark(); // function to print watermarks //
void array_pointer(); // function to generate array of pointers to strings where strings are entered by the user //
void string_input(char *string); // function to input string //
void pointer_sorter_alphabetical(char **pointer_array, signed n); // function to sort the pointers alphabetically //
void pointer_printer(char **pointer_array, signed n); // function to print the pointers //

// driver code //
signed main(void)
{
    array_pointer();
    return null;
}

// function definition //
void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Array of pointers to strings by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void array_pointer()
{
    watermark();
    printf("\n Enter the number of strings you want to enter: ");
    signed n;
    scanf("%d", &n);
    char **pointer_array;
    pointer_array = (char **)malloc(n * sizeof(char *));
    for (signed i = null; i < n; i++)
    {
        pointer_array[i] = (char *)malloc(100 * sizeof(char));
        string_input(pointer_array[i]);
    }
    pointer_sorter_alphabetical(pointer_array, n);
    pointer_printer(pointer_array, n);
    free(pointer_array);

}

void string_input(char *string)
{
    printf("\n Enter the string: ");
    scanf(" %[^\n]s", string);
}

void pointer_sorter_alphabetical(char **pointer_array, signed n)
{
    char *temp;
    temp = (char *)malloc(100 * sizeof(char));
    for (signed i = null; i < n; i++)
    {
        for (signed j = null; j < n - i - 1; j++)
        {
            if (strcmp(pointer_array[j], pointer_array[j + 1]) > null)
            {
                strcpy(temp, pointer_array[j]);
                strcpy(pointer_array[j], pointer_array[j + 1]);
                strcpy(pointer_array[j + 1], temp);
            }
        } 
    }
    free(temp);
}

void pointer_printer(char **pointer_array, signed n)
{
    printf("\n The sorted array of pointers is: ");
    for (signed i = null; i < n; i++)
    {
        printf("\n %s", pointer_array[i]);
    }
}



