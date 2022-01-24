#include <stdio.h>

int main(){

    float a,b;
    char o;
    printf("Enter the value of a and b:\n");
    scanf("%f %f",&a,&b);
    fflush(stdin);
    printf("Enter an arithmetic operator(+-*/):\n");
    scanf("%c",&o);
   
    switch (o)
    {
    case '+':
        printf("Result is %.1f",a+b);
        break;
    case '-':
        printf("Result is %.1f",a-b);
        break;
    case '*':
        printf("Result is %.1f",a*b);
        break;
    case '/':
        printf("Result is %.1f",a/b);
        break;
    default:
    printf("Error");
    }
    return 0;
}