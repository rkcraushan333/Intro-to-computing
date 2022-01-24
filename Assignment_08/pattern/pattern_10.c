#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}