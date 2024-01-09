#include <stdio.h>  
int main()  
{  
register int a = 3;   
printf("%u",&a); // This will give a compile time error since we can not access the address of a register variable.   
}  
