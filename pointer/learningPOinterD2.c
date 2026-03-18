#include<stdio.h>

int swap(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 2, b = 3;
    printf("%d %d\n",a,b);
    swap(&a, &b);
    printf("%d %d\n",a,b);

}