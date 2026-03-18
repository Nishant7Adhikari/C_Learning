#include<stdio.h>
int main()
{
    int n,i,max;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The largest element in the array is: %d",max);
}
