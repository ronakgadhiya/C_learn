#include <stdio.h>

void number_print(int);                 //function declaration

void main()
{   
    int num = 5;
    int num1 = 6;
    
    number_print(num);                  //function call         || 'num' is an actual parameter
    number_print(num1);
}

void number_print(int a)                //function definition   || 'a' is a formal parameter
{
    printf("%d ",a);  
}