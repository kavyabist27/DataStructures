#include <stdio.h>

int main()
{
    int vector[] = {28,41,7};

    int *p = vector;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));

    return 0;
}