// simple c program to read records of cricketers and arrange them in ascending order of their average runs scored //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0
#define record_length 2 // length of the record according to problem statement //

// structure declaration //
struct cricketer
{
    char name[100];
    signed age;
    signed test_matches_played;
    signed runs_scored;
    signed average_runs;
    signed wickets_taken;
    signed average_wickets;
};

// function declaration //
void watermarks(); // function to print watermarks //
void menu(); // function to display menu //
void menu_cricketer(struct cricketer *c); // function to display menu //
void add_cricketer(struct cricketer *c); // function to add cricketer //
void display_cricketer(struct cricketer *c); // function to display cricketer //
void search_cricketer(struct cricketer *c); // function to search cricketer //
void delete_cricketer(struct cricketer *c); // function to delete cricketer //
void modify_cricketer(struct cricketer *c); // function to modify cricketer //
void loop_until_exit(struct cricketer *c); // function to loop until exit //
void runs_scored_by_cricketer(struct cricketer *c); // function to calculate runs scored by cricketer //
void runs_storer_in_array(struct cricketer *c); // function to store runs in array //
void arranger_ascending_average_runs(struct cricketer *c); // function to arrange in ascending order of average runs //
void arranger_ascending_average_runs_printer(struct cricketer *c); // function to print the crickets in ascending order of average runs //
void file_saving_menu(struct cricketer *c); // function to display file saving menu //
void file_saving(struct cricketer *c); // function to save file //
void arranger_ascending_average_runs_printer_in_file_using_fprintf(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fprintf //
void arranger_ascending_average_runs_printer_in_file_using_fwrite(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fwrite //
void file_reading_menu(struct cricketer *c); // function to display file reading menu //
void file_reading(struct cricketer *c); // function to read file //
void file_reading_using_fscanf(struct cricketer *c); // function to read file using fscanf //
void file_reading_using_fread(struct cricketer *c); // function to read file using fread //
void arranger_ascending_average_runs_printer_in_file_using_fscanf(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fscanf //
void arranger_ascending_average_runs_printer_in_file_using_fread(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fread //
void file_reading_using_fread(struct cricketer *c); // function to read file using fread //
void printer_specific_age(struct cricketer *c); // function to print the cricketers of a specific age //
void fetch_cricketer_via_name(struct cricketer *c); // function to fetch cricketer via name //
void fetcher_cricketer(struct cricketer *c); // function to fetch cricketer via name //
void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos_using_fseek_using_fgetpos(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fread using fseek using fgetpos using fseek using fgetpos using fseek using fgetpos //
void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fread using fseek using fgetpos using fseek using fgetpos //
void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fread using fseek using fgetpos //
void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek(struct cricketer *c); // function to print the crickets in ascending order of average runs in file using fread using fseek //
void printer_cricketer(struct cricketer *c); // function to print cricketer //

// driver code //
signed main(void)
{
    watermarks();
    struct cricketer *c;
    c = (struct cricketer *)malloc(sizeof(struct cricketer));
    loop_until_exit(c);
    arranger_ascending_average_runs_printer(c);
    arranger_ascending_average_runs_printer(c);

    return null;
}



// function definition //
void watermarks()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Cricketer database by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void menu()
{
    struct cricketer c;
    signed choice;
    printf("\n Enter 1 to access the cricketer database. ");
    printf("\n Enter 2 to exit. ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        menu_cricketer(&c);
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

void menu_cricketer(struct cricketer *c)
{
    signed choice;
    printf("\n Enter 1 to add a cricketer. ");
    printf("\n Enter 2 to display a cricketer. ");
    printf("\n Enter 3 to search a cricketer. ");
    printf("\n Enter 4 to delete a cricketer. ");
    printf("\n Enter 5 to modify a cricketer. ");
    printf("\n Enter 6 to exit. ");
    printf("\n Enter 7 to calculate runs scored by cricketer. ");
    printf("\n Enter 8 to store runs in array. ");
    printf("\n Enter 9 to arrange in ascending order of average runs. ");
    printf("\n Enter 10 to print the crickets in ascending order of average runs. ");
    printf("\n Enter 11 to open file saving menu. ");
    printf("\n Enter 12 to open file reading menu. ");
    printf("\n Enter 13 to print the cricketers of a specific age. ");
    printf("\n Enter 14 to fetch cricketer via name. ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add_cricketer(c);
        break;
    case 2:
        display_cricketer(c);
        break;
    case 3:
        search_cricketer(c);
        break;
    case 4:
        delete_cricketer(c);
        break;
    case 5:
        modify_cricketer(c);
        break;
    case 6:
        printf("\n Thank you for using the program.Terminating this program... ");
        printf("\n Program terminated. ");
        exit(null);
        break;
    case 7:
        runs_scored_by_cricketer(c);
        break;
    case 8:
        runs_storer_in_array(c);
        break;
    case 9:
        arranger_ascending_average_runs(c);
        break;
    case 10:
        arranger_ascending_average_runs(c);
        arranger_ascending_average_runs_printer(c);
        break;
    case 11:
        file_saving_menu(c);
        break;
    case 12:
        file_reading_menu(c);
        break;
    case 13:
        printer_specific_age(c);
        break;
    case 14:
        fetch_cricketer_via_name(c);
        break;
    default:
        printf("\n Invalid choice. ");
        break;
    }
}

void add_cricketer(struct cricketer *c)
{
    printf("\n Enter the name of the cricketer: ");
    scanf("%s", c->name);
    printf("\n Enter the age of the cricketer: ");
    scanf("%d", &c->age);
    printf("\n Enter the number of test matches played by the cricketer: ");
    scanf("%d", &c->test_matches_played);
    printf("\n Enter the number of runs scored by the cricketer: ");
    scanf("%d", &c->runs_scored);
    printf("\n Enter the number of wickets taken by the cricketer: ");
    scanf("%d", &c->wickets_taken);
    c->average_runs = c->runs_scored / c->test_matches_played;
    printf("\n Cricketer added successfully.\n ");
    menu_cricketer(c);
}

void display_cricketer(struct cricketer *c)
{
    printf("\n Name of the cricketer: %s", c->name);
    printf("\n Age of the cricketer: %d", c->age);
    printf("\n Number of test matches played by the cricketer: %d", c->test_matches_played);
    printf("\n Number of runs scored by the cricketer: %d", c->runs_scored);
    printf("\n Average runs scored by the cricketer: %d", c->average_runs);
    menu_cricketer(c);
}

void search_cricketer(struct cricketer *c)
{
    char name[100];
    printf("\n Enter the name of the cricketer to be searched: ");
    scanf("%s", name);
    if (strcmp(name, c->name) == 0)
    {
        printf("\n Cricketer found. ");
        display_cricketer(c);
    }
    else
    {
        printf("\n Cricketer not found. ");
        menu_cricketer(c);
    }
}

void delete_cricketer(struct cricketer *c)
{
    char name[100];
    printf("\n Enter the name of the cricketer to be deleted: ");
    scanf("%s", name);
    if (strcmp(name, c->name) == 0)
    {
        printf("\n Cricketer found. ");
        printf("\n Cricketer deleted successfully. ");
        menu_cricketer(c);
    }
    else
    {
        printf("\n Cricketer not found. ");
        menu_cricketer(c);
    }
}

void modify_cricketer(struct cricketer *c)
{
    char name[100];
    printf("\n Enter the name of the cricketer to be modified: ");
    scanf("%s", name);
    if (strcmp(name, c->name) == 0)
    {
        printf("\n Cricketer found. ");
        printf("\n Enter the name of the cricketer: ");
        scanf("%s", c->name);
        printf("\n Enter the age of the cricketer: ");
        scanf("%d", &c->age);
        printf("\n Enter the number of test matches played by the cricketer: ");
        scanf("%d", &c->test_matches_played);
        printf("\n Enter the number of runs scored by the cricketer: ");
        scanf("%d", &c->runs_scored);
        c->average_runs = c->runs_scored / c->test_matches_played;
        printf("\n Cricketer modified successfully. ");
        menu_cricketer(c);
    }
    else
    {
        printf("\n Cricketer not found. ");
        menu_cricketer(c);
    }
}

void loop_until_exit(struct cricketer *c)
{
    signed choice;
    printf("\n Enter 1 to continue. ");
    printf("\n Enter 2 to exit. ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        menu();
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

void runs_scored_by_cricketer(struct cricketer *c)
{
    printf("\n Enter the number of runs scored by the cricketer: ");
    scanf("%d", &c->runs_scored);
    c->average_runs = c->runs_scored / c->test_matches_played;
    printf("\n Average runs scored by the cricketer: %d", c->average_runs);
    menu_cricketer(c);
}

void runs_storer_in_array(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Enter the number of runs scored by the cricketer: ");
        scanf("%d", &c[i].runs_scored);
        c[i].average_runs = c[i].runs_scored / c[i].test_matches_played;
    }
    menu_cricketer(c);
}

void runs_displayed_from_array(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Average runs scored by the cricketer: %d", c[i].average_runs);
    }
    menu_cricketer(c);
}

void runs_searched_in_array(struct cricketer *c)
{
    signed i, runs;
    printf("\n Enter the number of runs to be searched: ");
    scanf("%d", &runs);
    for (i = 0; i < record_length; i++)
    {
        if (c[i].runs_scored == runs)
        {
            printf("\n Cricketer found. ");
            display_cricketer(&c[i]);
        }
        else
        {
            printf("\n Cricketer not found. ");
            menu_cricketer(c);
        }
    }
}

void runs_deleted_from_array(struct cricketer *c)
{
    signed i, runs;
    printf("\n Enter the number of runs to be deleted: ");
    scanf("%d", &runs);
    for (i = 0; i < record_length; i++)
    {
        if (c[i].runs_scored == runs)
        {
            printf("\n Cricketer found. ");
            printf("\n Cricketer deleted successfully. ");
            menu_cricketer(c);
        }
        else
        {
            printf("\n Cricketer not found. ");
            menu_cricketer(c);
        }
    }
}

void runs_modified_in_array(struct cricketer *c)
{
    signed i, runs;
    printf("\n Enter the number of runs to be modified: ");
    scanf("%d", &runs);
    for (i = 0; i < record_length; i++)
    {
        if (c[i].runs_scored == runs)
        {
            printf("\n Cricketer found. ");
            printf("\n Enter the number of runs scored by the cricketer: ");
            scanf("%d", &c[i].runs_scored);
            c[i].average_runs = c[i].runs_scored / c[i].test_matches_played;
            printf("\n Cricketer modified successfully. ");
            menu_cricketer(c);
        }
        else
        {
            printf("\n Cricketer not found. ");
            menu_cricketer(c);
        }
    }
}

void runs_searched_in_array_using_binary_search(struct cricketer *c)
{
    signed i, runs, first, last, middle;
    printf("\n Enter the number of runs to be searched: ");
    scanf("%d", &runs);
    first = 0;
    last = record_length - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (c[middle].runs_scored < runs)
        {
            first = middle + 1;
        }
        else if (c[middle].runs_scored == runs)
        {
            printf("\n Cricketer found. ");
            display_cricketer(&c[middle]);
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        printf("\n Cricketer not found. ");
        menu_cricketer(c);
    }
}

void runs_searched_in_array_using_linear_search(struct cricketer *c)
{
    signed i, runs;
    printf("\n Enter the number of runs to be searched: ");
    scanf("%d", &runs);
    for (i = 0; i < record_length; i++)
    {
        if (c[i].runs_scored == runs)
        {
            printf("\n Cricketer found. ");
            display_cricketer(&c[i]);
        }
        else
        {
            printf("\n Cricketer not found. ");
            menu_cricketer(c);
        }
    }
}

void runs_searched_in_array_using_sentinel_search(struct cricketer *c)
{
    signed i, runs;
    printf("\n Enter the number of runs to be searched: ");
    scanf("%d", &runs);
    c[record_length].runs_scored = runs;
    for (i = 0; c[i].runs_scored != runs; i++)
        ;
    if (i < record_length)
    {
        printf("\n Cricketer found. ");
        display_cricketer(&c[i]);
    }
    else
    {
        printf("\n Cricketer not found. ");
        menu_cricketer(c);
    }
}

void runs_searched_in_array_using_interpolation_search(struct cricketer *c)
{
    signed i, runs, first, last, middle;
    printf("\n Enter the number of runs to be searched: ");
    scanf("%d", &runs);
    first = 0;
    last = record_length - 1;
    middle = first + ((runs - c[first].runs_scored) * (last - first)) / (c[last].runs_scored - c[first].runs_scored);
    while (first <= last)
    {
        if (c[middle].runs_scored < runs)
        {
            first = middle + 1;
        }
        else if (c[middle].runs_scored == runs)
        {
            printf("\n Cricketer found. ");
            display_cricketer(&c[middle]);
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = first + ((runs - c[first].runs_scored) * (last - first)) / (c[last].runs_scored - c[first].runs_scored);
    }
    if (first > last)
    {
        printf("\n Cricketer not found. ");
        menu_cricketer(c);
    }
}

void arranger_ascending_average_runs(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void arranger_ascending_average_runs_printer(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Cricketer %d: ", i + 1);
        display_cricketer(&c[i]);
    }
}

void arranger_ascending_average_runs_printer_in_file(struct cricketer *c)
{
    signed i;
    FILE *fp;
    fp = fopen("Cricketers.txt", "w");
    for (i = 0; i < record_length; i++)
    {
        fprintf(fp, "\n Cricketer %d: ", i + 1);
        fprintf(fp, "\n Name: %s", c[i].name);
        fprintf(fp, "\n Test matches played: %d", c[i].test_matches_played);
        fprintf(fp, "\n Runs scored: %d", c[i].runs_scored);
        fprintf(fp, "\n Average runs: %f", c[i].average_runs);
    }
    fclose(fp);
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void arranger_ascending_average_runs_printer_in_file_using_fwrite(struct cricketer *c)
{
    signed i;
    FILE *fp;
    fp = fopen("Cricketers.txt", "w");
    fwrite(c, sizeof(struct cricketer), record_length, fp);
    fclose(fp);
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread(struct cricketer *c)
{
    signed i;
    FILE *fp;
    fp = fopen("Cricketers.txt", "w");
    fwrite(c, sizeof(struct cricketer), record_length, fp);
    fclose(fp);
    fp = fopen("Cricketers.txt", "r");
    fread(c, sizeof(struct cricketer), record_length, fp);
    fclose(fp);
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek(struct cricketer *c)
{
    signed i;
    FILE *fp;
    fp = fopen("Cricketers.txt", "w");
    fwrite(c, sizeof(struct cricketer), record_length, fp);
    fclose(fp);
    fp = fopen("Cricketers.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fseek(fp, i * sizeof(struct cricketer), SEEK_SET);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
    }
    fclose(fp);
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek_using_fgetpos(struct cricketer *c)
{
    signed i;
    FILE *fp;
    fpos_t pos;
    fp = fopen("Cricketers.txt", "w");
    fwrite(c, sizeof(struct cricketer), record_length, fp);
    fclose(fp);
    fp = fopen("Cricketers.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
    }
    fclose(fp);
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos(struct cricketer *c)
{
    signed i;
    FILE *fp;
    fpos_t pos;
    fp = fopen("Cricketers.txt", "w");
    fwrite(c, sizeof(struct cricketer), record_length, fp);
    fclose(fp);
    fp = fopen("Cricketers.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos_using_fseek_using_fgetpos(struct cricketer *c)
{
    signed i;
    FILE *fp;
    fpos_t pos;
    fp = fopen("Cricketers.txt", "w");
    fwrite(c, sizeof(struct cricketer), record_length, fp);
    fclose(fp);
    fp = fopen("Cricketers.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
        fgetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
        fsetpos(fp, &pos);
    }
    fclose(fp);
    printf("\n Cricketers arranged in ascending order of average runs. ");
    menu_cricketer(c);
}

void file_saving_menu(struct cricketer *c)
{
    signed choice;
    printf("\n 1. Save the file using fprintf. ");
    printf("\n 2. Save the file using fwrite. ");
    printf("\n 3. Save the file using fwrite and fread. ");
    printf("\n 4. Save the file using fwrite and fread and fseek. ");
    printf("\n 5. Save the file using fwrite and fread and fseek and fgetpos. ");
    printf("\n 6. Save the file using fwrite and fread and fseek and fgetpos and fseek and fgetpos. ");
    printf("\n 7. Save the file using fwrite and fread and fseek and fgetpos and fseek and fgetpos and fseek and fgetpos. ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        arranger_ascending_average_runs_printer_in_file_using_fprintf(c);
        break;
    case 2:
        arranger_ascending_average_runs_printer_in_file_using_fwrite(c);
        break;
    case 3:
        arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread(c);
        break;
    case 4:
        arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek(c);
        break;
    case 5:
        arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek_using_fgetpos(c);
        break;
    case 6:
        arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos(c);
        break;
    case 7:
        arranger_ascending_average_runs_printer_in_file_using_fwrite_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos_using_fseek_using_fgetpos(c);
        break;
    default:
        printf("\n Invalid choice. ");
        break;
    }
}

void file_reading_menu(struct cricketer *c)
{
    signed choice;
    printf("\n 1. Read the file using fscanf. ");
    printf("\n 2. Read the file using fread. ");
    printf("\n 3. Read the file using fread and fseek. ");
    printf("\n 4. Read the file using fread and fseek and fgetpos. ");
    printf("\n 5. Read the file using fread and fseek and fgetpos and fseek and fgetpos. ");
    printf("\n 6. Read the file using fread and fseek and fgetpos and fseek and fgetpos and fseek and fgetpos. ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        arranger_ascending_average_runs_printer_in_file_using_fscanf(c);
        break;
    case 2:
        arranger_ascending_average_runs_printer_in_file_using_fread(c);
        break;
    case 3:
        arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek(c);
        break;
    case 4:
        arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos(c);
        break;
    case 5:
        arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos(c);
        break;
    case 6:
        arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos_using_fseek_using_fgetpos(c);
        break;
    default:
        printf("\n Invalid choice. ");
        break;
    }
}


void fetcher_cricketer(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Enter the name of the cricketer: ");
        scanf("%s", c[i].name);
        printf("\n Enter the number of matches played by the cricketer: ");
        scanf("%d", &c[i].test_matches_played);
        printf("\n Enter the number of runs scored by the cricketer: ");
        scanf("%d", &c[i].runs_scored);
        printf("\n Enter the number of wickets taken by the cricketer: ");
        scanf("%d", &c[i].wickets_taken);
    }
}

void printer_cricketer(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Name of the cricketer: %s", c[i].name);
        printf("\n Number of matches played by the cricketer: %d", c[i].test_matches_played);
        printf("\n Number of runs scored by the cricketer: %d", c[i].runs_scored);
        printf("\n Number of wickets taken by the cricketer: %d", c[i].wickets_taken);
        printf("\n Average runs scored by the cricketer: %f", c[i].average_runs);
        printf("\n Average wickets taken by the cricketer: %f", c[i].average_wickets);
        printf("\n");
    }
}

void fetcher_cricketer_via_name(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Enter the name of the cricketer: ");
        scanf("%s", c[i].name);
    }
}

void printer_specific_age(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Name of the cricketer: %s", c[i].name);
        printf("\n Number of matches played by the cricketer: %d", c[i].test_matches_played);
        printf("\n Number of runs scored by the cricketer: %d", c[i].runs_scored);
        printf("\n Number of wickets taken by the cricketer: %d", c[i].wickets_taken);
        printf("\n Average runs scored by the cricketer: %f", c[i].average_runs);
        printf("\n Average wickets taken by the cricketer: %f", c[i].average_wickets);
        printf("\n");
    }
}

void fetch_cricketer_via_name(struct cricketer *c)
{
    signed i;
    for (i = 0; i < record_length; i++)
    {
        printf("\n Enter the name of the cricketer: ");
        scanf("%s", c[i].name);
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fprintf(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fp = fopen("cricketer.txt", "w");
    for (i = 0; i < record_length; i++)
    {
        c[i].average_runs = (float)c[i].runs_scored / c[i].test_matches_played;
        fprintf(fp, "%s %d %d %d %f %f", c[i].name, c[i].test_matches_played, c[i].runs_scored, c[i].wickets_taken, c[i].average_runs, c[i].average_wickets);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fscanf(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fscanf(fp, "%s %d %d %d %f %f", c[i].name, &c[i].test_matches_played, &c[i].runs_scored, &c[i].wickets_taken, &c[i].average_runs, &c[i].average_wickets);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fseek(fp, i * sizeof(struct cricketer), SEEK_SET);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fread(&c[i], sizeof(struct cricketer), 1, fp);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fseek(fp, i * sizeof(struct cricketer), SEEK_SET);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fgetpos(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fgetpos_using_fseek(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fgetpos_using_fseek_using_ftell(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fgetpos_using_fseek_using_ftell_using_ftell(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fgetpos_using_fseek_using_ftell_using_ftell_using_ftell(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fgetpos_using_fseek_using_ftell_using_ftell_using_ftell_using_ftell(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fgetpos_using_fseek_using_ftell_using_ftell_using_ftell_using_ftell_using_ftell(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void arranger_ascending_average_runs_printer_in_file_using_fread_using_fseek_using_fgetpos_using_fseek_using_fgetpos_using_fseek_using_fgetpos(struct cricketer *c)
{
    signed i, j;
    struct cricketer temp;
    FILE *fp;
    fpos_t pos;
    fp = fopen("cricketer.txt", "r");
    for (i = 0; i < record_length; i++)
    {
        fgetpos(fp, &pos);
        fread(&c[i], sizeof(struct cricketer), 1, fp);
        fsetpos(fp, &pos);
        fseek(fp, sizeof(struct cricketer), SEEK_CUR);
    }
    fclose(fp);
    for (i = 0; i < record_length; i++)
    {
        for (j = i + 1; j < record_length; j++)
        {
            if (c[i].average_runs > c[j].average_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}














