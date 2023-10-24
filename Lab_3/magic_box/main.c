#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
void gotoxy( x, y);
int main()
{
    int size = 0;

    printf("Enter the  an odd size of the box: ");
    scanf("%d", &size);

    if( size % 2 ==0 )
    {
        while(size % 2 ==0)
        {
            printf("Please Enter a valid \"odd\" number:");
            scanf("%d", &size);
        }
    }
    system("cls");
    printf("Magic Square with size %d", size);


    int row =1;
    int col =(size+1)/ 2 ;
    int value=1;

    for(int i = 0 ; i< size*size ; i++)
    {
        gotoxy(col*4,row);
        sleep(1);
        printf("%4d", value);

        if(0 == value % size )
        {
            row++ ;
        }
        else
        {
            row--;
            col--;
        }
        if(0 == row)
        {
            row = size ;
        }
        if( 0 == col)
        {
            col = size;
        }
        value ++ ;
    }
    return 0;
}
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
