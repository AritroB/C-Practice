#include <stdio.h>
int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("Address of p is %p\n", p); //if p = 2002
    printf("value at address p is %d\n", *p);
    printf("size of integer is %lu bytes\n", sizeof(int));
    printf("Address of p+1 is %p\n", p + 1); // p+1 = 2006 bc int is 4 bytes
    printf("value at address p+1 is %d\n", *(p + 1));
}