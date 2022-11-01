#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define null 0

int main()
{
    int user_program_choice;
    printf("\n\t Please choose the program to run :\n");
    printf("Enter 0 for name display\n");
    printf("Enter 1 for x,y locator\n");
    printf("Enter 2 for other program\n");
    scanf("%d",&user_program_choice);

    if(user_program_choice==0)
        {
            char name[20];
            printf("Please enter your name : \n ");
            scanf(" %s",&name);
            printf("Please press enter to continue... \n");
            getchar();
            printf("\n\t Welcome to Aaradhy's practice c program, %s \n",name);
    }

    else if(user_program_choice==1);
        {



            int x,user_input_choice;
            double y;

            printf("Please press enter to continue... \n");
            getchar();
            printf("Please enter 1 for single input mode or enter anything else for multiple input mode : \n");
            scanf("%d",&user_input_choice);

            if(user_input_choice==1)
            {
                    printf("\t Please enter the value of x : \n");
                    scanf("%d",&x);
                    fflush(stdin);
                    printf("\t Please enter the value of y : \n");
                    scanf("%lf", &y);
            }
            else
            {
                    printf("\t Please enter the values of x and y : \n");
                    scanf("%d%lf",&x,&y);
            }

            printf("x= %d \n",x);
            printf("The location of x is : %d\n\n", &x);
            printf("y= %lf \n", y);
            printf("The location of y is : %lf \n\n", &y);
            printf("x= %d and y= %.2lf",x,y);





    }



    if(user_program_choice==2)
    {

        printf("\t\n\r under development!");
    }

 return null;
}


