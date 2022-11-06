#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
signed array_sum_using_pointer(int arr[], int *sum, int *string_length);

// driver code //
signed main(void)
{
    int n;
    printf("\n Please enter the nu4mber of elements in the array  (max 30) :");
    scanf("%d", &n);
    int array[n];
    int array_sum = 0;
    printf("\n Please enter the elements of the array : ");
    for (signed index = 0; index < n; index++)
        {
            scanf("%d", &array[index]);
        }

    int array_length = sizeof(array) / sizeof(array[0]);
    int answer = array_sum_using_pointer(array,&array_sum,&array_length);
    printf("\n The length of the string is %d", array_length);


}

// function definition //
signed array_sum_using_pointer(int arr[], int *sum, int *string_length)
{
    
    for (int i = 0; i <30; i++)
        {
            sum += arr[i];
           
        }
    printf("\n Sum of given array is %d", sum);
    
}