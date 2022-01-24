#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf("Enter the name in lower case:\n");
    gets(name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] -= 32;
    }
    printf("%s",name);
    return 0;
}