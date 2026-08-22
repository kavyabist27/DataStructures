#include <stdio.h>

int main()
{
    int vector[] = {28,41,7};

    int *p = vector;

    printf("Before = %d\n", *p);

    (*p)++;

    printf("After (*p)++ = %d\n", *p);

    p++;

    printf("After p++ = %d\n", *p);

    return 0;
}