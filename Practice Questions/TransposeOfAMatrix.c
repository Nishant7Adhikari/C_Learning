#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;

    printf("Input Matrix A: \n");

    for(i = 0; i < 3; i++){
        printf("Row %d:\n",i);
        for (j = 0; j < 3; j++)
        {
            printf("Enter input for [%d][%d]: ",i,j);
            scanf(" %d", &arr[i][j]);
        }
    }

    printf("Transpose of A:\n");

    for(i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("[%d]: ",arr[j][i]);
        }
    }

}
