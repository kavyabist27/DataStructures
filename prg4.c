#include<stdio.h>
void ChangeByValue(int a)
{
    a = 20;
}
void ChangeByPointer(int *p)
{
    *p = 20;
}
int main()
{
    int x = 10;
    printf("Before ChangeByValue: %d\n", x);
    ChangeByValue(x);
    printf("After ChangeByValue: %d\n", x);

    printf("Before ChangeByPointer: %d\n", x);
    ChangeByPointer(&x);
    printf("After ChangeByPointer: %d\n", x);

    return 0;
}
