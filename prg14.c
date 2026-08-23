#include <stdio.h>

int main()
{
    int a = 10;

    void *p = &a;

    printf("Value of a = %d\n", *(int *)p);

    return 0;
}