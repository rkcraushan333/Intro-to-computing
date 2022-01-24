#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, r1, r2;
    int g;
    printf("Enter the value of a,b and c of quadratic equation ax^2+bx+c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    g = ((d > 0) ? 0: (d = 0) ? 1: 2);
    r1 = (-b + sqrt(d)) / 2 * a;
    r2 = (-b - sqrt(d)) / 2 * a;

    switch (g)
    {
    case 0:
        
        printf("Roots are %.2lf and %.2lf", r1, r2);
        break;
    case 1:
        printf("Roots are equal which is %.2lf", r1);
        break;
    case 2:
        printf("Roots are imaginary.");
        break;
    }
    return 0;
}