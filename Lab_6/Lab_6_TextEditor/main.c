#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <dos.h>
#include <dir.h>

#define SIZE 100
#define RIGHT 77
#define LEFT 75

void gotoxy(int x,int y);

int main()
{

    char arr[SIZE];
    char key = ' ';
    int arr_indx = 0 ;
    int x_coord = 0;
    int y_coord = 1 ;

    printf("Enter a sentence:\n");

    while(1)
    {
        key = getch();
        if( -32 == key ) // is it a special char ??
        {
            key = getch();

            switch(key) // yes, it is a special char,but which one ?
            {
            case LEFT:
                if(x_coord> 0){
                x_coord--;
                gotoxy(x_coord,y_coord);
                }
                else{}
                break;

            case RIGHT:
                x_coord++;
                gotoxy(x_coord,y_coord);
                break;
            }//end switch

        }//end if
        else if( 13 == key) // is it enter ??
        {
            printf("\n%s", arr) ;
            break;
        }

        else
        {
            printf("%c", key);
            arr[x_coord] = key ;
            x_coord++;
        } //end else

    }//end while

} //end main


void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

