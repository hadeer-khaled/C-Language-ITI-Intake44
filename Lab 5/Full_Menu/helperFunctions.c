#include <windows.h>
#include <time.h>
#include <dos.h>
#include <dir.h>
#define ROWS 3
#define COLMS 10


typedef unsigned char  u8;
typedef signed char  s8;
typedef unsigned short int  u16;
typedef signed short int  s16;
typedef unsigned long int  u32;
typedef signed long int  s32;

struct student
{
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};



void display(char strings[ROWS][COLMS],int pos , int flag)
{
    system("cls");
    printf("Start ");
    if (flag){
        gotoxy(10,(pos + 1) * 5);
        SetColor(4) ;
        printf("%s", strings[pos]);
    }
    else{

    for(int i = 0 ; i< ROWS ; i++)
    {
        if(pos == i)
        {
            gotoxy(10,(pos + 1) * 5);
            SetColor(4) ;
            printf("%s", strings[pos]);

        }
        else
        {
            gotoxy(10,(i + 1) * 5);
            SetColor(15) ;
            printf("%s", strings[i]);
        }
    }
    }
    printf("\n \n \n");
}

void enter(char strings[ROWS][COLMS] , int pos){
    //printf("enter");
    system("cls");
    gotoxy(10,(pos + 1) * 5);
    SetColor(4) ;
    printf("%s", strings[pos]);
}

char getKey()
{
    char key = getch();
    if( -32 == key)
    {
        key =getch() ;
    }
    else if( 13 == key){
        key = 13 ;
    }
    else
    {
        key = -1;
    }
    //printf("%d" , arrow );
    return key ;
}

int changePosition(char key, int pos)
{
    switch(key)
    {
    case 72: // up
        if(0 == pos )
        {
            pos = 2;
        }
        else
        {
            pos--;
        }
        break ;
    case 80: //down
        if( 2 == pos )
        {
            pos = 0;
        }
        else
        {
            pos++;
        }
        break ;
    case 71 :
        pos = 0;
        break ;
    case 79:
        pos = 2;
        break ;
    default:
        break ;
    }
    //printf("%d", pos );
    return pos;
}

void addStudent(struct student students[],int size  )
{
    int num = 0 ;
    char answ = ' ' ;
    printf("what number of students will you enter? ");
    if(scanf("%d", &num) != 1)
    {
        printf("Invalid Input") ;
    }
    scan_struct_Students(students,num);
    counter += num ;
    printf("Your inputs have been saved successfully \n");
    printf("Press any key to return to menu");
    //getch();
    //printf("Press any key to return to menu");


    /*printf("What you want to do next?");
    printf("if you want to display your students press: ")
    scanf(" %c" ,answ ) ;
    switch(answ){
        case
    }
    }*/
    return ;
}

void scan_struct_Students(struct student s[],int size )
{
    for(int i=0; i<size; i++)
    {
        printf("Enter name [%d]",i+1);
        scanf(" %50[^\n]",s[i].name);
        printf("Enter age [%d]",i+1);
        /*if(scanf("%d", &s[i].age) != 1)
        {
        printf("Invalid Input") ;
        return;
        }*/
        scanf("%d",&s[i].age);
        printf("Enter ID [%d]",i+1);
        scanf("%d",&s[i].id);
        printf("Enter Gender [%d]",i+1);
        scanf(" %c",&s[i].gender);
    }

}

void displayStudent(struct student students[])
{
    int usersToDisplay = 0 ;
    printf("Enter number of users to display( you entered %d).", counter);
    if(scanf("%d", &usersToDisplay) != 1 || ( usersToDisplay <0&& usersToDisplay >counter ) )
    {
        printf("Invalid Input");
        return ;
    }
    print_struct_Students(students,usersToDisplay);
    printf("Press any key to return to menu");


}
void print_struct_Students(struct student s[],int size)
{
    printf("----------------- Display -------------------- \n");
    for(int i=0; i<size; i++)
    {
        printf("name[%d] = %s \n",i+1,s[i].name);
        printf("gender[%d] = %c \n",i+1,s[i].gender);
        printf("age [%d]=  %d \n",i+1,s[i].age);
        printf("id [%d] =  %d \n",i+1,s[i].id);
    }

}

int exitProgram()
{
    int exitFlag = 0;
    char c = ' ';
    printf("Press to \"Y\" or \"y\" to exit continue OR any key to return back." );
    c = getch();
    if(c == 'y' || c== 'y')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

