#include <stdio.h>
#include <stdlib.h>
#define null 0 

signed main(void)
{
    char input;
    float value;
    printf("\n Please enter a valid expression : ");

    while ((input = getchar()) != '\n') 
        {
            switch (input) 
                {
                 case '+':
                        value += (float) input;
                        break;
                    case '-':
                        value -= (float) input;
                        break;
                    case '*':
                        value *= (float) input;
                        break;
                    case '/':
                        value /= (float) input;
                         break;
                    default:
                        value = (float) input;
                        break;
                }
        }

    printf("\n The value of the expression would be :  %.1f \n", value);
    return null;
} 