#include <stdio.h>
#include <stdlib.h>
#define null 0 

signed prime_checker(int, int);

signed main(void)
{
    int num1, num2, checker;
    printf("\n Please enter the lower limit of the range of the numbers between which you want to find the prime numbers between :  ");
    scanf("%d", &num1);
    printf("\n Please enter the upper limit of the range of the numbers between which you want to find the prime numbers between :  ");
    scanf("%d", &num2);
    printf("\n The prime numbers between %d and %d are :  ", num1,num2);

    for(int i=num1+1;i<num2;i++)
        {
            checker = prime_checker(i, i / 2);
            if (checker == 1)
                {
                    printf("\n %d ", i);
                }

        }
    return null;
}

int prime_checker(int num, int i)

{
    if (i == 1)
        {
             return 1;
        }
    else
        {
             if (num % i == null)
                {
                     return null;
                }
            else
                {
                     return prime_checker(num, i - 1);
                }
    }
}