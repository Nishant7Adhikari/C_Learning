#include<stdio.h>
//Function to find square of a number
int squareOf(int a){
	return a*a;
}
int main(){
	int num, sq;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	sq = squareOf(num);
	
	printf("Square of %d is %d\n", num, sq);
}
