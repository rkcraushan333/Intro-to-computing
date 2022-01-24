#include <stdio.h>
#include <math.h>
int main()
{
    int n, a, b, r, d = 0, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    a = n;
    b = n;
    while (a > 0)
    {
        a = a / 10;
        d += 1;
    }
    while (b > 0)
    {
        r = b % 10;
        sum += pow(r,d);
        b = b / 10;
    }
    if (sum == n)
    {
        printf("Armstrong no");
    }
    else
    {
        printf("not an armstrong no");
    }

    return 0;
}