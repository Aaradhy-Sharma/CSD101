// program 7 //
// Scrabble game score counter and spaces are illegal//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // for toupper() and isspace() functions //
#define null 0
#define unity 1
#define max_array_length 100 

// function declarations //
void scrabble_score_counter(char *string); // function to count the score of the scrabble game //
signed string_uppercase(char *string);   // function to convert the string to uppercase // // can use toupper() function from ctype.h //
void watermark(); // function to print my watermark //
signed if_space(char *string); // function to check if there is a space in the string and reject i //

// driver code //
signed main(void)
{
    watermark();
    signed return_value = null;
    char string[max_array_length];
    printf("\n Please enter the string : ");
    fgets(string, max_array_length, stdin);
    // to see if there is a space and reject it //
    return_value = if_space(string);
    if (return_value == unity)
        {
            printf("\n Illegal input since the input contains a space which is not alphabetic.");
            return null;
        }
    string_uppercase(string);
    scrabble_score_counter(string);
    return null;
}


// function definitions //

void scrabble_score_counter(char *string)
{
    signed length = strlen(string);
    signed score = null;
    for (signed index = null; index < length; index++)
        {
            switch (string[index])
                {
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'L':
                    case 'N':
                    case 'O':
                    case 'R':
                    case 'S':
                    case 'T':
                    case 'U':
                        score += unity;
                        break;
                    case 'D':
                    case 'G':
                        score += 2;
                        break;
                    case 'B':
                    case 'C':
                    case 'M':
                    case 'P':
                        score += 3;
                        break;
                    case 'F':
                    case 'H':
                    case 'V':
                    case 'W':
                    case 'Y':
                        score += 4;
                        break;
                    case 'K':
                        score += 5;
                        break;
                    case 'J':
                    case 'X':
                        score += 8;
                        break;
                    case 'Q':
                    case 'Z':
                        score += 10;
                        break;
                }
        }
    printf("\n The scrabble score of the string you entered is : %d", score);
}

signed string_uppercase(char *string)
{
    signed length = strlen(string);
    for (signed index = null; index < length; index++)
        {
            if (string[index] >= 'a' && string[index] <= 'z')
                {
                    string[index] -= 32;
                }
        }
}


void watermark()
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Scrabble score counter by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

signed if_space(char *string)
{
    signed length = strlen(string);
    for (signed index = null; index < length; index++)
        {
            if(string[index]==' ')
                {
                    return unity;
                }
                
        
        }
}