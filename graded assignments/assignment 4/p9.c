#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define null 0 


signed main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t number guesser by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    srand(time(NULL));
    int ans,guess;
    char rerun;

replay:

    ans=rand()%1000;
    printf("\n I have a number between 1 and 1000\nCan you guess my number?");
    printf("\n Please type your first guess in : ");
    scanf("%d",&guess);

    while(guess!=ans)
        {
            if(guess<ans)
                {
                    printf("Too low. Try again.\n");
                    scanf("%d",&guess);
                }
            else if(guess>ans)
            {
            printf("\n Too high. Try again.");
            scanf("%d",&guess);
            }
        }

    if(guess==ans)
        {
            printf("Excellent! You guessed the number.\n");
        }
    printf("\n Would you like to play again(y or n)? ");
    scanf(" %c",&rerun);
     if(rerun=='y')
        {
        goto replay;
        }else if(rerun=='n')
        {
        printf("Thank you for playing.");
        }
    else
        {
         printf("Invalid input. Exiting.");
        }
    return null;
}