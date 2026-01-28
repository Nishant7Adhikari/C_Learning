#include <stdio.h>
int sumOfN(int);

int main(){
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);
    int sum = sumOfN(num);

    printf("Sum of Nth term upto %d is %d\n",num, sum);
}

int sumOfN(int a){
    if (a == 0)
        return 0;
    
    return a + sumOfN(a-1);
}