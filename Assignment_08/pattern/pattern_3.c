#include <stdio.h>

int main()
{

    int n = 4,k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}