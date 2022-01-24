#include <stdio.h>
int main()
{

    float area, per,pi=3.14, r;
    printf("Enter the value of Radius\n");
    scanf("%f", &r);
    area = pi * r * r;
    per = 2 * pi * r;
    printf("The area of the circle is %.2f\n", area);
    printf("The Perimeter of the circle is %.2f\n", per);
    return 0;
}