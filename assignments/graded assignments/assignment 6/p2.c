#include <stdio.h>
#include <stdlib.h>
#define null 0 

void multiplication(int undeclared_1 , int undeclared_2 , int matrix_1[][10] , int undeclared_3 , int undeclared_4 , int matrix_2[][10] , int matrix_3[][10]);
void execution(int undeclared_5 , int undeclared_6 , int undeclared_7[][10]);

signed main()
{
    signed first_matrix[10][10] , second_matrix[10][10] , third_matrix[10][10] = {null};
    signed row_vector_1 , row_vector_2 , column_vector_1 , column_vector_2, i,j,k;

    printf("\n Please enter the rows and columns for the first matrix : ");
    scanf("%d%d", &row_vector_1, &column_vector_1);
    printf("\n The first matrix will be of the order %dx%d",row_vector_1,column_vector_1);

    printf("\n Please enter the rows and columns for the second matrix : ");
    scanf("%d%d", &row_vector_2, &column_vector_2);
    printf("\n The second matrix will be of the order %dx%d", row_vector_2 , column_vector_2);

    if(!(row_vector_1 == column_vector_2))

        {
                while(!(row_vector_1==column_vector_2))
                    {
                         printf("\n Matrix multiplication will not be possible for this order.\n Please enter the orders again : ");

                         printf("\n Please enter the rows and columns for the first matrix : ");
                         scanf("%d%d", &row_vector_1, &column_vector_1);
                         printf("\n The first matrix will be of the order %dx%d",row_vector_1,column_vector_1);

                         printf("\n Please enter the rows and columns for the second matrix : ");
                         scanf("%d%d", &row_vector_2, &column_vector_2);
                         printf("\n The second matrix will be of the order %dx%d", row_vector_2 , column_vector_2);

                     }

        }
    
    else
        {
            printf("\n Please enter the elements for the first matrix : ");
            for(i=null;i<row_vector_1;i++)
                {
                    for(j=null;j<column_vector_1;j++)
                        {
                            printf("\n For the first matrix, please enter the element of the position %dx%d : ", i,j);
                            scanf("%d",first_matrix[i][j]);
                        }
                }
            
            printf("\n Please enter the elements for the second matrix : ");
            for(i=null;i<row_vector_2;i++)
                {
                    for(j=null;j<column_vector_2;j++)
                        {
                            printf("\n For the second matrix, please enter the element of the position %dx%d : ",i,j);
                            scanf("%d",second_matrix[i][j]);
                        }
                }
            
            
            multiplication(row_vector_1,column_vector_1,first_matrix,row_vector_2,column_vector_2,second_matrix,third_matrix);
        }
    printf("\n The matrix multiplication of these two matrices would result in the following matrix : ");
    execution(row_vector_1,column_vector_2,third_matrix);


 return null;
}

void multiplication(int undec_1 , int undec_2 , int undec_matrix_1[10][10] , int undec_3 , int undec_4 , int undec_matrix_2[10][10], int undec_matrix_3[10][10])
{
    static signed i = null , j = null , k = null;

    if(i>=undec_1)
        {
            return;
        }
    
    else if(i<undec_1)
        {
            if(j<undec_4)
                {
                    if(k<undec_2)
                        {
                            undec_matrix_3[i][j] += (undec_matrix_1[i][k])*(undec_matrix_2[k][j]);
                            k++;
                            multiplication(undec_1,undec_2,undec_matrix_1,undec_3,undec_4,undec_matrix_2,undec_matrix_3);
                        }
                    k=null;
                    j++;
                    multiplication(undec_1,undec_2,undec_matrix_1,undec_3,undec_4,undec_matrix_2,undec_matrix_3);
                }
            j=null;
            i++;
            multiplication(undec_1,undec_2,undec_matrix_1,undec_3,undec_4,undec_matrix_2,undec_matrix_3);
        }
}

void execution(int undeclared_chache_variable_01 ,  int undeclared_cache_variable_02 , int undeclared_cache_matrix_01[10][10])
{
    signed i,j,undeclared_cache_variable_1 , undeclared_cache_variable_2;

    for(i=null;i<undeclared_cache_variable_1;i++)
        {
            for(j=null;j<undeclared_cache_variable_2;j++)
                {
                    printf("%d", undeclared_cache_matrix_01[i][j]);
                }
            printf("\n");
        }
}