#include <stdio.h>
#include <stdlib.h>

#define SIZE 50
int main()
{
    int arr[SIZE] = {0};
    int actual_size;

    printf("Please, Enter the array size between 1 and %d: ", SIZE );
    scanf("%d", &actual_size);

    while(actual_size < 0 || actual_size > SIZE){
        printf("Invalid array size. \n");
        printf("Please, Enter the array size between 1 and %d: ", SIZE );
        scanf("%d", &actual_size);

    }
    // Take the array elements from the user
    printf("Enter %d array elements separated by space: ", actual_size);
    for (int i = 0; i < actual_size; i++){
        scanf("%d", &arr[i]);
    }
    // Print the array elements
    printf("Your array is: ");
    for (int i = 0; i < actual_size - 1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d.", arr[actual_size - 1]); //  to solve the last "," in the array ==> 1, 2, XXX
    printf("\n");
    return 0;
}
