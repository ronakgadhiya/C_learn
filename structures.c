#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
} ; //declaring e1 variable for structure

int main()
{   struct employee e1;
    //store first employee information
    e1.id = 101;
    strcpy(e1.name, "Learnvern"); //copying string into char array
    
    //printing first employee information
    
    printf("employee 1 id : %d\n", e1.id);
    printf("employee 1 name : %s\n", e1.name);
    
    return 0;
}