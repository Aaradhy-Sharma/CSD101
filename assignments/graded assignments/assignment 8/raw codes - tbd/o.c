#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    printf("hello\n");
    srand(time(0));
    char grid[10][10],ch='A';
    bool arr[10][10]={false},blocked=false;
    arr[0][0]=true;
    int move,i=0,j=0;
    for (int i=0 ; i<10 ; i++) {
        for (int j=0; j<10; j++) {
            grid[i][j]='.';
        }
    }
    grid[0][0]='A';
    while(ch<'Z' && !blocked) {
        move=rand()%4;
        switch(move) {
            case 0: if ( !(arr[i+1][j]) && i+1<10 ) {
                        i++;
                        arr[i][j]=1;
                        ch++;
                        grid[i][j]=ch;
                        }
                        break;
            case 1: if ( !(arr[i][j+1]) && j+1<10 ) {
                        j++;
                        arr[i][j]=1;
                        ch++;
                        grid[i][j]=ch;
                        }
                        break;
            case 2: if ( !(arr[i][j-1]) && j-1>0 ) {
                        j--;
                        arr[i][j]=1;
                        ch++;
                        grid[i][j]=ch;
                        }
                        break;
            case 3: if ( !(arr[i-1][j]) && i-1>0 ) {
                        i--;
                        arr[i][j]=1;
                        ch++;
                        grid[i][j]=ch;
                        }
                        break;
            default:
                     blocked=true;
        }
    }

    for (int i=0 ; i<10 ; i++) {
        for (int j=0; j<10; j++) {
            printf("%c ",grid[i][j]);
        }
        printf("\n");
    }
    exit(EXIT_SUCCESS);
}