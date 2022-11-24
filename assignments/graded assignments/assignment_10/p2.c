// simple c program containing a segment of student dbms //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <time.h>
#define null 0
#define SPD 10 // SPD = students per department //
#define max_string 100 // max_string = maximum string length //

// structure declaration //
struct student
{
    signed roll_number;
    char name[max_string];
    char department[max_string]; // Civil , Mechanical , Economics & Maths //
    signed year; // years: 2015,2016,2017&2018 //
};

// function declarations //
void watermark(); // function to print watermarks //
void printer_specific_year(struct student s[16*SPD], signed year); //function to display all students from a specific year //
void printer_roll_number(struct student s[16*SPD], signed roll_number); // function to display student via roll number //

// driver code //
signed main(void)
{
    srand(time(null));
    // filling data in the structure //
    char department[4][max_string] = {"Civil", "Mechanical", "Economics", "Maths"};
    signed year[4] = {2015, 2016, 2017, 2018};
    char name[SPD][max_string] = {"John", "Smith", "David", "Miller", "Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson"};

    struct student s[16*SPD];
    for(signed i=null,j=null;i<4;i++)
    {
        for(signed k=null;k<4;k++)
        {
            for(signed l=null;l<SPD;l++)
            {
                s[j].roll_number = (i*1000)+(k*100)+l;
                strcpy(s[j].name,name[l]);
                strcpy(s[j].department,department[i]);
                s[j].year = year[k];
                j++;
            }
        }
    }
    // printing data //
    watermark();
    signed year_choice;
    printf("\n Enter the year to display the students: ");
    scanf("%d", &year_choice);
    printer_specific_year(s,year_choice);
    signed roll_number_choice;
    printf("\n Enter the roll number to display the student: ");
    scanf("%d", &roll_number_choice);
    printer_roll_number(s,roll_number_choice);
    return null;
}

// function definitions //

void printer_roll_number(struct student s[16*SPD], signed roll_number)
{
    for(signed i=null;i<16*SPD;i++)
    {
        if(s[i].roll_number == roll_number)
        {
            printf("\n %d \t %s \t %s \t %d", s[i].roll_number, s[i].name, s[i].department, s[i].year);
            return;
        }
    }
    printf("\n No student found with the given roll number.");
}

void printer_specific_year(struct student s[16*SPD], signed year)
{
    printf("\n Roll Number \t Name \t Department \t Year");
    for(signed i=null;i<16*SPD;i++)
    {
        if(s[i].year == year)
        {
            printf("\n %d \t %s \t %s \t %d", s[i].roll_number, s[i].name, s[i].department, s[i].year);
        }
    }
}

void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Student databse by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}


