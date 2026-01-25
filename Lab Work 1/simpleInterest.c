#include<stdio.h>
int main(){
    int principle = 800000;
    int rate = 7.5;
    float time = 2.0;
    float interest = (principle * rate * time) / 100;
    printf("The simple interest is %.2f", interest);
    return 0;
}