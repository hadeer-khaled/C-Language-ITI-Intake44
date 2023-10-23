#ifndef HELPERFUNCTIONS_H_INCLUDED
#define HELPERFUNCTIONS_H_INCLUDED

#define ROWS 3
#define COLMS 10


typedef unsigned char  u8;
typedef signed char  s8;
typedef unsigned short int  u16;
typedef signed short int  s16;
typedef unsigned long int  u32;
typedef signed long int  s32;

void gotoxy(int x,int y) ;
void SetColor(int ForgC) ;
void display(char strings[ROWS][COLMS],int pos , int flag);
void enter(char strings[ROWS][COLMS] , int pos);
char getKey() ;
int changePosition(char key, int pos);

// User Define Struct
struct student
{
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};

void display_struct_Student(struct student s);
void scan_struct_Students(struct student s[],int size);
void print_struct_Students(struct student s[],int size );

void addStudent(struct student students[], int size );
void displayStudent(struct student students[]);
int exitProgram() ;

#endif // HELPERFUNCTIONS_H_INCLUDED
