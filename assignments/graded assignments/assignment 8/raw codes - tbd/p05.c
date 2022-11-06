#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0


// function declaration //
void pointer_array_sum(int **arr[], int *sum, int *string_length);


signed main(void)
{
	int n;
    printf("\n Please enter the number of elements in the array  (max 30) :");
    scanf("%d", &n);
    int array[n];
    int array_sum = 0;
    printf("\n Please enter the elements of the array : ");
    for (signed index = 0; index < n; index++)
        {
            scanf("%d", &array[index]);
        }

	int array_length = sizeof(array) / sizeof(arr[0]);
	printf("\n Sum of given array is %d", pointer_array_sum(array[n],&array_sum,&array_length));
    printf("\n The length of the string is %d", array_length);
	return null;
}

// function definition //
void pointer_array_sum(int **arr[], int *sum, int *string_length)
{
    for (int i = 0; i <30; i++)
        *sum += *arr[i];
}
