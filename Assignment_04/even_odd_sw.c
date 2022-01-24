#include <stdio.h>

int main()
{
    int n, a;
    printf("Enter a no n:\n");
    scanf("%d", &n);
    a = (n % 2 == 0) ? 1 : 0;
    switch (a)
    {
    case 0:
        printf("%d is odd.", n);
        break;
    case 1:
        printf("%d is even.", n);
        break;
    default:
        break;
    }
    return 0;
}