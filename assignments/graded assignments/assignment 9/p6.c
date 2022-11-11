// program 6 //
// as per question, I am using 2x2 square matrices for the ease of implementation but feel free to use any dimnensions by editing the values in the macro //
// formula : (A.B)^-1 = (B^-1).(A^-1) //
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> // for malloc() and free() //
#define null 0
#define dimension 2

// function declarations //
void watermark(); // function to print my watermark //
signed square_matrix_maker(signed **matrix, signed dimensions); // function to make a square matrix //
signed square_matrix_printer(signed **matrix, signed dimensions); // function to print a square matrix //
signed matrix_multiplication(signed **A, signed **B, signed dimensions); // function to multiply two square matrices //
signed square_matrix_printer_mx(signed **matrix, signed dimensions); // function to print the multiplied square matrix //
signed square_matrix_inverter(signed **matrix, signed dimensions); // function to invert a square matrix //
signed store_product(signed **A, signed **B, signed dimensions); // function to store the product of two square matrices //
signed memory_allocator(signed **matrix, signed dimensions); // function to allocate memory to a square matrix // // not required //
signed memory_free(signed **matrix, signed dimensions); // function to free the memory allocated to a square matrix // // not required //

// driver code //
signed main(void)
{
    watermark();


    signed **A = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the first matrix //
    for (signed i = null; i < dimension; i++)
    {
        A[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    signed **B = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the second matrix //
    for (signed i = null; i < dimension; i++)
    {
        B[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    printf("\n Please enter the elements of the first matrix : "); 
    square_matrix_maker(A, dimension); // function call to make a square matrix //
    square_matrix_printer(A, dimension); // function call to print a square matrix //
    printf("\n Please enter the elements of the second matrix : ");
    square_matrix_maker(B, dimension); // function call to make a square matrix //
    square_matrix_printer(B, dimension); // function call to print a square matrix //

    signed A_inverse[dimension][dimension];
    signed B_inverse[dimension][dimension];

    signed **A_inverse_pointer = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the inverse of the first matrix //
    for (signed i = null; i < dimension; i++)
    {
        A_inverse_pointer[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    signed **B_inverse_pointer = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the inverse of the second matrix //
    for (signed i = null; i < dimension; i++)
    {
        B_inverse_pointer[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    A_inverse_pointer = square_matrix_inverter(A, dimension); // function call to invert a square matrix //
    printf("\n The inverse of the first matrix is : ");
    square_matrix_printer(A_inverse_pointer, dimension); // function call to print a square matrix //
    B_inverse_pointer = square_matrix_inverter(B, dimension); // function call to invert a square matrix //
    printf("\n The inverse of the second matrix is : ");
    square_matrix_printer(B_inverse_pointer, dimension); // function call to print a square matrix //

    signed **product = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the product of the two matrices //
    for (signed i = null; i < dimension; i++)
    {
        product[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    product = store_product(A, B, dimension); // function call to store the product of two square matrices //
    printf("\n The product of the two matrices is : ");
    square_matrix_printer_mx(product, dimension); // function call to print the multiplied square matrix //
    signed **product_inverse = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the inverse of the product of the two matrices //
    for (signed i = null; i < dimension; i++)
    {
        product_inverse[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    product_inverse = square_matrix_inverter(product, dimension); // function call to invert a square matrix //
    printf("\n The inverse of the product of the two matrices is : ");
    square_matrix_printer(product_inverse, dimension); // function call to print a square matrix //

    signed **check = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the product of the two matrices //
    for (signed i = null; i < dimension; i++)
    {
        check[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    check = store_product(B_inverse_pointer, A_inverse_pointer, dimension); // function call to store the product of two square matrices //
    printf("\n The product of the inverse of the two matrices is : ");
    square_matrix_printer_mx(check, dimension); // function call to print the multiplied square matrix //

    // to check the validity of the formula (A.B)^-1 = (B^-1).(A^-1) //

    signed flag = null;
    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            if (check[i][j] == product_inverse[i][j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("\n The formula (A.B)^-1 = (B^-1).(A^-1) is valid. ");
    }
    else
    {
        printf("\n The formula (A.B)^-1 = (B^-1).(A^-1) is invalid. ");
    }


    // freeing the memory //
    for (signed i = null; i < dimension; i++)
    {
        free(A[i]);
    }
    free(A);

    for (signed i = null; i < dimension; i++)
    {
        free(B[i]);
    }
    free(B);

    for (signed i = null; i < dimension; i++)
    {
        free(A_inverse_pointer[i]);
    }
    free(A_inverse_pointer);

    for (signed i = null; i < dimension; i++)
    {
        free(B_inverse_pointer[i]);
    }
    free(B_inverse_pointer);

    for (signed i = null; i < dimension; i++)
    {
        free(product[i]);
    }

    free(product);

    for (signed i = null; i < dimension; i++)
    {
        free(product_inverse[i]);
    }

    free(product_inverse);

    return null;


}




// function definitions //

void watermark()
{
    printf("\n\t\t ------------------------------------------------------------------------------------------");
    printf("\n\t\t\t Dynamic Memory Allocator for Square Matrices - Formula Validator by Aaradhy Sharma ");
    printf("\n\t\t ------------------------------------------------------------------------------------------");
    printf("\n\n");
}

signed square_matrix_maker(signed **matrix, signed dimensions)
{
    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            printf("\n Enter the element at position [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return null;
}


signed square_matrix_printer(signed **matrix, signed dimensions)
{
    printf("\n The matrix is : ");
    for (signed i = null; i < dimension; i++)
    {
        printf("\n");
        for (signed j = null; j < dimension; j++)
        {
            printf("\t %d", matrix[i][j]);
        }
    }
    return null;
}


signed matrix_multiplication(signed **A, signed **B, signed dimensions)
{
    signed **C = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the multiplied matrix //
    for (signed i = null; i < dimension; i++)
    {
        C[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            C[i][j] = null;
            for (signed k = null; k < dimension; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}


signed square_matrix_printer_mx(signed **matrix, signed dimensions)
{
    printf("\n The multiplied matrix is : ");
    for (signed i = null; i < dimension; i++)
    {
        printf("\n");
        for (signed j = null; j < dimension; j++)
        {
            printf("\t %d", matrix[i][j]);
        }
    }
    return null;
}


signed square_matrix_inverter(signed **matrix, signed dimensions)
{
    signed determinant = null;
    signed **inverse = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the inverse of the matrix //
    for (signed i = null; i < dimension; i++)
    {
        inverse[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            inverse[i][j] = null;
        }
    }

    if (dimension == 2)
    {
        determinant = matrix[null][null] * matrix[1][1] - matrix[1][null] * matrix[null][1];
        inverse[null][null] = matrix[1][1];
        inverse[null][1] = -matrix[null][1];
        inverse[1][null] = -matrix[1][null];
        inverse[1][1] = matrix[null][null];
    }
    else
    {
        printf("\n The dimension of the matrix is not 2. ");
    }

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            inverse[i][j] = inverse[i][j] / determinant;
        }
    }
    return inverse;
}


signed store_product(signed **A, signed **B, signed dimensions)
{
    signed **C = (signed **)malloc(dimension * sizeof(signed *)); // allocating memory for the multiplied matrix //
    for (signed i = null; i < dimension; i++)
    {
        C[i] = (signed *)malloc(dimension * sizeof(signed));
    }

    for (signed i = null; i < dimension; i++)
    {
        for (signed j = null; j < dimension; j++)
        {
            C[i][j] = null;
            for (signed k = null; k < dimension; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}
 
signed memory_free(signed **matrix, signed dimensions)
{
    for (signed i = null; i < dimension; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return null;
}











    

