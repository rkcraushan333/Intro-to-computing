#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        int k = 1;
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("%d ",k);
                k++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}