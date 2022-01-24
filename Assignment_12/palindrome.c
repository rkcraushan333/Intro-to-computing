#include <stdio.h>
#include <string.h>

int main()
{
    char name[30], rev[30];
    printf("Enter the name:");
    gets(name);
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    i -= 1;
    int count=0;
    for (int j = 0; name[j] != '\0'; j++)
    {
        if (name[j]==name[i-j])
        {
            count++;
        }
    }
    count -= 1;
    if (count == i)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}