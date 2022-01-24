#include <stdio.h>

int main()
{
    int n,r;
    printf("Enter n:\n");
    scanf("%d", &n);
    int ans[8],i=0;
    while (n>0)
    {
        r=n%2;
        ans[i]=r;
        n=n/2;
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        printf("%d",ans[j]);
    }
    

    return 0;
}