#include <stdio.h>

float op(float a, float b)
{
    char o;
    float r;
    printf("Enter operator:\n");
    fflush(stdin);
    scanf("%c", &o);
    
    switch (o)
    {
    case '+':
        r = a + b;
        break;
    case '-':
        r = a - b;
        break;
    case '*':
        r = a * b;
        break;
    case '/':
        r = a / b;
        break;
    }
    return r;
}
int main()
{
    float a, b, s;
    printf("Enter two values:\n");
    scanf("%f %f", &a, &b);

    float p = op(a, b);
    printf("%.2f", p);
    return 0;
}