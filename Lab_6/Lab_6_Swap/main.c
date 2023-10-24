#include <stdio.h>
#include <stdlib.h>


int swap(int arr[],int indx_1 , int indx_2) ;
int main()
{
    int arr[2];

    printf("Enter the first number: ");
    if (scanf("%d", &arr[0]) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    printf("Enter the seconf number: ");
    if (scanf("%d", &arr[1]) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }
    swap(arr , 0 ,  1) ;
    printf("\n######### After Swapping ######### \n\n");
    printf("The value of the first number: %d \nThe value of the second number: %d \n" , arr[0]  , arr[1] ) ;
    return 0;
}
int swap(int arr[] , int indx_1 , int indx_2){
    arr[indx_1] = arr[indx_1] + arr[indx_2];
    arr[indx_2] = arr[indx_1] - arr[indx_2] ;
    arr[indx_1] = arr[indx_1] - arr[indx_2] ;

    return 1 ;
}
