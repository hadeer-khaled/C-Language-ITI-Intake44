#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
    int arr[SIZE] = {-1, 2, 4, 7, 100, 4, 0, -3, -9, 10};
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("In this Array: ");
    for(int i = 0 ;i< SIZE ;i++){
        printf("%d, " , arr[i]);
    }
    printf("\n");
    printf("Max Number is: %d\n", max);
    printf("Min Number is: %d", min);

    return 0;
}
