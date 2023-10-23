#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = ' ';
    x = getch();
    //printf("%d", x);
    if( -32 == x )
    {
        x = getch();
        printf("Extended Key and its key is %d", x);
        /* 72 up
            80 down
            77 right
            75 left */

    }

    else
    {
        printf("Normal Key");
    }

}
