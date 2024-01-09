#include <stdio.h>
int main()
{
     char i='A';
     switch (i)
     {
        case 'A':
           printf("Congratulations ! Your grade is awesome");
           break;
        case 2:
           printf("Case2 ");
           break;
        case 3:
           printf("Case3 ");
           break;
        case 4:
           printf("Case4 ");
           break;
        default:
           printf("Default ");
           break;
     }
    return 0;
}