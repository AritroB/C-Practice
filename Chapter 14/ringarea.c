#include <stdio.h>

double AreaOfCircle(double radius);

int main(void)
{
    double outer;
    double inner;
    double areaOfRing;

    printf("Enter inner radius: ");
    scanf("%lf", &inner);

    printf("Enter outer radius: ");
    scanf("%lf", &outer);

    areaOfRing = AreaOfCircle(outer) - AreaOfCircle(inner);
    printf("The area of the ring is %f\n", areaOfRing);
}

double AreaOfCircle(double radius)
{
    double pi = 3.14159265;

    return pi * radius * radius;
}