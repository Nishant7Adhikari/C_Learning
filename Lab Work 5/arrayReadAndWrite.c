#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input
    for(i = 0; i < n; i++)
    {
        printf("Enter the element for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Output

    for (i = 0; i < n; i++)
    {
        printf("The element at index %d is %d\n", i, arr[i]);
    }
    
    return 0;
}