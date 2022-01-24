#include <stdio.h>

int sum_of_matrix(int a[][], int b[][], int m, int n)
{
    int result[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
int main()
{
    int m, n;
    printf("Enter the no of rows of matrix:");
    scanf("%d", &m);
    printf("Enter the no of columns of matrix:");
    scanf("%d", &n);
    int a[m][n], b[m][n];
    printf("Enter the elements of first array:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of first array:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int sum = sum_of_matrix(a, b, m, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", sum[i][j]);
    }
    return 0;
}