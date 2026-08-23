#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};

    int *first = a;
    int *last = a + 5;

    printf("Size = %d\n", last - first);

    return 0;
}