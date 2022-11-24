#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Student{
    int rolln;
    char name[15];
    char dept[15];
    int join_yr;

};

void record_printer_year(struct Student stud[160], int year_check);
void record_printer_roll(struct Student stud[160], int roll_check);

int main()
{
    srand(time(NULL));
    //Filling data in the student structs
    char depts[4][15]={"Civil","Mechanical","Economics","Maths"};
    int years[4]={2015,2016,2017,2018};
    char names[10][10]={"Parker","Devan","Corrina","Jim","Marian","Davon","Shemar","Drew","Sheila","Taniya"};
    struct Student stud[160];
    for(int i=0,j=0;i<4;i++){
        for(int k=0;k<4;k++){
            for(int l=0;l<10;l++){
                stud[j].join_yr = years[i];
                strcpy(stud[j].dept, depts[k]);
                stud[j].rolln = j;
                strcpy(stud[j].name, names[rand()%10]);
                j+=1;
            }
        }
    }
    //testing if data is filled properly
    //int test = rand()%160;
    //printf("%d %s %s %d", stud[test].join_yr, stud[test].dept, stud[test].name, stud[test].rolln);
    //for(int test=0;test<160;test++){
    //    printf("%d. %d %s %s %d\n", test+1, stud[test].join_yr, stud[test].dept, stud[test].name, stud[test].rolln);
    //}

    int year_check;
    printf("Enter year(2015/2016/2017/2018): ");
    scanf("%d", &year_check);
    record_printer_year(stud, year_check);

    int roll_check;
    printf("Enter roll no(1-160): ");
    scanf("%d", &roll_check);
    record_printer_roll(stud, roll_check);
    return 0;
}

void record_printer_year(struct Student stud[160], int year_check){
    printf("YEAR  DEPARTMENT    NAME ROLLNO\n");
    for(int i=0;i<160;i++){
        if(stud[i].join_yr==year_check){
            printf("%d |%10s|%7s|%d\n", stud[i].join_yr, stud[i].dept, stud[i].name, stud[i].rolln);
        }
    }

}

void record_printer_roll(struct Student stud[160], int roll_check){
    for(int i=0;i<160;i++){
        if(stud[i].rolln==roll_check){
            printf("Year of joining:%d\nDepartment: %s\nName: %s\n", stud[i].join_yr, stud[i].dept, stud[i].name, stud[i].rolln);
        }
    }
}