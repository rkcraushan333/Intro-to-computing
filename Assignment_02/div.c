#include <stdio.h>

int main()
{

    float a, b, c;
    printf("Enter the value of a\n");
    scanf("%f", &a);
    printf("Enter the value of b\n");
    scanf("%f", &b);
    c = a / b;
    printf("division of a and b is %f", c);

    return 0;
}