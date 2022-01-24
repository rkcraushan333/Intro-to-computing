#include <stdio.h>
int main()
{
    int a, b, flag = 0;
    printf("Enter the lower limit:\n");
    scanf("%d", &a);
    printf("Enter the upper limit:\n");
    scanf("%d", &b);
    for (int i = a + 1; i < b; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}