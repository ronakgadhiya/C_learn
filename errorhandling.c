#include <stdio.h>       
#include <errno.h>       
#include <string.h> 
 
int main ()
{
    FILE *fptr;
    /* 
        If a file, which does not exists, is opened,
        we will get an error
    */ 
    fptr = fopen("Nofile.txt", "r");
 
    printf("Value returned from errno: %d\n ", errno);
    printf("The error message is given as : %s\n", strerror(errno));
    perror("Message from perror");
 
    return 0;
}