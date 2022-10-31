#include <stdio.h>
#include <stdlib.h>
#define null 0
#define unity 1

int main()

{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Custom Order Matrix Generator by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    int matrix_rows, matrix_columns, i = null , j = null;       // declaring the variables that we will make use of in our program //
    char single_input_choice;


    printf("\n To create a matrix of your desired order follow the instructions below : \n");

    printf("\n Please enter 0 for  multiple input method or enter any other character for single input mode :  ");      // if-else loop to determine if the user wants a single input or multi input mode //
    scanf("%c", &single_input_choice);

    if(!(single_input_choice=='0'))
        {
            printf("\n Enter number of rows of the matrix : ");
            scanf("%d", &matrix_rows);
            printf("\n Enter number of columns of the matrix : ");
            scanf("%d", &matrix_columns);
        }

    else
        {
            printf("\n Please enter the number of rows followed by the number of columns required in the matrix : "); // taking the order of the required matrix as input from the user //
            scanf("%d%d", &matrix_rows, &matrix_columns);
        }



    int array[matrix_rows][matrix_columns];
    while(i<matrix_rows)
    {
        while(j<matrix_columns)
        {
            printf("Enter elements of the matrix of the order %d x %d and element position being %d,%d: ",matrix_rows,matrix_columns,i,j);
            scanf("%d", &array[i][j]);      // while loop to take the elements of the matrix as input from the user //
            j++;
        }
        j=0;
        i++;
    }
    i=0;
    j=0;

    printf("The required matrix is : \n");      // printing the required matrix //
    while(i<matrix_rows)
    {
        printf("(");
        while(j<matrix_columns)
        {
            printf(" %d ", array[i][j]);
            j++;
        }
        printf(")\n");
        j=0;
        i++;
    }

    return 0;
}
