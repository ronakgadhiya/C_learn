//Printing numbers from 1 to 10

#include <stdio.h>
 
int main () {

   int a = 1;

   do {
      printf("%d ", a);
      a = a + 1;
   }while( a <= 10 );
 
   return 0;
}