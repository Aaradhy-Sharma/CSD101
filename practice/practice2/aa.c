#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define null 0

signed main()
{
    printf("Please press enter to continue...");
    char ch = getchar();
    int i=null;
    printf("The initial value of i is : %d\n",i);
    i = i+1;
    printf("The new value of i is : %d \n",i);
    i += 1;
    printf("The new value of i is : %d \n",i);
    i++;
    printf("The new value of i is : %d \n",i);
    ++i;
    printf("The new value of i is : %d \n",i);
    i--;
    printf("The new value of i is : %d \n",i);
    --i;
    printf("The new value of i is : %d \n",i);
    printf("\n");
    i+++1;
    printf("The new value of i is : %d \n",i);

    printf("\n\n\n Please press enter again to continue : ");
    char ch2 = getchar();
    int j = null;
    j++;
    printf("\n\t The value of J is : %d",j);
    printf("\n");
    j++;
    printf("\n The final value of j++1 is : %d",j);
    j+++3;
    printf("\n The final value of j+++ : %d",j);

    printf("\n\n\n Please press enter again to continue : ");
    char ch3 = getchar();
    int k = null;
    printf("The initial value of k is : %d " , k);
    k++;
    printf("\n k++ : %d",k);
    k--;
    printf("\n k-- : %d",k);
    k---1;
    printf("\n k---1 : %d",k);
    k---2;
    printf("\n k---2 : %d", k);
    k---1;
    printf("\nk---1 : %d ",k);

    printf("\n\n\n\n The current value of k is : %d ",k);
    printf("\n");
    printf("\n if we print k++ in statement : %d ",k++);
    printf("\n if we print ++k in statement : %d ",++k);

    int x=null;
    const int y = 1;
    printf("\nx = %d",x);
    printf("\n x++ = %d",x++);
    printf("\nx = %d",x);
    printf("\n ++x = %d",++x);

    int z=null;
    printf("\n\n\n z = %d",z);
    int a = z++;
    printf("\n Value of a = %d at z = %d",a,z);
    z++;
    printf("\n Value of a = %d at z = %d",a,z);

    printf("\n\n\n\n\n\n\n");
    printf("\n1==1 %d", 1==1);
    printf("\n1!=1 %d", 1!=1);

    printf("\n !(1==1) %d", !(1==1));

    printf("\n this should be true : %d", 1!=1 || (1!=2 && 1<2));









    return null;
}
