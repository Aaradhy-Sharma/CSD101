#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0

// function declaration //
void transposition_cipher_decrypter(char *string, signed *key);

// driver code //
signed main(void)
{
    signed n;
    printf("\n Please enter the number of characters in the string : ");
    scanf("%d", &n);
    char string[n];
    printf("\n Please enter the string : ");
    scanf("%s", string);
    signed key;
    printf("\n Please enter the key : ");
    scanf("%d", &key);

    printf("\n The decrypted string is : ");
    transposition_cipher_decrypter(string, &key);
    return null;

}

// function definition //
void transposition_cipher_decrypter(char *string, signed *key)
{
    signed length = strlen(string);
    signed rows = length / *key;
    signed columns = *key;
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

