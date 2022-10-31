#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0

void func(int a)
{
    for(int i=1;i<=a;i++)
     {
            for(int j=1;j<=a;j++)
              {
                 printf("* ");
              }
            printf("\n");
    }


}

signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t asterix square printer by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    
    int a;
    printf("\n Please enter the side of the square : ");
    scanf("%d",&a);
    func(a);
    
    
    return null;
}