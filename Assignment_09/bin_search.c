#include <stdio.h>
int main()
{
    int n, a, first, last, mid;
    printf("Enter the number of elements of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d number in ascending order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to find:\n");
    scanf("%d", &a);

    first = 0;
    last = n-1;
    while (first <= last)
    {
        mid = (first + last) / 2;

        if (arr[mid] == a)
        {
            printf("%d is at %d index.", a, mid);
            break;
        }
        if (arr[mid] < a)
        {
            first = mid-1;
        }
        if (arr[mid] > a)
        {
            last = mid-1;
        }
    }
    return 0;
}