#include<stdio.h>
//  function that takes an integer and print weather it is even or odd
int EorO(int n){
	if(n%2==0)
	printf("Even");
	else
	printf("Odd");
}
int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	EorO(a);
	return 0;
}
