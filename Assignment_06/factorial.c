#include <stdio.h>

int main()
{

    int n, fac = 1;
    printf("Enter the Value of n:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("factorial of n is %d\n", fac);
    return 0;
}