#include <stdio.h>
#include <stdlib.h>

void swap( int* x,int* y) ;

int main(){
    int x = 0 ;
    int y = 0;
    printf("Enter the first number: ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("Enter the seconf number: ");
    if (scanf("%d", &y) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    swap(&x , &y ) ;
    printf("\n######### After Swapping ######### \n\n");
    printf("The value of the first number: %d \nThe value of the second number: %d \n" , x  , y) ;
    return 0 ;
}
void swap( int* x,int* y) {
    *x = *x + *y ;
    *y = *x - *y ;
    *x = *x - *y;
}
