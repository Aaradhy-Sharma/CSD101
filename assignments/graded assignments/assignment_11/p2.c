#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define max_string 100 // max_string = maximum string length // // edit this according to your needs //

// function definitions //
void watermark(); // prints the watermark
void remove_words(char *source_file , char *stop_words_file); // function to remove words from a file where source file and stop words file are taken as input from the user//

// driver code//
signed main(void)
{
    char source_file[max_string], stop_words_file[max_string];
    watermark();
    printf("\n Please enter the source file name: ");
    scanf("%s", source_file);
    printf("\n Please enter the stop words file name: ");
    scanf("%s", stop_words_file);
    remove_words(source_file, stop_words_file);
    return null;
}

// function definitions //
void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t file remove words by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void remove_words(char *source_file , char *stop_words_file)
{
    FILE *fp1, *fp2;
    char ch;
    int i, j, flag;
    fp1 = fopen(source_file, "r");
    fp2 = fopen("temp.txt", "w");
    if (fp1 == null)
    {
        printf("\n The file does not exist");
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == stop_words_file[null])
        {
            flag = 1;
            for (i = 1; i < strlen(stop_words_file); i++)
            {
                if (fgetc(fp1) != stop_words_file[i])
                {
                    flag = null;
                    break;
                }
            }
            if (flag == 1)
            {
                for (j = 0; j < strlen(stop_words_file); j++)
                {
                    fputc(' ', fp2);
                }
            }
            else
            {
                fputc(ch, fp2);
            }
        }
        else
        {
            fputc(ch, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove(source_file);
    rename("temp.txt", source_file);
    printf("\n The words have been removed from the file");
}