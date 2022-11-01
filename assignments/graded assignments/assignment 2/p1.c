#include <stdio.h>
#include <stdlib.h>

int main() {
//question:1 c programme to find the maximum among three numbers //
 int first_number , second_number , third_number;
 printf("\n Enter the first number : ");
 scanf("%d", &first_number);
 
 printf("\n Enter the second number : ");
 scanf("%d", &second_number);
 
 printf("\n Enter the third number : ");
 scanf("%d", &third_number);
 
// initiaing the if-else sequence to get the maximum number //
 
 if(first_number >= second_number , first_number >= third_number)
 printf("\n The first number : %d is the maximum number among the three.", first_number);


 if(second_number >= first_number , second_number >= third_number)
 printf("\n The second number : %d is the maximum number among the three.", second_number);
 
 else
 printf("\n The third number : %d is the maximum number among the three.", third_number);

 return 0;
 

}
