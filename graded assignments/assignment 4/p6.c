#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define null 0
#define CheckMultiple(num1,num2)(num2%num1==0)?1:null
#define CheckSmaller(num1,num2)(num1<num2)?num1:num2
#define CheckLarger(num1,num2)(num1>num2)?num1:num2

signed multiple(int num1,int num2)
{
    signed x1 = CheckLarger(num1,num2);
    signed x2 = CheckSmaller(num1,num2);

    if(x1%x2==0)
        { 
            return 1;
        }
    else 
        {
            return null;
        }
}

signed main(void)
{   
    int user_choice;
    printf("\n Please enter 0 for macro mode else enter any other character for function mode : ");
    scanf("%d",&user_choice);
    if(user_choice==null)

        {
            signed first_number , second_number , larger_number , smaller_number,returned_value;
            printf("/n Please enter two numbers : ");
            scanf("%d%d",&first_number,&second_number);

            larger_number = CheckLarger(first_number,second_number);
            smaller_number = CheckSmaller(first_number,second_number);
            returned_value = CheckMultiple(smaller_number,larger_number);
            printf("\n\t %d", returned_value);
        }
    else 
        {
            signed first_number_1 , second_number_1;
            printf("\n Please enter two numbers : ");
            scanf("%d%d",&first_number_1, &second_number_1);
            multiple(first_number_1,second_number_1);
            printf("\n %d", multiple(first_number_1,second_number_1));
        }


    return null;
}

