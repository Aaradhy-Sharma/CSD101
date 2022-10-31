#include <stdio.h>
#include <stdlib.h>
#define null 0

int main()
{
    printf("\n\t\t -------------------------------------------------------------");
    printf("\n\t\t\t 3 x 3 Multiplication Program by Aaradhy Sharma ");
    printf("\n\t\t -------------------------------------------------------------");

    int matrix_a[10][10], matrix_b[10][10] , matrix_c[10][10],i,j,k,sum=0;

    // first matrix //

    printf("\n Please enter the first matrix in  : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix_a[i][j]);
        }
    }

    // second matrix //
    printf("\n Please enter the second matrix in  : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix_b[i][j]);
        }
    }


    // printing the first matrix //
    printf("\n The first matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",matrix_a[i][j]);
        }
        printf("\n");
    }


    // printing the second matrix //
    printf("\n The second matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",matrix_b[i][j]);
        }
        printf("\n");
    }

    //multiplying the two matrices//
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = 0;
            for(k=0;k<3;k++)
            {
                sum = sum+matrix_a[i][k]*matrix_b[k][j];
            }
            matrix_c[i][j]=sum;
        }
    }

    // printing the C matrix //
    printf("\n The C matrix as a result of multiplication of two 3x3 matrices is : \n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("");
            printf(" %d ",matrix_c[i][j]);
        }
        printf("\n");
    }



    return 0;
}
