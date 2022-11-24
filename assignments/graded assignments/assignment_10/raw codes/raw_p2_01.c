// simple c program to access a segment of a student dbms //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <time.h>
#define null 0
#define max_string_length 100 // Maximum string length // // you can edit this according to your requirements //
#define SPD 10 // SPD = students per department // // you can edit this accordingly //


// structure declaration //
struct student
{
    signed roll_number;
    char name[max_string_length];
    char department[max_string_length]; // Civil , Mechanical , Economics & Maths //
    signed year; // years: 2015,2016,2017&2018 //
    // each department has ten enrollments yearwise //
};

// function declarations //
void watermark(); // function to print watermarks //
void random_name_generator(char *name); // function to generate random names along with surnames using srand() //
void struct_fill(struct student *s); // function to fill struct //
void random_roll_number_generator(signed *roll_number); // function to generate random roll numbers //
void roll_number_search(struct student *s, signed roll_number); // function to search student via roll number //
void student_printer(struct student *s, signed year); // function to print student details for a specific year //
void struct_fill_array(struct student *s); // function to fill struct in multidimensional array //
void student_generator(struct student *s); // function to generate student details //
void random_department_generator(char *department); // function to generate random department //
void random_year_generator(signed *year); // function to generate random year //

// driver code //
void main()
{
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    int year, roll_number;
    char choice;
    watermark();
    student_generator(s);
    printf("\n\n Enter the year of the student you want to search: ");
    scanf("%d", &year);
    printf("\n\n Enter the roll number of the student you want to search: ");
    scanf("%d", &roll_number);
    printf("\n\n Enter the choice of the student you want to search: ");
    scanf("%c", &choice);
    switch (choice)
    {
    loc0:
    case '1':
        student_printer(s, year);
        break;
    case '2':
        roll_number_search(s, roll_number);
        break;
    default:
        printf("\n\n Invalid choice");
        goto loc0;
        break;
    }
}

// function definitions //


void random_name_generator(char *name)
{
    // function to generate random names along with surnames using srand() //
    char *names[] = {"Aarav", "Aarush", "Aaryan", "Aayan", "Aayush", "Abdul", "Abdullah", "Abhishek", "Abid", "Abir"};
    char *surnames[] = {"Khan", "Ahmed", "Ali", "Rana", "Sharma", "Khatri", "Chuhan", "Kumar", "Kumari", "Jain"};
    signed random_number = null;
    signed random_number_2 = null;
    srand(time(null));
    random_number = rand() % 10;
    random_number_2 = rand() % 10;
    strcpy(name, names[random_number]);
    strcat(name, " ");
    strcat(name, surnames[random_number_2]);
}

void random_roll_number_generator(signed *roll_number)
{
    // function to generate random roll numbers //
    srand(time(null));
    *roll_number = rand() % 1000;
}

void struct_fill(struct student *s)
{
    // function to fill struct //
    printf("\n\n Civil 2015");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Civil");
        s->year = 2015;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }
    printf("\n\n Civil 2016");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Civil");
        s->year = 2016;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }
    printf("\n\n Civil 2017");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Civil");
        s->year = 2017;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }
    printf("\n\n Civil 2018");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Civil");
        s->year = 2018;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }
    printf("\n\n Mechanical 2015");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Mechanical");
        s->year = 2015;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }
    printf("\n\n Mechanical 2016");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Mechanical");
        s->year = 2016;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Mechanical 2017");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Mechanical");
        s->year = 2017;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Mechanical 2018");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Mechanical");
        s->year = 2018;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Economics 2015");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Economics");
        s->year = 2015;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Economics 2016");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Economics");
        s->year = 2016;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Economics 2017");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Economics");
        s->year = 2017;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Economics 2018");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Economics");
        s->year = 2018;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Maths 2015");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Maths");
        s->year = 2015;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Maths 2016");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Maths");
        s->year = 2016;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Maths 2017");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Maths");
        s->year = 2017;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

    printf("\n\n Maths 2018");
    for (signed i = null; i < SPD; i++)
    {
        random_roll_number_generator(&s->roll_number);
        random_name_generator(s->name);
        strcpy(s->department,"Maths");
        s->year = 2018;
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }

}

void print_student_details(struct student *s)
{
    printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
}

void roll_number_search(struct student *s, int roll_number)
{
    if (s->roll_number == roll_number)
    {
        print_student_details(s);
    }
}

void student_printer(struct student *s, int year)
{
    if (s->year == year)
    {
        print_student_details(s);
    }
}

void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Student databse by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void student_generator(struct student *s)
{
    random_roll_number_generator(&s->roll_number);
    random_name_generator(s->name);
    random_department_generator(s->department);
    random_year_generator(&s->year);
}

void random_department_generator(char *department)

{
    int random_number = rand() % 4;
    switch (random_number)
    {
        case 0:
            strcpy(department,"Civil");
            break;
        case 1:
            strcpy(department,"Mechanical");
            break;
        case 2:
            strcpy(department,"Economics");
            break;
        case 3:
            strcpy(department,"Maths");
            break;
    }
}

void random_year_generator(int *year)
{
    int random_number = rand() % 4;
    switch (random_number)
    {
        case 0:
            *year = 2015;
            break;
        case 1:
            *year = 2016;
            break;
        case 2:
            *year = 2017;
            break;
        case 3:
            *year = 2018;
            break;
    }
}


