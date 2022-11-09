#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define array_length 10

// function declaration //
void pointer_array_sum(int arr[], int *sum, int *string_length);

//driver code//

signed main(void)
{
    int array[array_length];
    int array_sum = null;
    printf("\n Please enter the elements of the array : ");

    for (signed index = 0; index < array_length; index++)
        {
            printf("\n Please enter the element %d of the array : ", index);
            scanf("%d", array[index]);
        }

	int string_length = sizeof(array) / sizeof(array[null]);
	pointer_array_sum(&array[array_length],&array_sum,&string_length);

    printf("\n The length of the string is %d", string_length);
	return null;
}

// function definition //
void pointer_array_sum(int arr[], int *sum, int *string_length)
{
    for (int i = 0; i <30; i++)
        {
             *sum += arr[i];
        }
    printf("\n The sum of the array you entered is : %d", *sum);

}