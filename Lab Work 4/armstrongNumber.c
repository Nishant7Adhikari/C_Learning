#include<stdio.h>
int main(){
    int num, temp, remainder, result = 0, n;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    n = 0;
    while(temp != 0){
        temp /= 10;
        n++;
    }
    temp = num;
    while(temp != 0){
        remainder = temp % 10;
        result += remainder * remainder * remainder;
        temp /= 10;
    }
    if(result == num){
        printf("%d is an Armstrong number.", num);
    }
    else{
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}