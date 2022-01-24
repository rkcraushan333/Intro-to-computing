#include <stdio.h>
int main()
{
    int n, r, a, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    a = n;
    while (a > 0)
    {
        r = a % 10;
        sum += r;
        a = a / 10;
    }
    printf("sum of digit of %d is %d.", n, sum);
    return 0;
}