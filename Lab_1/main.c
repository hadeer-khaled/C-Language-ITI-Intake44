#include <stdio.h>
#include <stdlib.h>

int get_max_1( q , l , m);
int get_max_2( q , l , m);
int simple_calculator(int num_1, int num_2, char op);

int main()
{   int x = 5 ;
    float y = 6.1 ;
    char c = 'b' ;
    double d = 183;

    // 2.
    printf("Q2 ===> int x: %d ,float y: %f ,char c: %c \n" , x , y , c );

    //3.
    printf("Q3 ===> %d \n" , c);

    //4.
    int x_2 = 6 ;
    int z = x +x_2 ;
    printf("Q4 ===> %d \n" , z);

    //5.
    int x_hex = 100 ;
    printf("Q5..==> %x \n" , x_hex);

    //6.
    int num_1 = 4 ;
    int num_2 = 2 ;
    char op = '/';

    int result = simple_calculator(num_1 , num_2, op);
    printf("Q6 ===> %d %c %d = %d   \n" ,num_1 , op, num_2 , result);

    //7.
    int a = 9 ;
    int b = 2.0 ;

    int quotient = a / b ;
    int remainder = a % b ;
    printf("Q7 ===> Quotient: %d, Remainder: %d \n" , quotient , remainder);

    //8.
    int q = 5 ;
    int l = -170 ;
    int m = -100;

    // Method 1
    int max_num_1 = get_max_1( q , l , m);
    printf("Q8 ===> Max Number from method 1: %d \n" , max_num_1);

    // Method 2
    int max_num_2 = get_max_2( q , l , m);
    printf("Q8 ===> Max Number from method 2: %d \n" , max_num_2);

    return 0;
}

//Stupid Method :)
int get_max_1(int q ,int l ,int m){
    return q > l ? q > m ? q : m : m > l ? m : l;
}

int get_max_2(int q , int l , int m){
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


