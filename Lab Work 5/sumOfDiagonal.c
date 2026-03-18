#include <stdio.h>

int main(){
    int i, j;
    int A[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
        }
    }
    int sum = 0;
    for(i = 0; i < 3; i++){
        sum += A[i][i];
    }
    printf("Matrix: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
