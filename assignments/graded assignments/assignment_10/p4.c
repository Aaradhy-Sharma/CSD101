// strcuture to specify bank account information randomly generated by rand() //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define null 0
#define maximum_count 15 // maximum number of records according to the question change this if you want to //
#define capital_cap 300 // keep this low for function to gen some records with balance under 100 //

// structure declaration //

struct bank_account
{
    char name[100];
    signed account_number;
    signed balance;
};

// function declaration //

void watermark(); // function to print watermarks //
void display(struct bank_account *b); // function to display all the records //
void print_sorted_records(struct bank_account *b); // function to print the sorted records //
void records_balance_below_100(struct bank_account *b); // function to print the records with balance below 100 //
void withdraw(struct bank_account *b); // function to withdraw money from the account //
void random_name_generator(char *name); // function to generate n number of random names //

// driver code //

signed main(void)
{
    struct bank_account *b;
    b = (struct bank_account *)malloc(maximum_count * sizeof(struct bank_account));
    for (signed i = null; i < maximum_count; i++)
    {
        random_name_generator(b[i].name);
        b[i].account_number = rand() % 100000;
        b[i].balance = rand() % capital_cap;
    }


    // function calls //

    watermark();
    printf("\n Do you want to display the records? (y/n): \n");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y')
    {
        display(b);
    }

    printf("\n Do you want to print the sorted records? (y/n): \n");
    char choice1;
    scanf(" %c", &choice1);
    if (choice1 == 'y')
    {
        print_sorted_records(b);
    }
    
    records_balance_below_100(b);
    withdraw(b);

    printf("\n Do you want to withdraw money from your account? (y/n): ");
    char choice2;
    scanf(" %c", &choice2);

    return null;
}

// function to print watermarks //

void watermark()
{
    printf("\n\t\t ---------------------------------------------------"); // watermark //
    printf("\n\t\t\t Account information  by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\n");
}

void print_sorted_records(struct bank_account *b)
{
    struct bank_account temp;
    for (signed i = null; i < maximum_count; i++)
    {
        for (signed j = null; j < maximum_count - i - 1; j++)
        {
            if (b[j].balance > b[j + 1].balance)
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    printf("\n The sorted records are: \n");
    for (signed i = null; i < maximum_count; i++)
    {
        printf("\n %s %d %d \n", b[i].name, b[i].account_number, b[i].balance);
    }
}

void display(struct bank_account *b) // to display the records //
{
    printf("\n The records are: \n");
    for (signed i = 0; i < maximum_count; i++)
    {
        printf("\n %s %d %d", b[i].name, b[i].account_number, b[i].balance);
    }
    printf("\n");
}

void records_balance_below_100(struct bank_account *b)
{
    printf("\n The records with balance below 100 are: \n");
    for (signed i = null; i < maximum_count; i++)
    {
        if (b[i].balance < 100)
        {
            printf("\n %s %d %d \n", b[i].name, b[i].account_number, b[i].balance);
        }
    }
}

void withdraw(struct bank_account *b)
{
    printf("\n Enter your account number: ");
    signed account_number;
    scanf("%d", &account_number);
    for (signed i = null; i < maximum_count; i++)
    {
        if (b[i].account_number == account_number)
        {
            printf("\n Enter the amount you want to withdraw: ");
            signed amount;
            scanf("%d", &amount);
            if (amount > b[i].balance)
            {
                printf("\n The balance is insufficient for the specified withdrawal \n");
            }
            else
            {
                b[i].balance -= amount;
                printf("\n Your bank balance is: %d \n", b[i].balance);
            }
        }
    }
}

void random_name_generator(char *name)
{
    signed length = rand() % 10 + 1;
    for (signed i = null; i < length; i++)
    {
        name[i] = rand() % 26 + 97;
    }
    name[length] = '\0';
}





