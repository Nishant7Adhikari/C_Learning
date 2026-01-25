#include<stdio.h>
int main()
{
    int n, sum = 0, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0)  
    {
        r = n % 10; //to get the last digit
        sum = sum + r; //to add the last digit to the sum
        n = n / 10; //to remove the last digit
    }
    printf("Sum of digits = %d", sum);
    return 0;
}