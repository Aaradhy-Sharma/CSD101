#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define null 0
#define array_length 30

// function declaration //
void populator(signed array[], signed *first_number, signed *second_number, signed *third_number, signed *reader_vector);

// driver code //
signed main()
{
    
    signed array[array_length],first_number = null, second_number = 1, third_number = 1, reader_vector = null;
    populator(array, &first_number, &second_number, &third_number, &reader_vector);
    for(signed i=0;i<array_length;i++)
        {
            printf("\n The %dth element is : %d", i,array[i]);
        }
    return null;
}

// function definition //
void populator(signed array[], signed *first_number, signed *second_number, signed *third_number, signed *reader_vector)
{

loc0:
    if(*reader_vector>2)
        {
        
            goto loc1;
        }

    if(*reader_vector==0)
        {
            array[*reader_vector] = *first_number;
        
            *reader_vector+=1;
            goto loc0;
        }

    if(*reader_vector==1)
        {
            array[*reader_vector] = *second_number;
        
            *reader_vector+=1;
            goto loc0;
        }

    if(*reader_vector==2)
        {
            array[*reader_vector] = *third_number;
            *reader_vector+=1;
        
            goto loc0;
        }
loc1:
    while(*reader_vector<array_length)
        {
            array[*reader_vector] = *first_number + *third_number;
            *first_number = *second_number;
            *second_number = *third_number;
            *third_number = array[*reader_vector];
        
            *reader_vector+=1;
    }
}