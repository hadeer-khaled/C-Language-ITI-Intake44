#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10] = "hadeer";

    int i = 0 ;
    while(str1[i] != '\0'){
          i++ ;
    }
    printf("the lenght of string = %d" , i);

    return 0;
}
