#include <stdio.h>

int main() 
{
 
 int color,lime,straw,red,orange;
 float white,green,blue,purple,crayon;
 color=2,crayon = -1.3,straw=1,red=3,purple=0.32;

// part 1 //
 white = color*2.5/purple;
 printf("\n white = color*2.5/purple =  %f", white); 

// part 2 //
 green = color/purple;
 printf("\n green = color/purple =  %f", green);

// part 3 //
 orange  = color/red;
 printf("\n orange = color/red = %i", orange);

// part 4 //
 blue=(color+straw)/ (crayon +0.3);
 printf("\n blue=(color+straw)/ (crayon +0.3) = %f", blue);

// part 5 //
 lime=red/color +red %color;
 printf("\n lime=red/color +red color = %i", lime);   


// part 6 //
 purple= straw/ red*color;
 printf("\n purple= straw/ red*color = %f", purple);  
   






















 return 0;
}
