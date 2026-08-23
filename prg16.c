#include <stdio.h>

int main()
{
    int a = 10;

    int *p = &a;

    int **q = &p;

    printf("Value of a = %p\n", &a);
    printf("Using p = %p\n", p);
    printf("Using q = %p\n", q);

    return 0;
}

