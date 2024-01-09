#include <stdio.h>

int main()
{

    int a = 17; // age of the person
    int l = 0;  // have license or not

    if (a > 18)
    {
        printf("Congratulations! You are eligible to Drive \n");
        if (l == 1)
        {
            printf("Great! You can Drive safely");
        }
        else
        {
            printf("You are eligible but you do not possess a license");
        }
    }

    else
    {
        printf("OH! you are not eligible");
    }
    return 0;
}