#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define padding_charcter '#' // padding character - change the character within ' ' to any padding character of your choice //
#define null 0
#define max_string_length 255


// driver code //
signed main(void)
{
    signed n=null, a=null, b=null;
    char input_string[max_string_length];
    printf("\n Please enter the string to be encrypted: ");
    fgets(input_string, max_string_length, stdin);
    input_string[strlen(input_string) - 1] = '\0';

    signed input_string_length = strlen(input_string);

    printf("\n Please enter the value of the encryption key, n : ");
    scanf("%d", &n);
    printf("\n Please enter the value of the starting index, a : ");
    scanf("%d", &a);
    printf("\n Please enter the value of the ending index, b : ");
    scanf("%d", &b);

    signed cache_vector = n - (input_string_length % n);
    signed output_string_length = input_string_length + cache_vector;

    char output_string[output_string_length];
    strcpy(output_string, input_string);

    for(signed i=null; i<cache_vector; i++)
        {
        
        output_string[output_string_length + i] = padding_charcter;

        }

   signed padded_output_string_length = sizeof(output_string)/sizeof(output_string[null]);

   signed padded_reader_count = padded_output_string_length/n;
   char final_output_string[padded_output_string_length];

   signed start = null;

    for(signed j=null; j<padded_reader_count; j++)
        { 
            for(signed k=null; k<n; k++)
                {
                signed formula_trasnposition_cipher = ((a*k)+b)%n;
                final_output_string[start + k] = output_string[formula_trasnposition_cipher + start];
            }
        start = start + n;
        
        }
    
    printf("\n The encrypted string is: %s", final_output_string);
    return null;

}









