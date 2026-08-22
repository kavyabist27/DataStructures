#include<stdio.h>
int main() {
    int *ptr = NULL;
    int age = 30;
    printf("Age: %d\n", age);
    ptr = &age;
    *ptr = 40;
    printf("Age: %d\n", age);

    return 0;
}