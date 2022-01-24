#include <stdio.h>

int main()
{

    int n;
    float x = 1.0, sum = 0.0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    while (x <= n)
    {
        sum = (n / x) + sum;

        x += 1;
    }
    printf("%.2f", sum);

    return 0;
}