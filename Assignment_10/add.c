#include <stdio.h>
int main()
{
    int a[3][3], b[3][3];
    printf("Enter the 9 elements for first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the 9 elements for second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j] + b[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}