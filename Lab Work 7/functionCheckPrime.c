#include<stdio.h>

// function to check if a number is prime or not
int checkPrime(int number){
    int i;
    for (i=2; i<number; i++){
        if (number%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    // declaration of variables
    int number;

    // input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // calling the function and calcularting the result
    if (checkPrime(number)){
        printf("%d is a prime number", number);
    }
    else{
        printf("%d is not a prime number", number);
    }

    return 0;
}