#include<stdio.h>
int main(){
    int row = 3;
    int col = 3;
    int multiD[row][col];
    int i,j;

    // input
	printf("Enter the elements for the %d x %d Matrix\n:",row,col);
    for(i = 0; i<row; i++){
        for(j = 0;j < col; j++){
            scanf(" %d", &multiD[i][j]);
        }
    }

    // output

    printf("Output:\n");
    
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d\t", multiD[i][j]);
        }
        printf("\n");
    }
}
