#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h> // using the malloc.h library here to run the program, but it is not needed and the alternative code can be found in p5_other_approach.c//
#define null 0

// function declaration //
void pointer_array_sum(signed *a, signed *sum, signed *string_length);

//driver code//
signed main(void)
{
    signed n,array[n],sum = null,index;
    signed *a;
    printf("\n Please enter the number of elements in the array(max 30):");
    scanf("%d", &n);


    printf("\n Please enter the elements of the array : ");

    a = (signed *)malloc(n * sizeof(signed));

    for (index = null; index < n; index++)
        {
            printf("\n Please enter the element %dth of the array : ", index);
            scanf("%d", a+index);
        }
pointer_array_sum(a,&sum,&n);
printf("\n The sum of the array you entered is : %d", sum);
printf("\n The length of the array you entered is : %d", n);
return null;

}

// function definition //
void pointer_array_sum( signed *a, signed *sum, signed *string_length)
{
    for (signed i = null; i <30; i++)
        {
             *sum += *(a+i);
        }
}