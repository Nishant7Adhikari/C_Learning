#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter total elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("The sum of the elements is: %d",sum);
    return 0;
}
