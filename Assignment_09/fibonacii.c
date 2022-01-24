#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    int d[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        d[i] = a;
        c = a + b;
        a = b;
        b = c;
        sum = d[i] + sum;
    }
    printf("\n%d", sum);

    return 0;
}