#include<stdio.h>
int main(){
    int a=5;
    int *ptr = &a;
    printf("%d\n",a);
    printf("%p\n",(void*)ptr);
    printf("%d\n",*ptr);
    *ptr = 20;
    printf("%d\n",a);
    return 0;
}