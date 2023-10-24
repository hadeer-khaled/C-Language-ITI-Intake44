#include <stdio.h>
#include <stdlib.h>

int get_max(int q , int l , int m);
int simple_calculator(int num_1, int num_2, char op);

int main()
{

//1.
int x ;
printf("############ Question 1 ############ \n");
printf("Please Enter a number: ");
scanf("%d" , &x);
if(0 == x){
    printf(" Zero \n") ;
}else if (x > 0){
    printf("Positive \n") ;
}else{
    printf("Negative \n") ;
}

//2.
int y ;
printf("############ Question 2 ############ \n");
printf("Please Enter a number to check if even or odd: ");
scanf("%d" , &y);
if(y%2 == 0){
    printf("Even \n") ;
}else{
    printf("odd \n");
}
//3.
int q = 0 ;
int l = 0 ;
int m = 0;
printf(" ############ Question 3 ############ \n");
printf("Please Enter the Three numbers: ");
scanf("%d %d %d" , &q ,&l , &m);
int max_num = get_max( q , l , m);
printf("Max Number: %d \n" , max_num);

//4.
printf("################# Question 4 ################# \n") ;
printf("Enter the grade : ") ;
int grade = 0;
scanf("%d" , &grade) ;
if(grade < 50 && grade >0 )
    printf("Fail \n");
else if(grade = 50)
    printf("Pass \n");
else if (grade = 65)
    printf("Good \n");
else if (grade >= 75 && grade <=85)
    printf("Very Good");
else if (grade >= 85 &&  grade <= 100 )
    printf("Excellent \n");
else
    printf("Invalid Number\n");

//5.
int num_1  ;
int num_2  ;
char op ;
printf("################# Question 5 ################# \n") ;
printf("Enter the first operand: ") ;
scanf("%d" , &num_1) ;
printf("Enter the second operand:  " );
scanf("%d" , &num_2) ;
printf("Enter the second operand:  ");
scanf(" %c" , &op) ;

int result = simple_calculator(num_1 , num_2, op);
printf("%d %c %d = %d   \n" ,num_1 , op, num_2 , result);

    return 0;
}

int get_max(int q , int l , int m){
    int max_num_2  = 0;
    if (q > l && q >m){
        return max_num_2 = q;
    }
    else if(l> q && l>m){
        return max_num_2 = l;
    }
    else{
        return max_num_2 = m;
    }
}

int simple_calculator(int num_1, int num_2, char op) {
    int result = 0;
    switch (op) {
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
            result = num_1 * num_2;
            break;
        case '/':
            if (num_2 != 0) {
                result = num_1 / num_2;
            }
            else {
                printf("Run time error : Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator '%c'\n", op);
    }

    return result;
}

