#include<stdio.h>
int main(){
    int c[10][10], a[10][10],b[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter the size r1 x c1 of Matrix A: ");
    scanf(" %d %d", &r1, &c1);
    r2 = c1;
    printf("Enter the size %d x c1 of Matrix B: ", c1);
    scanf(" %d", &c2);
    
    printf("Enter the elements of A: ");
    for(i = 0; i < r1; i++){
       for(j = 0; j < c1; j++)
       {
         scanf(" %d", &a[i][j]);
       }
    }
    
    printf("Enter the elements of B: ");
    for(i = 0; i < r2; i++){
       for(j = 0; j < c2; j++)
       {
         scanf(" %d", &b[i][j]);
       }
    }

    for(i = 0; i < r1; i++){
       for(j = 0; j < c2; j++)
       {
        c[i][j] = 0;
        for(k = 0; k < c1; k++){
            c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
       }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
}
