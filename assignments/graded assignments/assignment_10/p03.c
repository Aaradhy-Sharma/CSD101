// simple c program to create an array of 20 female cricketer records from struct and sort them //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0

// structure declaration //
struct cricketer
{
    char name[100];
    signed age;
    signed matches_played;
    signed avg_runs;
    ,
    
};

// function declaration //
void watermark(); // function to print watermarks //
void display(struct cricketer *c); // function to display all the records //
void print_sorted_records(struct cricketer *c); // function to print the sorted records //


// driver code //
signed main(void)
{
    struct cricketer *c;
    c = (struct cricketer *)malloc(sizeof(struct cricketer));

    // records of the players //
    strcpy(c[0].name, "Mithali Raj");
    c[0].age = 31;
    c[0].matches_played = 200;
    c[0].avg_runs = 60;

    strcpy(c[1].name, "Harmanpreet Kaur");
    c[1].age = 32;
    c[1].matches_played = 90;
    c[1].avg_runs = 50;

    strcpy(c[2].name, "Smriti Mandhana");
    c[2].age = 33;
    c[2].matches_played = 100;
    c[2].avg_runs = 40;

    strcpy(c[3].name, "Jhulan Goswami");
    c[3].age = 34;
    c[3].matches_played = 200;
    c[3].avg_runs = 30;

    strcpy(c[4].name, "Poonam Yadav");
    c[4].age = 35;
    c[4].matches_played = 100;
    c[4].avg_runs = 20;

    strcpy(c[5].name, "Shikha Pandey");
    c[5].age = 36;
    c[5].matches_played = 100;
    c[5].avg_runs = 10;

    strcpy(c[6].name, "Pooja Vastrakar");
    c[6].age = 37;
    c[6].matches_played = 100;
    c[6].avg_runs = 5;

    strcpy(c[7].name, "Deepti Sharma");
    c[7].age = 38;
    c[7].matches_played = 100;
    c[7].avg_runs = 4;


    strcpy(c[8].name, "Veda Krishnamurthy");
    c[8].age = 39;
    c[8].matches_played = 100; 
    c[8].avg_runs = 3;

    strcpy(c[9].name, "Ekta Bisht");
    c[9].age = 40;
    c[9].matches_played = 100;
    c[9].avg_runs = 2;

    strcpy(c[10].name, "Sushma Verma");
    c[10].age = 41;
    c[10].matches_played = 100;
    c[10].avg_runs = 1;

    strcpy(c[11].name, "Rajeshwari Gayakwad");
    c[11].age = 42;
    c[11].matches_played = 100;
    c[11].avg_runs = 0;

    strcpy(c[12].name, "Jemimah Rodrigues");
    c[12].age = 43;
    c[12].matches_played = 100;
    c[12].avg_runs = 0;


    strcpy(c[13].name, "Shafali Verma");
    c[13].age = 44;
    c[13].matches_played = 100;
    c[13].avg_runs = 0;

    strcpy(c[14].name, "Taniya Bhatia");
    c[14].age = 45;
    c[14].matches_played = 100;
    c[14].avg_runs = 0;

    strcpy(c[15].name, "Nuzhat Parween");
    c[15].age = 46;
    c[15].matches_played = 100;
    c[15].avg_runs = 0;

    strcpy(c[16].name, "Richa Ghosh");
    c[16].age = 47;
    c[16].matches_played = 100;
    c[16].avg_runs = 0;

    strcpy(c[17].name, "Anuja Patil");
    c[17].age = 48;
    c[17].matches_played = 100;
    c[17].avg_runs = 0;

    strcpy(c[18].name, "Sushree Dibyadarshini");
    c[18].age = 49;
    c[18].matches_played = 100;
    c[18].avg_runs = 0;

    strcpy(c[19].name, "Sushma Verma");
    c[19].age = 50;
    c[19].matches_played = 100;
    c[19].avg_runs = 0;

    // function calls //

    watermark();
    display(c);
    print_sorted_records(c);
    return null;
}

// function definitions //

void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Cricketer records by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void print_sorted_records(c)
{
    
}



