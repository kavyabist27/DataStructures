#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int n = 4;
    for (int i = n; i >= 0; i--)
    {
        printf("%d\n", *(a + i));
    }
}