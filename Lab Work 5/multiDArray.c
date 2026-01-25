#include<stdio.h>
int main(){
    int row = 3;
    int col = 3;
    int multiD[row][col];
    int i,j;

    printf("\nSTART\n");

    // input

    for(i = 0; i<row; i++){
        for(j = 0;j < col; j++){
            printf("Input for [%d][%d]: ", i, j);
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
    printf("\nEND\n");
}