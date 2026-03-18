#include<stdio.h>

int main(){
	int i,j;
	int row = 2, col = 2;
	int A[row][col], B[row][col];
	
	printf("input %d x %d elements of matrix A : ", row, col);
	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
			scanf(" %d", &A[i][j]);
			
	printf("input %d x %d elements of matrix B : ", row, col);
	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
			scanf(" %d", &B[i][j]);
			
	printf("Sum of Matrix A and B : \n");
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d\t",A[i][j] + B[i][j]);
		}
		printf("\n");
	}	
}
