#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int k = 5;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }
    return 0;
}