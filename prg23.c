#include <stdio.h>
int main()
{
    int num = 5;
    const int limit = 10;
    int *pi;
    const int *pci;
    pi = &num;
    pci = &limit;
    printf("num_address:%p value:%d\n", &num, num);
    printf("limit_address:%p value:%d\n", &limit, limit);
    printf("pi_address:%p value:%p\n", &pi, pi);
    printf("pci_address:%p value:%p\n", &pci, pci);
    return 0;
}