#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0
#define array_length 30

// function declaration //
void populator_pointer(signed array[], signed *first_number , signed *second_number, signed*third_number, signed *reader);

// driver code //
signed main(void)
{

signed array_1[array_length];
signed first_number = null , second_number = 1, third_number = 1, reader = null,i;
populator_pointer(array_1,&first_number,&second_number,&third_number,&reader);
for(i=null;i<array_length;i++)
    {
          printf("\n The %dth element of the array is %d",i,array_1[i]);
    }
return null;

}

// function definition //
void populator_pointer(signed array[], signed *first_number , signed *second_number, signed *third_number, signed *reader)
{
    loc0:
        
        if(*reader>2)
        goto loc1;
    
    
        if(*reader==null)
             {
                array[*reader] = *first_number;
                *reader +=1;
                goto loc0;
            }
    
        if(*reader==1)
         {
               array[*reader] = *second_number;
               *reader +=1;
               goto loc0;

      }

    loc1:
        {
        while(array[*reader]<array_length)
            {
                 array[*reader] = *first_number + *third_number;
                *first_number = *second_number;
                *second_number = *third_number;
                *third_number = array[*reader];
                *reader +=1;
                
            }
        }
}
