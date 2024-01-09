#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ch[50];
    char *desc;
    strcpy(ch, "LearnVern ");
    desc = malloc(200 * sizeof(char));
    if (desc == NULL)
    {
        fprintf(stderr, "Unable to allocate required memory ");
    }
    else
    {
        strcpy(desc, "This is a C Programming course by LearnVern ");
    }
    printf("Topic = %s\n", ch);
    printf("Description = %s\n", desc);
    return 0;
}
