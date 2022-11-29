// we need to create a function that reads data in a file then assigns it to a struct accordingly //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define max_string 100 // max_string = maximum string length // // edit this according to your needs //
#define max_students 10 // max_students = maximum number of students in the database // // edit this according to your needs //
#define max_marks_digits 6 // max_marks_digits = maximum number of digits in the marks // // edit this according to your needs //

// structure definition //
struct student
{
    signed roll_no;
    char name[max_string];
    signed marks_in_sub1[max_marks_digits];
    signed marks_in_sub2[max_marks_digits];
    signed marks_in_sub3[max_marks_digits];
    signed marks_in_sub4[max_marks_digits];
    signed marks_in_sub5[max_marks_digits];
    signed marks_in_sub6[max_marks_digits];
    signed total;
};

// function definitions //
void watermark(); // prints the watermark
void create_database(char *filename); // function to create a database of students where filename is taken as input from the user//
void write_database(char *filename); // function to write the database of students to a file where filename is taken as input from the user//
void read_database(char *filename); // function to read the database of students from a file where filename is taken as input from the user//
void copy_file_contents_to_string(char *filename, char *string); // function to copy the contents of a file to a string where filename is taken as input from the user//
void display_database(char *filename); // function to display the database of students where database is taken as input from the user//

// driver code//
signed main(void)
{
    char filename[max_string];
    watermark();
    printf("\n Please enter the filename: ");
    scanf("%s", filename);
    create_database(filename);
    write_database(filename);
    read_database(filename);
    display_database(filename);
    return null;
}
// function definitions //
void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t student database by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

// function to copy the contents of the input file into a string //
void copy_file_contents_to_string(char *filename, char *string)
{
    // to open the file //
    FILE *fp;
    char ch;
    int i, j, flag;
    fp = fopen(filename, "r");
    // to copy the contents of the file into a string //
    i = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    fclose(fp);
}

// function to assign values of the string to the struct //
void assign_values_to_struct(char *string, struct student *s)
{
    int i, j, k, l, m, n, o, p, q, r, flag;
    char *temp = (char *)malloc(max_string * sizeof(char));
    // to assign the roll number //
    i = 0;
    while (string[i] != ',')
    {
        temp[i] = string[i];
        i++;
    }
    temp[i] = '\0';
    s->roll_no = atoi(temp);
    // to assign the name //
    j = i + 1;
    while (string[j] != ',')
    {
        temp[j - i - 1] = string[j];
        j++;
    }
    temp[j - i - 1] = '\0';
    strcpy(s->name, temp);
    // to assign the marks in subject 1 //
    k = j + 1;
    while (string[k] != ',')
    {
        temp[k - j - 1] = string[k];
        k++;
    }
    temp[k - j - 1] = '\0';
    s->marks_in_sub1 = atoi(temp);
    // to assign the marks in subject 2 //
    l = k + 1;
    while (string[l] != ',')
    {
        temp[l - k - 1] = string[l];
        l++;
    }
    temp[l - k - 1] = '\0';
    s->marks_in_sub2 = atoi(temp);
    // to assign the marks in subject 3 //
    m = l + 1;
    while (string[m] != ',')
    {
        temp[m - l - 1] = string[m];
        m++;
    }
    temp[m - l - 1] = '\0';
    s->marks_in_sub3 = atoi(temp);
    // to assign the marks in subject 4 //
    n = m + 1;
    while (string[n] != ',')
    {
        temp[n - m - 1] = string[n];
        n++;
    }
    temp[n - m - 1] = '\0';
    s->marks_in_sub4 = atoi(temp);
    // to assign the marks in subject 5 //
    o = n + 1;
    while (string[o] != ',')
    {
        temp[o - n - 1] = string[o];
        o++;
    }
    temp[o - n - 1] = '\0';
    s->marks_in_sub5 = atoi(temp);
    // to assign the marks in subject 6 //
    p = o + 1;
    while (string[p] != ',')
    {
        temp[p - o - 1] = string[p];
        p++;
    }
    temp[p - o - 1] = '\0';
    s->marks_in_sub6 = atoi(temp);
// to calculate the total marks //
    s->total = s->marks_in_sub1 + s->marks_in_sub2 + s->marks_in_sub3 + s->marks_in_sub4 + s->marks_in_sub5 + s->marks_in_sub6;
    free(temp);
}    

