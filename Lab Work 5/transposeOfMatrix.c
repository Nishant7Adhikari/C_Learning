#include<stdio.h>

int main(){
	int i,j, A[3][3];
	
	printf("Enter the elements of the Matrix\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf(" %d",&A[i][j]);
		}
	}
	printf("Transpose of Matrix: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}
