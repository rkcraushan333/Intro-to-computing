#include <stdio.h>
#include <string.h>

int main()
{
    char A[30];
    printf("Enter the name:\n");
    gets(A);
    int count = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        count++;
    }
    printf("The no of letter in th %s is %d", A, count);
    return 0;
}