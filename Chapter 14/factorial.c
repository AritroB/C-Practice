#include <stdio.h>

int Factorial(int n);

int main(void) int number;
int answer;

printf("Input a number: ");

scanf("%d", &number);

answer = Factorial(number);

printf("The factorial of %d is %d\n", number, answer);
}

int Factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
        result = result * i;

    return result;
}