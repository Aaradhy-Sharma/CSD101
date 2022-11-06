#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0

void transposition_cipher_decrypter(char *string, signed *key)
{
    signed length = strlen(string);
    signed rows = length / *key;
    signed columns = *key;
    signed extra = length % *key;
    signed index = 0;
    char matrix[rows][columns];
    for (signed row = 0; row < rows; row++)
        {
            for (signed column = 0; column < columns; column++)
                {
                    matrix[row][column] = string[index];
                    index++;
                }
        }
    for (signed column = 0; column < columns; column++)
        {
            for (signed row = 0; row < rows; row++)
                {
                    printf("%c", matrix[row][column]);
                }
        }
}