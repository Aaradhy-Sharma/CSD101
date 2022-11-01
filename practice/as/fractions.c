#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define unity 1
#define null 0


signed get_lcm(signed num1 , signed num2);
signed get_hcf(signed num3 , signed num4);

signed main(void)
{
    signed numerator_1,numerator_2,denominator_1,denominator_2,sum,difference,product,division_product,numerator_pt_1,numerator_pt_2,denominator_cache,final_numerator;
    signed error_cache_variable=null;
    char operator;
    printf("\n Please enter the first fraction in the form numerator/denominator : ");
    scanf("%d/%d",&numerator_1,&denominator_1);
    printf("\n Please enter the second fraction in the form numerator/denominator : ");
    scanf("%d/%d",&numerator_2,&denominator_2);
    while(denominator_1==null || denominator_2 ==null)
        {   
            if(error_cache_variable<5)
            {
                for(error_cache_variable=null ; error_cache_variable<=5 ; error_cache_variable++)

                     {
                            printf("\n Error : denominator cannot be zero. Please try again.");
                            printf("\n This program will terminate after %d more incorrect attempts.",5-error_cache_variable);
                            printf("\n Please enter the first fraction in the form numerator/denominator : ");
                            scanf("%d/%d",&numerator_1,&denominator_1);
                            printf("\n Please enter the second fraction in the form numerator/denominator : ");
                            scanf("%d/%d",&numerator_2,&denominator_2);
                }
            }

            else
            
                {
                    printf("\nError : Maximum failed attempts reached. Terminating program...");
                    printf("\n\t Program Terminated.");
                    return null;
                }
        }

    printf("\n Please enter the operator to perform that specific operation : ");
    printf("\n\n +\t:\taddition\n-\t:\tsubstraction\n* or x\t:\tmultiplication\n/\t:\t:division");
    scanf("%c", &operator);
    error_cache_variable=null;
    
    if(operator=='+')
        {
             if(!(denominator_1==denominator_2))
                    {
                      numerator_pt_1 = numerator_1 * get_lcm(denominator_1,denominator_2);
                      numerator_pt_2 = numerator_2 * get_lcm(denominator_1,denominator_2);
                      denominator_cache = get_lcm(denominator_1,denominator_2);
                      final_numerator = numerator_pt_1 + numerator_pt_2;
                      printf("\n the value of denominator : %d",denominator_cache);
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(denominator_1,denominator_2),denominator_cache/get_hcf(denominator_1,denominator_2));
                    }
             else
                    {
                      final_numerator = numerator_1 + numerator_2;
                      denominator_cache = denominator_1;
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
            
                    }

    }

    else if(operator=='-')
        {
             if(!(denominator_1==denominator_2))
                    {
                      numerator_pt_1 = numerator_1 * get_lcm(denominator_1,denominator_2);
                      numerator_pt_2 = numerator_2 * get_lcm(denominator_1,denominator_2);
                      denominator_cache = get_lcm(denominator_1,denominator_2);
                      final_numerator = numerator_pt_1 - numerator_pt_2;
                      printf("\n the value of denominator : %d",denominator_cache);
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(denominator_1,denominator_2),denominator_cache/get_hcf(denominator_1,denominator_2));
                    }
             else
                    {
                      final_numerator = numerator_1 - numerator_2;
                      denominator_cache = denominator_1;
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
            
                    }

    }

    else if(operator=='*'||operator=='x')
        {
            final_numerator=numerator_1*numerator_2;
            denominator_cache=denominator_1*denominator_2;
            printf("\n The product fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
        }
    
        else if(operator=='/')
        {
            final_numerator=numerator_1*denominator_2;
            denominator_cache=denominator_1*numerator_2;
            printf("\n The product fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
        }

    return null;

}

signed get_lcm(signed number_1 , signed number_2)
{
    static signed maximum = unity;
    if(maximum%number_1==0&&maximum%2==0)
        {
            return maximum;
        }
    else
        {
            maximum++;
            get_lcm(number_1,number_2);
            return maximum;
        }
}

signed get_hcf(signed number_3 , signed number_4)
{
    int resultant = unity;
    while(resultant!=0)
        {
            resultant = number_3%number_4;
            number_3=number_4;
            number_4=resultant;
        }
    return(number_3);

}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define unity 1
#define null 0


signed get_lcm(signed num1 , signed num2);
signed get_hcf(signed num3 , signed num4);

signed main(void)
{
    signed numerator_1,numerator_2,denominator_1,denominator_2,sum,difference,product,division_product,numerator_pt_1,numerator_pt_2,denominator_cache,final_numerator;
    signed error_cache_variable=null;
    char operator;
    printf("\n Please enter the first fraction in the form numerator/denominator : ");
    scanf("%d/%d",&numerator_1,&denominator_1);
    printf("\n Please enter the second fraction in the form numerator/denominator : ");
    scanf("%d/%d",&numerator_2,&denominator_2);
    while(denominator_1==null || denominator_2 ==null)
        {   
            if(error_cache_variable<5)
            {
                for(error_cache_variable=null ; error_cache_variable<=5 ; error_cache_variable++)

                     {
                            printf("\n Error : denominator cannot be zero. Please try again.");
                            printf("\n This program will terminate after %d more incorrect attempts.",5-error_cache_variable);
                            printf("\n Please enter the first fraction in the form numerator/denominator : ");
                            scanf("%d/%d",&numerator_1,&denominator_1);
                            printf("\n Please enter the second fraction in the form numerator/denominator : ");
                            scanf("%d/%d",&numerator_2,&denominator_2);
                }
            }

            else
            
                {
                    printf("\nError : Maximum failed attempts reached. Terminating program...");
                    printf("\n\t Program Terminated.");
                    return null;
                }
        }

    printf("\n Please enter the operator to perform that specific operation : ");
    printf("\n\n +\t:\taddition\n-\t:\tsubstraction\n* or x\t:\tmultiplication\n/\t:\t:division");
    scanf("%c", &operator);
    error_cache_variable=null;
    
    if(operator=='+')
        {
             if(!(denominator_1==denominator_2))
                    {
                      numerator_pt_1 = numerator_1 * get_lcm(denominator_1,denominator_2);
                      numerator_pt_2 = numerator_2 * get_lcm(denominator_1,denominator_2);
                      denominator_cache = get_lcm(denominator_1,denominator_2);
                      final_numerator = numerator_pt_1 + numerator_pt_2;
                      printf("\n the value of denominator : %d",denominator_cache);
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(denominator_1,denominator_2),denominator_cache/get_hcf(denominator_1,denominator_2));
                    }
             else
                    {
                      final_numerator = numerator_1 + numerator_2;
                      denominator_cache = denominator_1;
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
            
                    }

    }

    else if(operator=='-')
        {
             if(!(denominator_1==denominator_2))
                    {
                      numerator_pt_1 = numerator_1 * get_lcm(denominator_1,denominator_2);
                      numerator_pt_2 = numerator_2 * get_lcm(denominator_1,denominator_2);
                      denominator_cache = get_lcm(denominator_1,denominator_2);
                      final_numerator = numerator_pt_1 - numerator_pt_2;
                      printf("\n the value of denominator : %d",denominator_cache);
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(denominator_1,denominator_2),denominator_cache/get_hcf(denominator_1,denominator_2));
                    }
             else
                    {
                      final_numerator = numerator_1 - numerator_2;
                      denominator_cache = denominator_1;
                      printf("\n The sum fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
            
                    }

    }

    else if(operator=='*'||operator=='x')
        {
            final_numerator=numerator_1*numerator_2;
            denominator_cache=denominator_1*denominator_2;
            printf("\n The product fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
        }
    
        else if(operator=='/')
        {
            final_numerator=numerator_1*denominator_2;
            denominator_cache=denominator_1*numerator_2;
            printf("\n The product fraction is : %d/%d", final_numerator/get_hcf(final_numerator,denominator_cache),denominator_cache/get_hcf(final_numerator,denominator_cache));
        }

    return null;

}

signed get_lcm(signed number_1 , signed number_2)
{
    static signed maximum = unity;
    if(maximum%number_1==0&&maximum%2==0)
        {
            return maximum;
        }
    else
        {
            maximum++;
            get_lcm(number_1,number_2);
            return maximum;
        }
}

signed get_hcf(signed number_3 , signed number_4)
{
    int resultant = unity;
    while(resultant!=0)
        {
            resultant = number_3%number_4;
            number_3=number_4;
            number_4=resultant;
        }
    return(number_3);

}