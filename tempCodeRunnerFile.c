// max value in a array
#include<stdio.h>
int main()
{
    int size = 8;
    int a[size];
    for(int i = 0; i < size; i++)
    {
        printf("\n%d #", i+1);
        scanf(" %d", &a[i]);
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
}