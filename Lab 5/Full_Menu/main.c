#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <dos.h>
#include <dir.h>
#include "helperFunctions.h"
#define ROWS 3
#define COLMS 10
#define SIZE 100




int counter = 0;
int main()
{
    int pos = 0 ;
    char key = 0;
    int flag = 0 ;
    int globalPos = 0;
    char strings[ROWS][COLMS] = { {"New"}, {"Display"}, {"Exit"} };
    struct student students[SIZE];

    while(1)
    {
        int exitFlag = 0;
        int flag = 0 ;
        display(strings, pos, flag);
        key = getKey();
        if(13 == key)
        {
            flag = 1 ;
            switch(globalPos)
            {
            case 0:
                system("cls");
                addStudent(students,SIZE);

                getch();
                break;
            case 1:
                displayStudent(students);
                getch();
                break;
            case 2:
                exitFlag=exitProgram() ;
                break ;
            }
        }
        else
        {
            flag = 0 ;
            pos = changePosition(key,  pos);
            globalPos= pos ;
        }

        if(exitFlag)
        {
            break;
        }
    } // End while(1)

    return 0;
}







