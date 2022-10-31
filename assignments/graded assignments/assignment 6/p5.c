#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0 

signed reverse_function(int num1);

signed main(void)
{
    signed num, reversed_number;
    printf("\n Please enter any number to find its reverse : ");
    scanf("%d", &num);

    reversed_number = reverse_function(num);
    printf("\n The reversed number is : %d", reversed_number);

    if(reversed_number==num)
        {
            printf("\n Yes. The number is indeed a palindrome.");
        }
    else 
        {
            printf("\n No. The number is not a palindrome.");
        }

    return null;
}

signed reverse_function(int num1)
{
    signed digit_count = (signed)log10(num1);

    // the base condition will be //
    if(num1==0)
        {
            return null;
        }
    
    return((num1%10*pow(10,digit_count))+ reverse_function(num1/10));
    
    
}