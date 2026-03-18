#include<stdio.h>
int main(){
    int principle = 800000;
    int rate = 7.5;
    float time = 2.0;
    float interest = (principle * rate * time) / 100;
    printf("Principle: 800000\n");
    printf("Rate: 7.5\n");
    printf("Time: 2\n");
    printf("The simple interest: %.2f", interest);
    return 0;
}
