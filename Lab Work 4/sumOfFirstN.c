#include<stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
	int i;
    for(i = 1; i <= n; i++)
    sum += i;

    printf("Sum of first %d natural numbers is %d", n, sum);
}
