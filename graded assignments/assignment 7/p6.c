#include <stdio.h>
#include <stdlib.h>
#define null 0 

// driver code //
signed main(void)
    {
        printf("\n\t\t ---------------------------------------------------");
        printf("\n\t\t\t main() recusion by Aaradhy Sharma ");
        printf("\n\t\t ---------------------------------------------------");

        static signed cache_vector=1; 
        cache_vector++;
        printf("\n The main function has been called recursively %d times.",cache_vector-1);
    
// recursion of main() function within main() //
        main();     
        
        return null;
    }