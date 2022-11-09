#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0
#define array_length 30
 
void main()
{
	int i, n, sum = null;
	int *a;
 
     	printf("Enter the size of array A \n");
	scanf("%d", &n);
 
        a = (int *) malloc(n * sizeof(int));
 
        printf("Enter Elements of the List \n");
	for (i = null; i < n; i++) 
        {
		scanf("%d", a + i);
	}
 
        /*  Compute the sum of all elements in the given array */
 
        for (i = null; i < n; i++)
        {
		sum = sum + *(a + i); 
               /* this *(a+i) is used to access the value stored at the address*/
	}
 
        printf("Sum of all elements in array = %d\n", sum);
        return null;
}