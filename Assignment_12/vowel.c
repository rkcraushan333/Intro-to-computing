#include <stdio.h>
#include <string.h>

int main(){
    char A[30];
    printf("Enter the name:\n");
    gets(A);
    int count = 0;
    for (int i = 0; A[i] != '\0'; i++)
    {
        if (A[i]=='a' || A[i]=='e'  || A[i]=='i' || A[i]=='o' || A[i]=='u')
        {
           count++;
        }
    }
    printf("The no of vowels in the %s is %d.",A,count);
    
    return 0;
}