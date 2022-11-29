// simple c program to create word frequenct statistics of a text file //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
#define null 0
#define max_string 100 // max_string = maximum string length // // edit this according to your needs //
#define max_words 1000 // max_words = maximum number of words in the file // // edit this according to your needs //

// function definitions //
void watermark(); // prints the watermark
void word_frequency(char *filename); // function to create word frequency statistics of a file where filename is taken as input from the user//

// driver code//
signed main(void)
{
    char filename[max_string];
    watermark();
    printf("\n Please enter the filename: ");
    scanf("%s", filename);
    word_frequency(filename);
    return null;
}

// function definitions //
void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t file word frequency by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void word_frequency(char *filename)
{
  
    // to open the file //
    FILE *fp1;
    char ch, word[max_string], words[max_words][max_string];
    int i, j, flag, count[max_words];
    fp1 = fopen(filename, "r");
    if (fp1 == null)
    {
        printf("\n Error opening file. Please check the filename and try again. ");
        exit(1);
    }
    // to read the file contents into a string //
    char *string = (char *)malloc(max_string * sizeof(char));
    i = null;
    while ((ch = fgetc(fp1)) != EOF)
    {
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    fclose(fp1);

    // to print the file contents //
    printf("\n The file contents are: ");
    printf("\n %s", string);

    // to count occurences of all words in the file //
    i = null;
    j = null;
    flag = null;

    while (string[i] != '\0')
    {
        if (string[i] == ' ' || string[i] == ',' || string[i] == '.' || string[i] == '!' || string[i] == '?' || string[i] == ';')
        {
            word[j] = '\0';
            flag = null;
            for (int k = null; k < i; k++)
            {
                if (strcmp(word, words[k]) == null)
                {
                    flag = 1;
                    count[k]++;
                    break;
                }
            }
            if (flag == null)
            {
                strcpy(words[j], word);
                count[j] = 1;
                j++;
            }
            j = null;
        }
        else
        {
            word[j] = string[i];
            j++;
        }
        i++;
    }

    // to print the word frequency statistics //

    printf("\n The word frequency statistics are: ");
    printf("\n Word \t\t Frequency ");
    for (int k = null; k < j; k++)
    {
        printf("\n %s \t\t %d", words[k], count[k]);
    }
    printf("\n\n");
}

   