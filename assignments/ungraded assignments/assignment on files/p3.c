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
    FILE *fp;
    char ch, word[max_string];
    int i, j, flag;
    fp = fopen(filename, "r");
    if (fp == null)
    {
        printf("\n The file does not exist");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ' ||
