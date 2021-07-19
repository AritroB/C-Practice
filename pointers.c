#include <stdio.h>
int main()
{
    /*
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("%i\n", *p);
    printf("%p", p);
    */

    /*
    int a;
    int *p;
    a = 10;
    p = &a; //address of a
    printf("a = %d\n", a);
    *p = 12; //dereferencing
    printf("a = %d\n", a);
    */

    int a;
    int *p;
    a = 10;
    p = &a;
    printf("address of p is %p\n", p);
    printf("value at p is %d\n", *p);
    int b = 20;
    *p = b; // will not change address in p to point b
    printf("address of p is %p\n", p);
    printf("value at p is %d\n", *p);
}