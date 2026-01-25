#include<stdio.h>
// function that takes two inputs and return their sum
int add(int input1, int input2){
	return input1 + input2;
}
int main(){
	int a, b, sum = 0;
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	sum = add(a,b);
	printf("Sum = %d",sum);
	add(a, b);
}
