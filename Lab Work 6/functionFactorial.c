#include<stdio.h>
// functyion to find factorial
int factorialOf(int f){
	int i, fact = 1;
	for(i = f; i > 0; i--)
	fact *= i; 
	return fact;
}

int main(){
	int n, fact;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	fact = factorialOf(n);
	printf("Factorial of %d is %d\n",n,fact);
	main();
}
