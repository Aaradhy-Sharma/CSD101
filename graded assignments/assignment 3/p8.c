#include <stdio.h>
#include <stdlib.h>
#define null 0
#define unity 1

int main(void)
{
    printf("\n\t\t ---------------------------------------------------");
    printf("\n\t\t\t Array Zero Sorter by Aaradhy Sharma ");
    printf("\n\t\t ---------------------------------------------------");

    int i,j,k,r,count=null;
    printf("\n Please enter the length of the array to be input : ");   // taking the order of the array as input from the user //
    scanf("%d",&i);

    int array[i];
    printf("\n Please enter the elements of the array to be sorted : ");

    while(j<i)
    {
        printf("\n Please enter the element : ");                       // taking the elements of the array from the user as input //
        scanf("%d", &array[j]);
        j++;
    }

    j=null;
    k=i-1;
    r=null;

    printf("\n The sorted array with the zeros being at the end is : ");

    for(r=null;r<i;r++)                     // sorting the array with the zeros at the end in accordance with question 8, assignment 3 of CSD101 //
    {
        if(array[r]!=null)
        {
            array[count++]=array[r];
        }
    }

    while(count<i)
    {
        array[count++]=null;

    }

    j=null;

    while(j<i)
    {
        printf("%d",array[j]);              // printing the sorted array with the zeros being at the end //
        j++;
    }

    return 0;
}
