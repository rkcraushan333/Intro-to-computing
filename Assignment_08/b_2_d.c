#include <stdio.h>
#include <math.h>

int main()
{

    int n, i = 0, a, b = 0;
    printf("Enter the binary no:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        a = n % 10;
        b = pow(2, i) * a + b;
        n = n / 10;
        i++;
    }
    printf("%d", b);

    return 0;
}