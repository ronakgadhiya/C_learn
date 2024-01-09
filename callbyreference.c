#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a = 10;
    int b = 20;
    printf("\nBefore swap the value of a  :%d", a);
    printf("\nBefore swap the value of b  :%d", b);

    swap(&a, &b);

    printf("\nAfter swap the value of a  :%d", a);
    printf("\nAfter swap the value of b  :%d", b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
