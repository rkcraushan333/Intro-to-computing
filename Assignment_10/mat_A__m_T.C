#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int a[3][3], b[3][3],c;
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
    printf("Enter A for add, M for mul & T for transpose:\n");
    scanf("%d", &c);
    switch (c)
    {
    case 'A':
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int sum = a[i][j] + b[i][j];
                printf("%d", sum);
            }
            printf("\n");
        }

        break;
    // case 'M':
    //     int p, sum = 0;
    //     for (int i = 0; i < 3; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             for (int k = 0; k < 3; k++)
    //             {
    //                 p = a[i][j] * b[i][k];
    //                 sum = sum + p;
    //             }
    //             printf("%d", sum);
    //         }
    //     }

    //     break;
    case 'T':
        printf("Transpose of a:\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d", a[j][i]);
            }
            printf("\n");
        }
        printf("Transpose of b:\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d", b[j][i]);
            }
        }

        break;

    default:
        printf("Invalid input");
    }

    return 0;
}