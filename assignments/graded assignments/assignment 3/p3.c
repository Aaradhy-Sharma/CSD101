#include <stdio.h>
#include <stdlib.h>
#define null 0
#define unity 1

int main()
{

    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t HCF(GCD) and LCM Calculator by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    int a, b, i, ctr1, ctr2, hcf, lcm;
    char single_input_mode_choice;

    printf("\n Please enter 0 for single input mode or any other character for multi-input mode :  ");  // letting user choose between single input mode or multiple input mode //
    scanf("%c",&single_input_mode_choice);

    if(single_input_mode_choice == '0')
    {
        printf("\n Please enter the first number : ");
        scanf("%d", &a);
        printf("\n Please enter the second number : ");
        scanf("%d", &b);
    }

    else
    {
        printf("\n Please enter the first number followed by the second number : ");
        scanf("%d%d",&a,&b);
    }


// to calculate the hcf //
    if(a>=b)
    {
        i=a;
    }

    else
    {
        i=b;
    }

    while(i>0)
    {
        hcf=i;
        ctr1=a%i;
        ctr2=b%i;
        i--;

        if(ctr1==0 && ctr2==0)
        {
            break;
        }

    }

    printf("The HCF is %d\n", hcf);

    lcm=(a*b)/hcf;      // using the formula: HCF(GCD) x LCM = First Number x Second Number to calculate the LCM of the two numbers input by the user //
    printf("The LCM is %d", lcm);

    return 0;
}
