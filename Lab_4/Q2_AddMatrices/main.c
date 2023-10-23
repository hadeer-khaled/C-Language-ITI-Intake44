#include <stdio.h>
#include <stdlib.h>
#define ROWS  2
#define COLM  2

int main()
{
    int matrix_1 [ROWS][COLM] = {{1,2} , {5,6,}  } ;

    int matrix_2 [ROWS][COLM] = {{1,1} , {1,1}  } ;

    int matrix_3 [ROWS][COLM] = {0} ;

    for(int i  =0 ; i < ROWS ; i++){
        for(int j = 0 ; j<COLM ; j++){
            matrix_3[i][j] = matrix_1[i][j]  + matrix_2[i][j]  ;
        }
    }
    for(int i  =0 ; i < ROWS ; i++){
        for(int j = 0 ; j<COLM ; j++){
            printf("%d " , matrix_3[i][j]) ;
        }
        printf("\n");
    }


    return 0;
}
