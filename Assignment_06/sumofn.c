#include <stdio.h>

int main()
{

    int n, sum = 0;
    printf("Enter the Value of n upto which sum required:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum of n integers is %d", sum);
    return 0;
}