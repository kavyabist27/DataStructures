#include<stdio.h>
int main(){
    int a=10;
    int *ptr = &a;
    if(ptr != NULL){
        printf("value: %d\n", *ptr);
    } else {
        printf("Pointer is NULL and dereferencing is prevented\n");
    }
  return 0;
}