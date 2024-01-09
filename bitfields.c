#include <stdio.h>

/* define simple structure */
struct {
   unsigned int a;
   unsigned int b;
} o1;

/* define a structure with bit fields */
struct {
   unsigned int a : 1;
   unsigned int b : 1;
} o2;
 
int main( ) {
   printf( "Memory size occupied by o1 : %d\n", sizeof(o1));
   printf( "Memory size occupied by o2 : %d\n", sizeof(o2));
   return 0;
}
