#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    /*int x = ' ';
    printf("Enter characters: ");
    scanf("%d" , &x);

    char string[SIZE] ;
    int i = 0 ;
    while(x != '\n'){
        x = getchar();
        string[i] = x;
    }
    for(int i =0 ,)
    return 0;*/

    char arr[SIZE];

    printf("Enter a sentence: ");
    scanf(" %100[^\n]", arr);

    printf("%s", arr);

}
