#include <stdio.h>

int globalVar;
globalVar = 2;

int main(void)
{
    int localVar;
    localVar = 3;

    printf('globalVar = %d, localVar = %d\n', globalVar, localVar);

    {
        int localVar;
        localVar = 4;

        printf("globalVar = %d, localVar = %d\n", globalVar, localVar);
    }

    printf("globalVar = %d, localVar = %d\n", globalVar, localVar);
}