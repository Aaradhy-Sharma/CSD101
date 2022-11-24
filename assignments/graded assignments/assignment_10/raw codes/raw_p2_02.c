// simple c program to access database created by us using structs and pointers //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0

// structure declaration //
struct student
{
    char name[100];
    signed roll_number;
    char department;
    signed year;
};

// function declaration //
void watermarks(); // function to print watermarks //
void menu(); // function to display menu //
void add_student(struct student *s); // function to add student //
void menu_student(struct student *s); // function to display menu //
void display_student(struct student *s); // function to display student //
void search_student(struct student *s); // function to search student //
void delete_student(struct student *s); // function to delete student //
void modify_student(struct student *s); // function to modify student //
void printer_specific_year(struct student *s); // function to print the students of a specific year //
void fetch_student_via_roll_number(struct student *s); // function to fetch student via roll number //
void loop_until_exit(struct student *s); // function to loop until exit //

// driver code //
signed main(void)
{
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    loop_until_exit(s);
    return null;
}


// function definition //
void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Student databse by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void add_student(struct student *s)
{
    printf("\n Enter the name of the student: ");
    scanf("%s", s->name);
    printf("\n Enter the roll number of the student: ");
    scanf("%d", &s->roll_number);
    printf("\n Enter the department of the student: ");
    scanf(" %c", &s->department);
    printf("\n Enter the year of the student: ");
    scanf("%d", &s->year);
}

void display_student(struct student *s)
{
    printf("\n The name of the student is: %s", s->name);
    printf("\n The roll number of the student is: %d", s->roll_number);
    printf("\n The department of the student is: %d", s->department);
    printf("\n The year of joining of the student is: %d", s->year);
}

void search_student(struct student *s)
{
    printf("\n Enter the roll number of the student to be searched: ");
    scanf("%d", &s->roll_number);
    printf("\n The name of the student is: %s", s->name);
    printf("\n The roll number of the student is: %d", s->roll_number);
    printf("\n The department of the student is: %d", s->department);
    printf("\n The year of joining of the student is: %d", s->year);
}

void delete_student(struct student *s)
{
    printf("\n Enter the roll number of the student to be deleted: ");
    scanf("%d", &s->roll_number);
    if (s->roll_number == s->roll_number)
    {
        printf("\n The student has been deleted from the database. ");
    }
    else
    {
        printf("\n The student does not exist in the database. ");
    }
}

void modify_student(struct student *s)
{
    printf("\n Enter the roll number of the student to be modified: ");
    scanf("%d", &s->roll_number);
    if (s->roll_number == s->roll_number)
    {
        printf("\n Enter the name of the student: ");
        scanf("%s", s->name);
        printf("\n Enter the roll number of the student: ");
        scanf("%d", &s->roll_number);
        printf("\n Enter the department of the student: ");
        scanf("%d", s->department);
        printf("\n Enter the year of joining of the student: ");
        scanf("%d", &s->year);
    }
    else
    {
        printf("\n The student does not exist in the database. ");
    }
}

void printer_specific_year(struct student *s)
{
    printf("\n Enter the year of joining of the student to be printed: ");
    scanf("%d", &s->year);
    if (s->year == s->year)
    {
        printf("\n The name of the student is: %s", s->name);
        printf("\n The roll number of the student is: %d", s->roll_number);
        printf("\n The department of the student is: %d", s->department);
        printf("\n The year of joining of the student is: %d", s->year);
    }
    else
    {
        printf("\n The student does not exist in the database. ");
    }
}

void fetch_student_via_roll_number(struct student *s)
{
    printf("\n Enter the roll number of the student to be fetched: ");
    scanf("%d", &s->roll_number);
    if (s->roll_number == s->roll_number)
    {
        printf("\n The name of the student is: %s", s->name);
        printf("\n The roll number of the student is: %d", s->roll_number);
        printf("\n The department of the student is: %d", s->department);
        printf("\n The year of joining of the student is: %d", s->year);
    }
    else
    {
        printf("\n The student does not exist in the database. ");
    }
}

void menu_student(struct student *s)
{
    signed choice;
    printf("\n Enter 1 to add a student. ");
    printf("\n Enter 2 to display a student. ");
    printf("\n Enter 3 to search a student. ");
    printf("\n Enter 4 to delete a student. ");
    printf("\n Enter 5 to modify a student. ");
    printf("\n Enter 6 to print the students of a specific year. ");
    printf("\n Enter 7 to fetch a student via roll number. ");
    printf("\n Enter 8 to exit. ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add_student(s);
        break;
    case 2:
        display_student(s);
        break;
    case 3:
        search_student(s);
        break;
    case 4:
        delete_student(s);
        break;
    case 5:
        modify_student(s);
        break;
    case 6:
        printer_specific_year(s);
        break;
    case 7:
        fetch_student_via_roll_number(s);
        break;
    case 8:
        printf("\n Thank you for using the program.Terminating this program... ");
        printf("\n Program terminated. ");
        exit(0);
        break;
    default:
        printf("\n Invalid choice. ");
        break;
    }
}

void menu()
{
    struct student s;
    signed choice;
    printf("\n Enter 1 to access the student database. ");
    printf("\n Enter 2 to exit. ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        menu_student(&s);
        break;
    case 2:
        printf("\n Thank you for using the program.Terminating this program... ");
        printf("\n Program terminated. ");
        exit(null);
        break;
    default:
        printf("\n Invalid choice. ");
        break;
    }
}

void loop_until_exit(struct student *s)
{
    while (1)
    {
        menu(s);
    }
}








