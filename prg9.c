#include<stdio.h>
int main(){
    int vector[]={1,2,3};
    int *ptr = vector+2;
    printf("%d\n", *ptr);
    printf("%p\n", (void *)ptr);
    ptr-=1;
    printf("%d\n", *ptr);
    printf("%p\n", (void *)ptr);
    ptr-=1;
    printf("%d\n", *ptr);
    printf("%p\n", (void *)ptr);
    return 0;
}