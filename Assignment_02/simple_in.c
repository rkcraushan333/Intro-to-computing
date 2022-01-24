#include <stdio.h>

int main()
{

    float p, r, n, s;
    printf("Enter the principal value:\n");
    scanf("%f", &p);
    printf("Enter the rate value:\n");
    scanf("%f", &r);
    printf("Enter the time value:\n");
    scanf("%f", &n);
    s = p * r * n / 100;
    printf("The Value of S.I. is %.2f", s);
    return 0;
}