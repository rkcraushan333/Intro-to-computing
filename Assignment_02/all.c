#include <stdio.h>

int main()
{

    float a, b, c, d, e, f;
    printf("Enter the value of a\n");
    scanf("%f", &a);
    printf("Enter the value of b\n");
    scanf("%f", &b);
    c = a + b;
    printf("sum of a and b is %f\n", c);
    d = a - b;
    printf("subtraction of a and b is %f\n", d);
    e = a * b;
    printf("multiply of a and b is %f\n", e);
    f = a / b;
    printf("division of a and b is %f\n", f);
    return 0;
}