#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        printf("at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("The sum of the elements in the array is: %d",sum);
    return 0;
}