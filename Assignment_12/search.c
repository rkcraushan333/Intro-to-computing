#include <stdio.h>
#include <string.h>
int search(int a[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
}
int main()
{
    int n;
    printf("Enter the no of elements of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int key;
    printf("Enter the elements you want to searh:");
    scanf("%d", &key);
    int result = search(a, n, key);
    printf("%d found at index no %d", key, result);
    return 0;
}