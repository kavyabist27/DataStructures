#include<stdio.h>
int main(){
int a=4;
char c='A';
float b=3.14;
int *ptr1= &a;
char *ptr2= &c;
float *ptr3= &b;

printf("%d\n",a);
printf("%c\n",c);
printf("%f\n",b);

printf("%d\n",*ptr1);
printf("%c\n",*ptr2);
printf("%f\n",*ptr3);

printf("%p\n",ptr1);
printf("%p\n",ptr2);
printf("%p\n",ptr3);

printf("Size of int pointer: %zu bytes\n", sizeof(*ptr1));
printf("Size of char pointer: %zu bytes\n", sizeof(*ptr2));
printf("Size of float pointer: %zu bytes\n", sizeof(*ptr3));
return 0;
}