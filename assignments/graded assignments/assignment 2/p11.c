#include <stdio.h>
#include <stdlib.h>

// Question 11: to input marks of five subjects and to calculate the percentage and the associated grades //

int main() {

  int physics_marks,chemistry_marks,biology_marks,maths_marks,computer_marks,percentage,total_marks,total_marks_obtained;
  printf("\n Please enter the marks of Physics,Chemistry,Biology,Maths and Computer subjects respectively (out of 100) : ");
  scanf("%d %d %d %d %d", &physics_marks, &chemistry_marks , &biology_marks , &maths_marks , &computer_marks);
  
//  declaring percentage formula //

  total_marks_obtained = physics_marks + chemistry_marks + biology_marks + maths_marks + computer_marks;

  percentage = total_marks_obtained*100/500;

  printf("\n The percentage obtained by the marks input is %d", percentage );

// initialising the if else statements to find out the grade recived //
  if(percentage>=90)
    {
      printf("The grade recieved is Grade A. \n");
    }

  else if(percentage>=80)
    {
      printf("The grade recieved is Grade B. \n");
    }
  else if(percentage>=70)
    {
      printf("The grade recieved is Grade C. \n");
    }
  else if(percentage>=60)
    {
      printf("The grade recieved is Grade D. \n");
    }
  else if(percentage>=40)
    {
      printf("The grade recieved is Grade E. \n");
    }
  else
    {
      printf("The grade recieved is Grade F. \n");
    }

  return 0;
}
