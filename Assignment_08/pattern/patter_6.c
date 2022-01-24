#include <stdio.h>

int main()
{

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int k=1;
        for (int j = n; j >= i; j--)
        {
            printf("%d",k );
            printf(" ");
            k++;
        }
        printf("\n");
    }

    return 0;
}