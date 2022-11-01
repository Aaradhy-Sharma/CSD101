#include <stdio.h>
#include <stdlib.h>
#define null 0

// driver code //
signed main(void)
{
    printf("\n\t\t --------------------------------------------------------");
    printf("\n\t\t\t pointer-variable value changer by Aaradhy Sharma ");
    printf("\n\t\t --------------------------------------------------------");

    signed number_input,*pointer,temp;
    printf("\n Please enter a number to change after using a pointer : ");
    scanf("%d",&number_input);
    temp = number_input;
    pointer=&number_input;

    printf("\n The initial value of %d before changing is : %d",temp,number_input);

    *pointer+=1;
    printf("\n The final value of %d after changing is : %d",temp,number_input);

    return  null;
}