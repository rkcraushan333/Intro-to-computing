#include <stdio.h>

int main()
{
    int n, a, b, r = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    a = n;
    while (n > 0)
    {
        b = n % 10;
        r = r * 10 + b;
        n = n / 10;
    }
    if (r == a)
    {
        printf("%d is Palindrome", a);
    }
    else
    {
        printf("%d is not Palindrome", a);
    }
    return 0;
}