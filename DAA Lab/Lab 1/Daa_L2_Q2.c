#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 10;
    }
    printf("Array elements are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int large = INT_MIN;
    int slarge = INT_MIN;
    for (int i = 0; i < n; i++)
 {
        if (a[i] > large)
        {
            slarge = large;
            large = a[i];
        }
        else if (a[i] > slarge && a[i] != large)
        {
            slarge = a[i];
        }
    }
    int small = INT_MAX;
    int ssmall = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            ssmall = small;
            small = a[i];
        }
        else if (a[i] < ssmall && a[i] != small)
        {
            ssmall = a[i];
        }
    }
    printf("\nsecond largest element is:%d \n", slarge);
    printf("the second smallest element is %d", ssmall);

return 0;
}