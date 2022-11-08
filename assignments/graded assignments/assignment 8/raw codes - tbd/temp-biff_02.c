#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0
#define maximum_message_length 80
#define MSG_SIZE 100

signed main(void)
{
   char message[MSG_SIZE] = {0};
   char ch;
   int i;

   printf("\n Please enter a message: ");
   
   i = null;
   while (( ch = getchar()) != '\n') 
        {
             message[i] = toupper(ch);
             i++;
        }
   

   printf("\n The message will be :   ");

   i = null;

   while (message[i] != '\n')
     {
      switch (message[i]) 
    {
        
         case 'A': message[i] = '4';
                   break;
         case 'B': message[i] = '8';
                   break;
         case 'E': message[i] = '3';
                   break;
         case 'I': message[i] = '1';
                   break;
         case 'O': message[i] = '0';
                   break;
         case 'S': message[i] = '5';
                   break;
        }
      putchar(message[i]);
      i++;
   }
   printf("!!!!!!!!!!\n"); 
 
   return null;
}