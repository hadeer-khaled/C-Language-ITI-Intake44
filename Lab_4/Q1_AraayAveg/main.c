#include <stdio.h>
#include <stdlib.h>
#define ROWS  3
#define COLM  4

int main()
{

    int arr [ROWS][COLM] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} } ;
    int sum = 0 ;
    float avg = 0 ;
    for(int col = 0 ; col < COLM ; col++) {
            for(int row = 0 ; row < ROWS ; row++){
                sum +=arr[row][col];
            }
            avg = (float)sum / ROWS;
            printf("The Average of %d  = %.2f \n" ,col, avg);
            sum = 0 ;
        }

    return 0;
}
