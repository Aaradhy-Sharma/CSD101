#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define max_string 100 // max_string = maximum string length // // edit this according to your needs //

// function definitions //
void watermark(); // prints the watermark
void find_and_replace(char *filename, char *source, char *replacement); // function to do find and replace in a file where filename, source string and replacement strings are taken as input from the user//

// driver code//
signed main(void)
{
    char filename[max_string], source[max_string], replacement[max_string];
    watermark();
    printf("\n Please enter the filename: ");
    scanf("%s", filename);
    printf("\n Please enter the source string: ");
    scanf("%s", source);
    printf("\n Please enter the replacement string: ");
    scanf("%s", replacement);
    find_and_replace(filename, source, replacement);
    return null;
}

// function definitions //
void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t file find&replace by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void find_and_replace(char *filename, char *source, char *replacement)
{
    FILE *fp1, *fp2;
    char ch;
    int i, j, flag;
    fp1 = fopen(filename, "r");
    fp2 = fopen("temp.txt", "w");
    if (fp1 == null)
    {
        printf("\n The file does not exist");
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == source[null])
        {
            flag = 1;
            for (i = 1; i < strlen(source); i++)
            {
                if (fgetc(fp1) != source[i])
                {
                    flag = null;
                    break;
                }
            }
            if (flag == 1)
            {
                for (j = null; j < strlen(replacement); j++)
                {
                    fputc(replacement[j], fp2);
                }
            }
            else
            {
                fputc(ch, fp2);
                for (j = null; j < i - 1; j++)
                {
                    fputc(source[j + 1], fp2);
                }
            }
        }
        else
        {
            fputc(ch, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("temp.txt", filename);
    printf("\n The file has been modified successfully.");
}


