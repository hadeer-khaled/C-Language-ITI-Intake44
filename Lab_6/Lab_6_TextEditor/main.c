#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <dos.h>
#include <dir.h>

#define SIZE 100
#define RIGHT 77
#define LEFT 75
#define HOME 71
#define END 79
#define ESC 27
#define DELETE 8
#define ENTER 13

void gotoxy(int x,int y);
int main()
{
    char arr[SIZE] = {0};
    char key;
    int arr_indx = 0 ;
    int x_coord = 0;
    int y_coord = 1 ;

    printf("Enter a sentence:\n");

    while(1)
    {
        key = getch();
        switch(key){
            case -32: // is it a special char ??
                key = getch();
                switch(key) { // yes, it is a special char,but which one ?
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
                    case HOME:
                        gotoxy(0,y_coord);
                        break;
                    case END:
                        gotoxy(arr_indx,y_coord);
                        break;

                    }//end switch
                //end case -32
                break;
                    case DELETE:
                            for (int i = x_coord; i < arr_indx; i++) {
                                arr[i] = arr[i + 1];
                                }
                                arr_indx--;
                                x_coord =arr_indx;
                                system("cls");
                                printf("Enter a sentence:\n");
                                printf("%s" , arr);
                                gotoxy(x_coord ,y_coord );
                        break;
            case ENTER:  // is it enter ??
                printf("\n%s", arr) ;
                y_coord++;
                //gotoxy(arr_indx ,y_coord );
                break;
            default:
                printf("%c", key);
                arr[x_coord] = key ;
                arr_indx++;
                x_coord++;
                //gotoxy(5 ,6 );
                //printf("%d" , arr_indx);
                //gotoxy(x_coord ,y_coord );
                break;
            } // end switchq
    }//end while
} //end main

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

