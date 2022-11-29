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
void db_function(char *filename); // function to copy contents of file to a string, then assign them to the struct and print them after that write the struct to a file taken as input//
void assign_string_to_struct(char *string, struct student *student); // function to assign the contents of a string to a struct where string is the string we get from the function declared above and student is the struct we have declared above //
void display_struct(struct student *student); // function to display the struct we have created above //
void db_create(char *filename, struct student *student); // function to create a database of students from the struct we have created above //
void write_struct_to_file(char *filename, struct student *student); // function to write the complete databse in another file //
// driver code//
signed main(void)
{
    char filename[max_string];
    char filename2[max_string];
    struct student student;
    watermark();
    printf("\n Please enter the filename(with extension) : ");
    scanf("%s", filename);
    printf("\n Please enter the filename(with extension) where you want to store the database : ");
    scanf("%s", filename2);
    db_function(filename);
    write_struct_to_file(filename2, &student);
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

// defining the db_function //
void db_function(char *filename)
{
    char string[max_string];
    struct student student;
    FILE *file;
    file = fopen(filename, "r");
    if (file == null)
    {
        printf("\n Error opening file. Please check if the file exists and try again. ");
        exit(null);
    }
    else
    {
        fscanf(file, "%s", string);
        fclose(file);
        assign_string_to_struct(string, &student);
        display_struct(&student);
        write_struct_to_file(filename, &student);
    }   
}

// function to assign the contents of the string to the struct //
void assign_string_to_struct(char *string, struct student *student)
{
    char *token;
    token = strtok(string, ",");
    student->roll_no = atoi(token);
    token = strtok(null, ",");
    strcpy(student->name, token);
    token = strtok(null, ",");
    student->marks_in_sub1 = atoi(token);
    token = strtok(null, ",");
    student->marks_in_sub2 = atoi(token);
    token = strtok(null, ",");
    student->marks_in_sub3 = atoi(token);
    token = strtok(null, ",");
    student->marks_in_sub4 = atoi(token);
    token = strtok(null, ",");
    student->marks_in_sub5 = atoi(token);
    token = strtok(null, ",");
    student->marks_in_sub6 = atoi(token);
    student->total = student->marks_in_sub1 + student->marks_in_sub2 + student->marks_in_sub3 + student->marks_in_sub4 + student->marks_in_sub5 + student->marks_in_sub6;
}

// function to display the contents of the struct //
void display_struct(struct student *student)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t student database ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
    printf("\n Roll no. : %d", student->roll_no);
    printf("\n Name : %s", student->name);
    printf("\n Marks in subject 1 : %d", student->marks_in_sub1);
    printf("\n Marks in subject 2 : %d", student->marks_in_sub2);
    printf("\n Marks in subject 3 : %d", student->marks_in_sub3);
    printf("\n Marks in subject 4 : %d", student->marks_in_sub4);
    printf("\n Marks in subject 5 : %d", student->marks_in_sub5);
    printf("\n Marks in subject 6 : %d", student->marks_in_sub6);
    printf("\n Total : %d", student->total);
    printf("\n\n");
}

// function to write the contents of the struct to new file //
void write_struct_to_file(char *filename, struct student *student)
{
    FILE *file;
    char new_filename[max_string];
    strcpy(new_filename, filename);
    strcat(new_filename, ".txt");
    file = fopen(new_filename, "w");
    if (file == null)
    {
        printf("\n Error opening file. Please check if the file exists and try again. ");
        exit(null);
    }
    else
    {
        fprintf(file, "Roll no. : %d", student->roll_no);
        fprintf(file, "\n Name : %s", student->name);
        fprintf(file, "\n Marks in subject 1 : %d", student->marks_in_sub1);
        fprintf(file, "\n Marks in subject 2 : %d", student->marks_in_sub2);
        fprintf(file, "\n Marks in subject 3 : %d", student->marks_in_sub3);
        fprintf(file, "\n Marks in subject 4 : %d", student->marks_in_sub4);
        fprintf(file, "\n Marks in subject 5 : %d", student->marks_in_sub5);
        fprintf(file, "\n Marks in subject 6 : %d", student->marks_in_sub6);
        fprintf(file, "\n Total : %d", student->total);
        fclose(file);
    }
}

void db_create(char *filename2, struct student *student) // function to create a database of 10 students from the struct we have created above //
{
    FILE *file;
    file = fopen(filename2, "w");
    if (file == null)
    {
        printf("\n Error opening file. Please check if the file exists and try again. ");
        exit(null);
    }
    else
    {
        for (signed i = 0; i < 10; i++)
        {
            fprintf(file, "%d,%s,%d,%d,%d,%d,%d,%d,%d", student[i].roll_no, student[i].name, student[i].marks_in_sub1, student[i].marks_in_sub2, student[i].marks_in_sub3, student[i].marks_in_sub4, student[i].marks_in_sub5, student[i].marks_in_sub6, student[i].total);
            fprintf(file, "\n");
        }
        fclose(file);
    }
}
