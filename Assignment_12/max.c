#include <stdio.h>
int max_no(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
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
    int largest = max_no(a, n);
    printf("Largest element is %d", largest);

    return 0;
}