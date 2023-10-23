#include <stdio.h>
#include <stdlib.h>

int main()
{
    char f_name[20] ;
    char l_name[20] ;
    char full_name[40] ;

    printf("Enter the first name: ");
    scanf("%s" ,f_name );

    printf("Enter the last name: ");
    scanf("%s" ,l_name );

    int i = 0 ;
    int j = 0 ;
    while(f_name[i]!= '\0'){
        full_name[i] = f_name[i];
        i++;
    }
    while(l_name[j]!= '\0'){
        full_name[i] = l_name[j];
        i++;
        j++;
    }
    full_name[i] = '\0';

    printf("Full Name: %s\n", full_name);
    return 0;
}
