#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define null 0

signed main()
{
    printf("Please press enter to continue...");
    char ch = getchar();

    char FirstName[] = {"Aaradhy"};
    char LastName[] = {"Sharma"};
    printf("\n%s\t%s\n",FirstName,LastName);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\n\t%s\t\n",FirstName);
    printf("\n first name length :  %d", strlen(FirstName));
    printf("\n first name bytes : %d", sizeof(FirstName));

    printf("\n");


    printf("\n\t%s\t\n",LastName);
    printf("\n last name length : %d", strlen(LastName));
    printf("\n last name bytes : %d", sizeof(LastName));

// no //
    char FirstNameCopy[] = {};
    strcpy(FirstNameCopy,FirstName);
    char FullName[(strlen(FirstName)+strlen(LastName)+1)];
    char FullNameCopy[] = {};
    strcpy(FullName,FirstName);
    strcat(FullName,LastName);
    printf("\n\t\t\t\n\n %s", FullName);
    printf("\n full name length :  %d\n", strlen(FullName));
    printf("\n full name bytes : %d\n", sizeof(FullName));
    strcpy(FullNameCopy,FullName);
    printf("\n\n\n FullNameCopy == FullName : ", strcmp(FullNameCopy,FullName));
    printf("\nFirstName==FirstNameCopy : %d", strcmp(FirstName,FirstNameCopy));
    printf("\nFullName not = FirstName : %d", strcmp(FullName,FirstName));
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n Please enter 1 for using gets() or enter any other character for the other method.\n");
    char UserDefinedChoiceOfModeOfExecution;
    scanf("%c", &UserDefinedChoiceOfModeOfExecution);
    printf("Please enter your full name : ");
    if(UserDefinedChoiceOfModeOfExecution==1)
        {
            char string_1[20] = {},string_2[20] = {};
            scanf("%s %s", &string_1,&string_2);
            printf("\n\n Your name is : %s  %s \n", string_1 , string_2);
            printf("Your name length : %d \n", (strlen(string_1)+strlen(string_2+1)));
            char FullNameUser[20] = {}, FullNameUser2[20] = {};
            strcpy(FullNameUser,string_1);
            strcat(FullNameUser,string_2);
            strcpy(FullNameUser2,FullNameUser);
            printf("welcome %s !\n\n",FullNameUser);
            printf("Your name size : %d \n", sizeof(FullNameUser2));

        }
    else
        {
            char string_3[20];
            gets(string_3);
            printf("\n Your name is : %s \n ", string_3);
            printf("Your name length is : %d \n", strlen(string_3));
            printf("Your name size is : %d \n " , sizeof(string_3));


        }

    printf("\n Please enter your full name : \n");
    char string_4[20] = {};
    gets(string_4);
    printf("\n Your name is : %s \n", string_4);
    printf("Your name length is : %d \n ", strlen(string_4));
    printf("Your name size is : %d \n", sizeof(string_4));
    printf("h is a letter : %d \n", isalpha('h'));
    printf("h is a number : %d \n", isdigit('h'));
    printf("h is a alphabet or a digit : %d \n", isalnum('h'));
    printf("1 is a letter : %d \n", isalpha('1'));
    printf("1 is a number : %d \n", isdigit('1'));
    printf("1 is a alphabet or a digit : %d \n", isalnum('1'));
    printf("H is a uppercase alphabet : %d \n" , isupper('H'));
    printf("H is a uppercase alphabet : %d \n", islower('H'));
    printf("H is a space : %d \n", isspace('H'));
    printf("  is a space : % d \n", isspace(' '));









    return null;
}
