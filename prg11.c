#include<stdio.h>
int main(){
    int vector[] = {1, 2, 3};
    int *ptr = vector;
    int *ptr1 = vector+1;
    int *ptr2 = vector+2;
    printf("p2>p: %d\n", ptr2>ptr);
    printf("p1>p: %d\n", ptr1>ptr);
    printf("p2<p1: %d\n", ptr2<ptr1);
    return 0;
}