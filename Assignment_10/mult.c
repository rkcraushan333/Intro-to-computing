#include <stdio.h>
int main()
{ int a[3][3], b[3][3], product[3][3], sum = 0;
    printf("Enter the 9 elements for first matrix:\n");
    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
        {scanf("%d", &a[i][j]);  }   }
    printf("Enter the 9 elements for second matrix:\n");
    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
        {scanf("%d", &b[i][j]); } }
    for (int i = 0; i < 3; i++)
    {  for (int j = 0; j < 3; j++)
        { for (int k = 0; k < 3; k++)
            {    sum += a[i][k] * b[k][j];}
            product[i][j] = sum;
            sum = 0;}  }
    printf("Product of matrices is:\n");        
    for (int i = 0; i < 3; i++)
    { for (int j = 0; j < 3; j++)
        {  printf("%d", product[i][j]);
            printf(" ");}
        printf("\n"); }
    return 0; }