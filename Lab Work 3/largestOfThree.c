#include<stdio.h>
int main(){
    int a,b,c;
    int lrg;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a > b){
        if (a > c)
            lrg = a;
        else
            lrg = c;
    }

    else{
        if (b > c)
            lrg = b;
        else
            lrg = c;
    }
    printf("The largest number is %d",lrg);
    
    return 0;
}