#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10] = "hadeer";
    char str2[10] ;

    int i = 0 ;
    while(str1[i] != '\0'){

          str2[i] = str1[i];
          i++ ;
    }
    str2[i] = '\0';  // to add the null terminator

    printf("%s" , str2);
    return 0;
}
