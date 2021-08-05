#include <stdio.h>

void PrintBanner(); // Function declaration

int main(void)
{
    PrintBanner(); // Function call
    printf("A simple C program.\n");
    PrintBanner();
}

void PrintBanner() // Function definition
{
    printf("============================\n");
}