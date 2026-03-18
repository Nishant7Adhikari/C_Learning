#include<stdio.h>
const int MAX = 30; // global decleration

int aFunction(){
    printf("printing global variable %d\n", MAX);
}

int main(){
    int a = 5; // local decleration
    printf("printing local variable %d\n",a);
    aFunction();
    {
        int b = 10;
        printf("printing local variable %d\n",b);
    }
    // printf("printing local variable %d\n",b); <<< This won't work because variable b is out of scope.

    printf("printing global variable %d\n", MAX);

    return 0;
}