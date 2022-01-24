#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n[a][b];
    printf("Enter the 6 elements for matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &n[i][j]);
        }
    }
    printf("Transpose of matrix is:\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ", n[j][i]);
        }
        printf("\n");
    }
    return 0;
}