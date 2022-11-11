// program 5//
// dimension values are  [MxN and NxM both N,M <=3] //

#include <stdio.h> 
#include <stdlib.h> 
#include <malloc.h> // for malloc() and free() //
#define null 0

// function declarations //
void watermark(); // function to print the watermark //
signed square_matrix_maker(signed **matrix, signed dimension); // function to make a square matrix //
signed square_matrix_printer(signed **matrix, signed dimension); // function to print a square matrix //
signed matrix_multiplication(signed **matrix1, signed **matrix2, signed dimension); // function to multiply two square matrices //
signed square_matrix_printer_mx(signed **matrix, signed dimension); // function to print the multiplied square matrix //

// driver code //
signed main(void)
{
    watermark();
// dimension values are  [MxN and NxM both N,M <=3] //

    signed dimension;
    printf("\n Please enter the dimension of the square matrix : ");
    scanf("%d", &dimension);

    signed **matrix1 = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the first matrix //
    for (signed i = null; i < dimension; i++)
    {
        matrix1[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    signed **matrix2 = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the second matrix //
    for (signed i = null; i < dimension; i++)
    {
        matrix2[i] = (signed *)malloc(dimension * sizeof(signed));
    }


    printf("\n Please enter the elements of the first matrix : ");
    square_matrix_maker(matrix1, dimension); // function call to make a square matrix //
    square_matrix_printer(matrix1, dimension); // function call to print a square matrix //
    printf("\n Please enter the elements of the second matrix : ");
    square_matrix_maker(matrix2, dimension); // function call to make a square matrix //
    square_matrix_printer(matrix2, dimension); // function call to print a square matrix //
    matrix_multiplication(matrix1, matrix2, dimension); // function call to multiply two square matrices //


    free(matrix1); // freeing the memory allocated to the first matrix //
    free(matrix2); // freeing the memory allocated to the second matrix //


    return null;
}

// function definitions //

void watermark()
{
    printf("\n\t\t --------------------------------------------------------------------");
    printf("\n\t\t\t Dynamic Memory Allocator for Square Matrices by Aaradhy Sharma ");
    printf("\n\t\t --------------------------------------------------------------------");
    printf("\n\n");
}

signed square_matrix_maker(signed **matrix, signed dimension)
{
    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            printf("\n Please enter the element in position [%d][%d] of the matrix : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n\n");
}

signed square_matrix_printer(signed **matrix, signed dimension)
{
    printf("\n The matrix you entered is : \n");

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            printf("\t %d", matrix[i][j]);
        }
        printf("\n");
    }
}

signed matrix_multiplication(signed **matrix1, signed **matrix2, signed dimension)
{
    signed **matrix3 = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the third matrix //
    for (signed i = null; i < dimension; i++)
    {
        matrix3[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            matrix3[i][j] = null;
            for (signed k = null; k < dimension; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("\n The product of the two matrices is : ");
    square_matrix_printer_mx(matrix3, dimension);
    free(matrix3); // freeing the memory allocated to the third matrix //
}

signed square_matrix_printer_mx(signed **matrix, signed dimension)
{
    printf("\n");

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            printf("\t %d", matrix[i][j]);
        }
        printf("\n");
    }
}





