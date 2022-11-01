#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0

int quotient(int a,int b);
int remain(int a,int b);
void split(int input,int length);

signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t multiple function number splitter by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");


    int input;
    printf("\n Please Input number between 1 and 32767 : ");
    scanf("%d",&input);

    int length = snprintf( NULL, 0, "%d", input);
    split(input,length);

    return null;
}

signed quotient(int a,int b)
{
    int q=a/b;
    return q;
}
signed remain(int a,int b)
{
    int r=a%b;
    return r;
}
void split(int input,int length)
{
    int cut;
    for(int i=length;i>0;i--){
        cut=round(pow(10,i-1));
        printf("%d ",quotient(input,cut));
        input=remain(input,cut);
    }
}