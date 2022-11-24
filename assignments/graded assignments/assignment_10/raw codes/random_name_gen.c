// simple c program to generate n number of random names in c using functions //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0

// function declaration //

void watermark(); // function to print watermarks //

void random_name_generator(char *name); // function to generate random names //

// driver code //

signed main(void)
{
    printf("\n Enter the number of names you want to generate: ");
    signed n;
    scanf("%d", &n);
    char *name;
    name = (char *)malloc(sizeof(char));
    for (signed i = null; i < n; i++)
    {
        random_name_generator(name);
        printf("\n %s", name);
    }
    return null;
}   

// function definition //

void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Random name generator by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

