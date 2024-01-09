#include <stdio.h>
#include <stdlib.h>

int main()
{
  
   FILE *fptr;
    char st[100];
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("program.txt","w");

   printf("Enter a string: ");
   gets(st);

   fputs(st,fptr);
   fclose(fptr);

   return 0;
}