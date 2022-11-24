// simple c program to access segment of cricketer dbms //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <time.h>
#define null 0
#define max_string 100 // max_string = maximum string lenght // // edit this according to your need //
#define max_players 20 // maximum number of players that are allowed in the program //

// structure declaration //

struct cricketer
{
    char name[max_string];
    signed age;
    signed matches_played;
    signed avg_runs;
};

// function declarations //

void watermark(); // prints the watermark //
signed compare_avg_runs(const void *a, const void *b); // compares the avg_runs of two cricketers //
void print_cricketer(struct cricketer *player); // prints the details of a cricketer //
void print_cricketer_list(struct cricketer *player, signed n); // prints the details of n cricketers //
void print_cricketer_list_by_avg_runs(struct cricketer *player, signed n); // prints the details of n cricketers sorted by avg_runs //
void sorter_asc_avg_runs(struct cricketer *player, signed n); // sorts the cricketers by avg_runs in ascending order //
void printer_asc_avg_runs(struct cricketer *player, signed n); // prints the cricketers by avg_runs in ascending order //

// driver code //

signed main(void)
{
    watermark();
    srand(time(null));
    struct cricketer player[max_players];
    char names[max_players][20] = { "Noor","Deandra","Simone","Mona","Bryanna","Aliya","Liana","Aliah",
                            "Patience","Marion","Maren","Kaitlynn","Katelyn","Marin","Mckenzie",
                            "Keona","Brielle","Maggie","Maddie","Gloria" };// names of cricketers // // shoutout to Raj for letting me take these //
    printf("\n  Name \t     Age \t\t    Games Played \t\t       Average Runs\n");

    for (signed i = 0; i < max_players; i++)
    {
        strcpy(player[i].name, names[i]);
        player[i].age = rand() % 40 + 20;
        player[i].matches_played = rand() % 100 + 1;
        player[i].avg_runs = rand() % 100 + 1;
        print_cricketer(&player[i]);
    }


    for(signed i=null; i<max_players; i++)
    {
        printf("%8s  \t%4d \t%12d  \t%12d\n",player[i].name, player[i].age, player[i].matches_played, player[i].avg_runs);
    }

    qsort(player, max_players, sizeof(struct cricketer), compare_avg_runs);
    printf("\n sorted by avg_runs in ascending order \n");
    print_cricketer_list_by_avg_runs(player, max_players);
    return null;
}

// function definitions //



void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Student databse by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

signed compare_avg_runs(const void *a, const void *b)
{
    struct cricketer *player_a = (struct cricketer *)a;
    struct cricketer *player_b = (struct cricketer *)b;
    return player_a->avg_runs - player_b->avg_runs;
}

void print_cricketer(struct cricketer *player)
{
    printf("\n Name \t Age \t Games Played \t Average Runs\n");
    printf("%8s  \t%4d \t%12d  \t%12d\n",player->name, player->age, player->matches_played, player->avg_runs);
}

void print_cricketer_list(struct cricketer *player, signed n)
{
    printf("\n Name \t Age \t Games Played \t Average Runs\n");
    for(signed i=null; i<n; i++)
    {
        printf("%8s  \t%4d \t%12d  \t%12d\n",player[i].name, player[i].age, player[i].matches_played, player[i].avg_runs);
    }
}

void print_cricketer_list_by_avg_runs(struct cricketer *player, signed n)
{
    printf("\n Name \t Age \t Games Played \t Average Runs\n");
    for(signed i=null; i<n; i++)
    {
        printf("%8s  \t%4d \t%12d  \t%12d\n",player[i].name, player[i].age, player[i].matches_played, player[i].avg_runs);
    }
}

void sorter_asc_avg_runs(struct cricketer *player, signed n)
{
    qsort(player, n, sizeof(struct cricketer), compare_avg_runs);
}









