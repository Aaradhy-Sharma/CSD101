#include <stdio.h>
#include <stdlib.h>
#define null 0 

signed binary_converter(signed decimal_interger)
{
    if(decimal_interger==0)
        {
            return null;
        }
    
    else 
        return (decimal_interger%2 + 10*binary_converter(decimal_interger/2));
}

signed main()
{
    signed decimal_interger;
    printf("\n Please enter a number to be converted into binary using recursions in C : ");
    scanf("%d",&decimal_interger);

    printf("\n The number, %d converted into binary is : %d", decimal_interger, binary_converter(decimal_interger));
    return null;
}