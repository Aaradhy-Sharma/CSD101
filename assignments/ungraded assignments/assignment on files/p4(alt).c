// simple c program to read contents of a file to a string then assign them to a struct that we will declare and then store the output in a file using the struct and the string we created in the beginning of the program //

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
    signed marks_in_sub1;
    signed marks_in_sub2;
    signed marks_in_sub3;
    signed marks_in_sub4;
    signed marks_in_sub5;
    signed marks_in_sub6;
    signed total;
};

// function definitions //
void watermark(); // prints the watermark
void copy_file_contents_to_string(char *filename, char *string); // function to copy the contents of a file to a string where filename is taken as input from the user//
void assign_string_to_struct(char *string, struct student *student); // function to assign the contents of a string to a struct where string is the string we get from the function declared above and student is the struct we have declared above //
void display_struct(struct student *student); // function to display the struct we have created above //
void write_struct_to_file(char *filename, struct student *student); // function to write the struct we have created above to a file where filename is taken as input from the user //

// driver code//
signed main(void)
{
    char filename[max_string];
    char string[max_string];
    struct student student;
    watermark();
    printf("\n Please enter the filename(with extension) : ");
    scanf("%s", filename);
    copy_file_contents_to_string(filename, string);
    assign_string_to_struct(string, &student);
    display_struct(&student);
    write_struct_to_file(filename, &student);
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
    fp = fopen(filename, "r");
    if (fp == null)
    {
        printf("\n Error in opening the file. ");
        exit(null);
    }
    // to copy the contents of the file into a string //
    signed i = null;
    while ((ch = fgetc(fp)) != EOF)
    {
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    fclose(fp);
}

// function to assign the contents of the string to the struct //
void assign_string_to_struct(char *string, struct student *student)
{
    signed i=null,j=null,k=null;
    char temp[max_string];
    // to assign the roll number //
    while (string[i] != ',')
    {
        temp[i] = string[i];
        i++;
    }
    temp[i] = '\0';
    student->roll_no = atoi(temp);
    i++;
    // to assign the name //
    j = i;
    while (string[i] != ',')
    {
        temp[i - j] = string[i];
        i++;
    }
    temp[i - j] = '\0';
    strcpy(student->name, temp);
    i++;
    // to assign the marks in subject 1 //
    j = i;
    while (string[i] != ',')
    {
        temp[i - j] = string[i];
        i++;
    }
    temp[i - j] = '\0';
    student->marks_in_sub1 = atoi(temp);
    i++;
    // to assign the marks in subject 2 //
    j = i;
    while (string[i] != ',')
    {
        temp[i - j] = string[i];
        i++;
    }
    temp[i - j] = '\0';
    student->marks_in_sub2 = atoi(temp);
    i++;
    // to assign the marks in subject 3 //
    j = i;
    while (string[i] != ',')
    {
        temp[i - j] = string[i];
        i++;
    }
    temp[i - j] = '\0';
    student->marks_in_sub3 = atoi(temp);
    i++;
    // to assign the marks in subject 4 //
    j = i;
    while (string[i] != ',')
    {
        temp[i - j] = string[i];
        i++;
    }
    temp[i - j] = '\0';
    student->marks_in_sub4 = atoi(temp);
    i++;
    // to assign the marks in subject 5 //
    j = i;
    while (string[i] != ',')
    {
        temp[i - j] = string[i];
        i++;
    }
    temp[i - j] = '\0';
    student->marks_in_sub5 = atoi(temp);
    i++;
    // to assign the marks in subject 6 //
    j = i;
    while (string[i] != '\0')
    {
        temp[i - j] = string[i];
        i++;
    }
    temp[i - j] = '\0';
    student->marks_in_sub6 = atoi(temp);
    i++;
    // to calculate the total marks and assign it to the struct //
    student->total = student->marks_in_sub1 + student->marks_in_sub2 + student->marks_in_sub3 + student->marks_in_sub4 + student->marks_in_sub5 + student->marks_in_sub6;

}

// function to display the struct //
void display_struct(struct student *student)
{
    printf("\n Roll number : %d", student->roll_no);
    printf("\n Name : %s", student->name);
    printf("\n Marks in subject 1 : %d", student->marks_in_sub1);
    printf("\n Marks in subject 2 : %d", student->marks_in_sub2);
    printf("\n Marks in subject 3 : %d", student->marks_in_sub3);
    printf("\n Marks in subject 4 : %d", student->marks_in_sub4);
    printf("\n Marks in subject 5 : %d", student->marks_in_sub5);
    printf("\n Marks in subject 6 : %d", student->marks_in_sub6);
    printf("\n Total marks : %d", student->total);
}

// function to write the struct to a file //
void write_struct_to_file(char *filename, struct student *student)
{
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == null)
    {
        printf("\n Error in opening the file. ");
        exit(null);
    }
    fprintf(fp, "%d,%s,%d,%d,%d,%d,%d,%d,%d", student->roll_no, student->name, student->marks_in_sub1, student->marks_in_sub2, student->marks_in_sub3, student->marks_in_sub4, student->marks_in_sub5, student->marks_in_sub6, student->total);
    fclose(fp);
}

// data will be stored in the source file in the following format //
// roll number,name,marks in subject 1,marks in subject 2,marks in subject 3,marks in subject 4,marks in subject 5,marks in subject 6 //
// for example //
// 1,Aaradhy Sharma,100,100,100,100,100,100 //
// to separate the data in the source file, we will use the comma as the delimiter //
// to separate the data for two students, we will use the newline character as the delimiter //
// for example //
// 1,Aaradhy Sharma,100,100,100,100,100,100 // newline character // 2,Ansh Sharma,100,100,100,100,100,100 //
// example of the source file with newline characters //
// 1, Aaradhy Sharma,100,100,100,100,100,100 \n 2,Ansh Sharma,100,100,100,100,100,100 //


