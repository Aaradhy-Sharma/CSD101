// simple c program to create word frequenct statistics of a text file //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define max_string 100 // max_string = maximum string length // // edit this according to your needs //

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
 // to open both files //
    FILE *fp1, *fp2;
    char ch;
    int i, j, flag;
    fp1 = fopen(filename, "r");
    fp2 = fopen("temp.txt", "w");
    
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

    // to read the file contents of stop word file into a string //
    char *stop_words = (char *)malloc(max_string * sizeof(char));
    fp2 = fopen("stop_words.txt", "r");
    i = null;
    while ((ch = fgetc(fp2)) != EOF)
    {
        stop_words[i] = ch;
        i++;
    }
