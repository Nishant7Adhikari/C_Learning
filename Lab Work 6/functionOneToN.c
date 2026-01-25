#include<stdio.h>
// function to print from 1 to N
int oneToN(int N){
	int i;
	for(i = 1; i<=N; i++)
	printf(" %d ",i);
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf(" %d",&n);
	
	oneToN(n);
	
	int fun(){
		printf("Hello");
	}
	fun();
	
	return 0;
}
