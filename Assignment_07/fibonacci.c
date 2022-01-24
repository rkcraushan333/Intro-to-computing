#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    printf("%d,%d", a, b);
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        printf(",%d", sum);
        a = b;
        b = sum;
    }

    return 0;
}