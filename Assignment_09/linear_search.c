#include <stdio.h>

int main()
{

    int marks[8] = {2, 5, 3, 1, 56, 22, 11, 13}, n, p;
    printf("Enter the no you want to find:\n");
    scanf("%d", &n);
    for (int i = 0; i < 8; i++)
    {
        if (marks[i] == n)
        {
            p = i;
        }
    }
    printf("%d is at index no %d.", n, p);

    return 0;
}