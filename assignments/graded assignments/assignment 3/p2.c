#include <stdio.h>
#include <stdlib.h>

int main(void)

{

    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Factorial Calculator by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    int i,factorial=1,number_input; 	// declaring factorial = 1 as the minimum //


    printf("\n Enter a number : \n ");
    scanf("%d",&number_input);    	// getting the number_input from the user //

    for(i=1;i<=number_input;i++)	// initialising the for loop to get factorial from the form i*n //
        {
        factorial=factorial*i;
        }

    printf("\n Factorial of %d is: %d",number_input,factorial);

    return 0;
}
