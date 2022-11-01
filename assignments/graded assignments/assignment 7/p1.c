#include <stdio.h>
#include <stdlib.h>
#define null 0

// function declaration //
signed number_shifter(int*num1,int*num2,int*num3);

// driver code //
void main()
	{
        printf("\n\t\t ---------------------------------------------------");
        printf("\n\t\t\t number shifter function by Aaradhy Sharma ");
        printf("\n\t\t ---------------------------------------------------");
		signed number_1 ;signed number_2;signed number_3;signed user_input_choice;
		printf("\n Please enter 0 for single input choice or anything else for multiple input choice : ");
        // taking input type choice from the user //
		scanf("%d", &user_input_choice);
		if(user_input_choice==0)
			{
	
				printf("\n Please enter the first number : ");
				scanf("%d",&number_1);
				printf("\n Please enter the second number : ");
				scanf("%d",&number_2);
				printf("\n Please enter the third number : ");
				scanf("%d", &number_3);
	
			}
	
		else
			{
				printf("\n Please enter the three numbers : ");
				scanf("%d%d%d", &number_1 , &number_2 , &number_3);
			}
		
		printf("\n The values of the three numbers before the shift is : \n\t First number = %d\n\t Second Number = %d\n\t Third Number = %d", number_1,number_2,number_3);
		// calling the number shifter function //
		number_shifter(&number_1,&number_2,&number_3);

		printf("\n\n\n The values of the three numbers after the shift is : \n\t First number = %d\n\t Second Number = %d\n\t Third Number = %d", number_1,number_2,number_3);
						
	}
	
// function definition //
signed number_shifter(int*num1,int*num2,int*num3)
	{
		signed temp_variable;
		temp_variable = *num3;
		*num3=*num2;
		*num2=*num1;
		*num1=temp_variable;
	}