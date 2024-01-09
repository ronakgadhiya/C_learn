#include <stdio.h>
int main()
{
    int a = 9,b = 4, c = 1;
    
    // c = a+b;
    // printf("a+b = %d \n",c);
    // c = a%b;
    // printf("Remainder when a divided by b = %d \n",c);


    // printf("++a = %d \n", ++a);
    // printf("--b = %d \n", --b);


//     c = a;      // c is 9
//     printf("c = %d\n", c);
//     c += a;     // c = c + a;
// printf("c = %d\n", c);

    // printf("%d == %d is %d \n", a, b, a == b);
    // printf("%d == %d is %d \n", a, c, a == c);
    // printf("%d > %d is %d \n", a, b, a > b);
    // printf("%d > %d is %d \n", a, c, a > c);



    int result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    
    return 0;
}