#include <stdio.h>
#include <math.h>
int main()
{

    float p, r, n, c;
    printf("Enter the principal value:\n");
    scanf("%f", &p);
    printf("Enter the rate value:\n");
    scanf("%f", &r);
    printf("Enter the time value:\n");
    scanf("%f", &n);
    c = p * pow((1 + r / 100), n) - p;
    printf("The Value of C.I. is %.2f", c);
    return 0;
}