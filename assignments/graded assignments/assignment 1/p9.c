#include <stdio.h>
int main() 
{

  int length , breadth , perimeter , area ;
  
  // taking inputs from the user for the length and the breadth of the rectangle we have to consider //
  printf("Please enter the length of the rectangle : ");
  scanf("%d", &length);
  
  printf("Please enter the breadth of the rectangle : ");
  scanf("%d", &breadth);
  
  // initialisng the formulas for area and the perimeter of the rectangle //

  area = length * breadth;
  perimeter = 2*(length + breadth);

  // checking and declaring if the area of the rectangle is greater than the perimeter of the rectangle magnitude wise //

  if(area > perimeter)
     printf("\n The area %d of the rectangle is greater than the perimeter %d of the rectangle", area , perimeter);
  
  else if( area == perimeter)
     printf("\n The area %d of the rectangle is equal to the perimieter %d of the rectangle" , area , perimeter);

  else 
     printf("\n The area %d of the rectangle is less than the perimeter %d of the rectangle" , area , perimeter);







 return 0;

}
