#include <stdio.h>

float area(float r)
{
    float c = 3.14 *r*r;
    return c;
}

int main()
{
    float r,a;
    printf("Enter two value of radius:\n");
    scanf("%f",&r);
    a = area(r);
    printf("Area of given circle is: %.2f", a);

    return 0;
}