// function to create a database of students from the struct we assigned values to above //

void create_database(char *filename)
{
    struct student s[max_students];
    int i, j, k, l, m, n, o, p, q, r, flag;
    char *string = (char *)malloc(max_string * sizeof(char));
    // to open the file //
    FILE *fp;
    fp = fopen(filename, "w");
    // to take input from the user //
    for (i = 0; i < max_students; i++)
    {
        printf("\n Please enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("\n Please enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("\n Please enter the marks in subject 1 of student %d: ", i + 1);
        scanf("%d", &s[i].marks_in_sub1);
        printf("\n Please enter the marks in subject 2 of student %d: ", i + 1);
        scanf("%d", &s[i].marks_in_sub2);
        printf("\n Please enter the marks in subject 3 of student %d: ", i + 1);
        scanf("%d", &s[i].marks_in_sub3);
        printf("\n Please enter the marks in subject 4 of student %d: ", i + 1);
        scanf("%d", &s[i].marks_in_sub4);
        printf("\n Please enter the marks in subject 5 of student %d: ", i + 1);
        scanf("%d", &s[i].marks_in_sub5);
        printf("\n Please enter the marks in subject 6 of student %d: ", i + 1);
        scanf("%d", &s[i].marks_in_sub6);
        s[i].total = s[i].marks_in_sub1 + s[i].marks_in_sub2 + s[i].marks_in_sub3 + s[i].marks_in_sub4 + s[i].marks_in_sub5 + s[i].marks_in_sub6;
    }
    // to write the database to the file //
    for (i = 0; i < max_students; i++)
    {
        fprintf(fp, "%d,%s,%d,%d,%d,%d,%d,%d,%d\n", s[i].roll_no, s[i].name, s[i].marks_in_sub1, s[i].marks_in_sub2, s[i].marks_in_sub3, s[i].marks_in_sub4, s[i].marks_in_sub5, s[i].marks_in_sub6, s[i].total);
    }
    fclose(fp);
    free(string);
}

// function to display the database //
void display_database(char *filename)
{
    // to open the file //
    FILE *fp;
    fp = fopen(filename, "r");
    // to display the database //
    struct student s[max_students];
    int i, j, k, l, m, n, o, p, q, r, flag;
    char temp[max_string];
    for (i = 0; i < max_students; i++)
    {
        // to read the data from the file //
        fscanf  (fp, "%d,%s,%d,%d,%d,%d,%d,%d,%d", &s[i].roll_no, s[i].name, &s[i].marks_in_sub1, &s[i].marks_in_sub2, &s[i].marks_in_sub3, &s[i].marks_in_sub4, &s[i].marks_in_sub5, &s[i].marks_in_sub6, &s[i].total);
        // to display the data //
        printf("\n Roll number: %d", s[i].roll_no);
        printf("\n Name: %s", s[i].name);
        printf("\n Marks in subject 1: %d", s[i].marks_in_sub1);
        printf("\n Marks in subject 2: %d", s[i].marks_in_sub2);
        printf("\n Marks in subject 3: %d", s[i].marks_in_sub3);
        printf("\n Marks in subject 4: %d", s[i].marks_in_sub4);
        printf("\n Marks in subject 5: %d", s[i].marks_in_sub5);
        printf("\n Marks in subject 6: %d", s[i].marks_in_sub6);
        printf("\n Total: %d", s[i].total);
    }
    // to close the file //
    fclose(fp);
}



