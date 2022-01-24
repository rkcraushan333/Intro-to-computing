#include <stdio.h>

int main()
{

    int n;
    float x = 2.0, sum = 0.0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    while (x <= n)
    {
        sum = (1 / x) + sum;

        x += 2;
    }
    printf("%.2f", sum);

    return 0;
}