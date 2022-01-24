#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = j + sum;
            }
        }
        if (sum == i)
        {
            printf("%d\n", sum);
        }
    }

    return 0;
}