#include <stdio.h>
int main()
{
    int n, a, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    a = n;
    for (int i = 1; i < n; i++)
    {
        if (a % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("%d is a pefect no.",n);
    }
    else
    {
        printf("%d is not a pefect no.",n);
    }
    return 0;
}