#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration recursively //
signed nth_term_finder(signed n)
{
    if(n<3)
        {
            return n;
        }

//recursive function calling //

    return (nth_term_finder(n-1) + nth_term_finder(n-2) + nth_term_finder(n-3));
}

//driver code //
signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t nth term of series finder by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    signed number_of_terms,nth_term;
    printf("\n Please enter the number upto which you want to find the nth number of : ");
    scanf("%d",&number_of_terms);

    while(number_of_terms<null)
        {
            printf("\n\t Error : The term must be greater than zero.");
            printf("\n Please enter the number upto which you want to find the nth number of : ");
            scanf("%d",&number_of_terms);
        }
// calling the recursive function//
    nth_term = nth_term_finder(number_of_terms);
    printf("\n The nth term of the series is : %d", nth_term);

    return null;
}