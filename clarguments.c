#include <stdio.h>

int main( int argc, char *argv[] )  {

   if( argc == 1 ) {
      printf("The argument provided is %s\n", argv[0]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments provided.\n");
   }
}