//prototypical internet newbie biff //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0
#define maximum_message_length 80

// function declaration //
signed biff(signed *message_length, char *message);

// driver code //
signed main(void)
{
    signed message_length;
    char message[maximum_message_length];
    printf("\n Please enter the message : ");
    scanf("%s", message);
    message_length = strlen(message);
    biff(&message_length, message);
    printf("\n The message is %s", message);
    return null;

}

// function definition //
signed biff(signed *message_length, char *message)
{
    signed index;
    for (index = 0; index < *message_length; index++)
    {
        if (message[index] == 'a')
        {
            message[index] = 'b';
        }
        else if (message[index] == 'b')
        {
            message[index] = 'c';
        }
        else if (message[index] == 'c')
        {
            message[index] = 'd';
        }
        else if (message[index] == 'd')
        {
            message[index] = 'e';
        }
        else if (message[index] == 'e')
        {
            message[index] = 'f';
        }
        else if (message[index] == 'f')
        {
            message[index] = 'g';
        }
        else if (message[index] == 'g')
        {
            message[index] = 'h';
        }
        else if (message[index] == 'h')
        {
            message[index] = 'i';
        }
        else if (message[index] == 'i')
        {
            message[index] = 'j';
        }
        else if (message[index] == 'j')
        {
            message[index] = 'k';
        }
        else if (message[index] == 'k')
        {
            message[index] = 'l';
        }
        else if (message[index] == 'l')
        {
            message[index] = 'm';
        }
        else if (message[index] == 'm')
        {
            message[index] = 'n';
        }
        else if (message[index] == 'n')
        {
            message[index] = 'o';
        }
        else if (message[index] == 'o')
        {
            message[index] = 'p';
        }
        else if (message[index] == 'p')
        {
            message[index] = 'q';
        }
        else if (message[index] == 'q')
        {
            message[index] = 'r';
        }
        else if (message[index] == 'r')
        {
            message[index] = 's';
        }
        else if (message[index] == 's')
        {
            message[index] = 't';
        }
        else if (message[index] == 't')
        {
            message[index] = 'u';
        }
        else if (message[index] == 'u')
        {
            message[index] = 'v';
        }
        else if (message[index] == 'v')
        {
            message[index] = 'w';
        }
        else if (message[index] == 'w')
        {
            message[index] = 'x';
        }
        else if (message[index] == 'x')
        {
            message[index] = 'y';
        }
        else if (message[index] == 'y')
        {
            message[index] = 'z';
        }
        else if (message[index] == 'z')
        {
            message[index] = 'a';
        }
    }
}