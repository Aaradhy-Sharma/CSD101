#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0 
#define max_array_length 100

// function declaration //
void pointer_array_sum(signed *array_pointer, signed len);

//driver code//
signed main(void)
{
    signed n,sum=null;
    printf("\n Please enter the number of elements in the array(max 100):");
    scanf("%d", &n);

    signed array[n];
    printf("\n Please enter the elements of the array : ");

    for (signed index = null; index < n; index++)
        {
            printf("\n Please enter the element in position %d of the array : ", index);
            scanf("%d", &array[index]);
        }
    
    pointer_array_sum(array,n);
    
    return null;

}

// function definition //
void pointer_array_sum(signed *array_pointer, signed len)
{
    signed sum = null;
    for (signed i = null; i <len; i++)
        {
             sum += *(array_pointer+i);
        }
    printf("\n The sum of the array you entered is : %d", sum);
}