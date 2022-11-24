// simple c program to create a dataset for student database using structures //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define SPD 10 // SPD = students per department //

// structure declaration //

struct student
{
    signed roll_number;
    char name[100];
    char department[100]; // Civil , Mechanical , Economics & Maths //
    signed year; // years: 2015,2016,2017&2018 //
    // each department has ten enrollments yearwise //
};

// function declarations //

void watermark(); // function to print watermarks //
void random_name_generator(char *name); // function to generate random names along with surname //
void random_roll_number_generator(signed *roll_number); // function to generate random roll numbers //
void roll_number_student_search(struct student *s); // function to search student via roll number //
void printer_specific_year(struct student *s); //function to display all students from a specific year //
void struct_storer_in_multidimensional_array(struct student *s); // function to store struct in multidimensional array //
void struct_printer_from_multidimensional_array(struct student *s); // function to print struct from multidimensional array //

// driver code //

signed main(void)
{
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    watermark();

  // function calls //

    struct_storer_in_multidimensional_array(s);
    struct_printer_from_multidimensional_array(s);
    printer_specific_year(s);
    roll_number_student_search(s);
    return null;
}


// function definitions //

void random_roll_number_generator(signed *roll_number)
{
    *roll_number = rand() % 1000;
}

void random_name_generator(char *name)
{
    char *first_names[] = {"John", "Paul", "Geor", "Ring", "Pete", "Dave", "Mick", "Keih", "Bria", "Char"};
    char *last_names[] = {"Lenn", "MCat", "Harr", "Star", "Town", "Gilm", "Jaer", "Rich", "Jons", "Wats"};
    strcpy(name, first_names[rand() % 10]);
    strcat(name, " ");
    strcat(name, last_names[rand() % 10]);
}

void printer_specific_year(struct student *s)
{
    signed year1;
    while (year1 != s->year)
    {
        printf("\n Enter the year you want to print: ");
        scanf("%d", &year1);
        printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
    }
}

void roll_number_student_search(struct student *s)
{
    signed roll_number1;
    printf("\n Enter the roll number you want to search: ");
    scanf("%d", &roll_number1);
    printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
}

void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t student dbms segment by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}


void struct_storer_in_multidimensional_array(struct student *s)
{
    signed i, j;
    for (i = null; i < 4; i++)
    {
        for (j = null; j < SPD; j++)
        {
            random_roll_number_generator(&s->roll_number);
            random_name_generator(s->name);
            if (i == null)
            {
                strcpy(s->department, "Civil");
            }
            else if (i == 1)
            {
                strcpy(s->department, "Mechanical");
            }
            else if (i == 2)
            {
                strcpy(s->department, "Economics");
            }
            else if (i == 3)
            {
                strcpy(s->department, "Maths");
            }
            s->year = 2015 + i;
        }
    }
}

void struct_printer_from_multidimensional_array(struct student *s)
{
    signed i, j;
    for (i = null; i < 4; i++)
    {
        for (j = null; j < SPD; j++)
        {
            printf("\n %d \t %s \t %s \t %d", s->roll_number, s->name, s->department, s->year);
        }
    }
}











