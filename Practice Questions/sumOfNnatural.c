#include<stdio.h>
void sumUsingDoWhile(int);
void sumUsingWhile(int);

int main(){
    int num, condition;
    
    printf("Enter a number: ");
    scanf(" %d",&num);

    printf("\nWhich Loop do you want to use?\n1. do while\n2. while\n# ");
    scanf(" %d",&condition);

    if(condition == 1)
        sumUsingDoWhile(num);
    if (condition == 2)
    {
        sumUsingWhile(num);
    }
    
    return 0;
}

void sumUsingDoWhile(int n)
{   
    int i = 1;
    printf("\n");
    do{
        if(n < 1)
            return 0;
        
        printf("%d\t", i);
        i++;
    }
    while (i <= n);
}

void sumUsingWhile(int n){
    int i = 1;
    printf("\n");
    while(i <= n){
        printf("%d\t",i);
        i++;
    }
}