#include <stdio.h>
int main()
{
    int n, flag = 0;
    printf("Enter the no:\n");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n == 2)
        {
            printf("prime");
            break;
        }
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag = 1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}