#include <stdio.h>
#include <stdlib.h>
#define null 0 

signed largest_number(int array_1[], int array_length)
{
    if(array_length==1)
        {
            int minimum;
            minimum = array_1[null];
            return minimum;
        }

    else 
        {
           int minimum = ( array_1[array_length-1]>largest_number(array_1,array_length-1)?array_1[array_length-1]:largest_number(array_1,array_length-1));
            return minimum;
        }


}

signed main(void)
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int arrays_length = sizeof(array) / sizeof(array[null]);
    int least_minimum = largest_number(array,arrays_length);
    printf("The maximum in the array is : %d",least_minimum);
    return null;
}
