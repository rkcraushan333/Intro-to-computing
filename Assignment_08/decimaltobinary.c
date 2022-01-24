#include <stdio.h>

int main()
{

    int n, a, s = 0, p = 1;
    printf("Enter the decimal no:\n");
    scanf("%d", &n); 
    while (n > 0)
    {
        a = n % 2;
        s = (a * p) + s;
        n = n / 2;
        p *= 10;
    }
    printf("%d", s);

    return 0;
}