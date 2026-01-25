#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\n",a++);//post increment : use the value of a and then increment
    printf("%d\n",a);
    printf("%d\n",++a);//pre increment : increment the value of a and then use
    printf("%d\n",a);
    printf("%d\n",a--);//post decrement : use the value of a and then decrement
    printf("%d\n",a);
    printf("%d\n",--a);//pre decrement : decrement the value of a and then use
    printf("%d\n",a);

    // size of operator and use cases: 
    printf("%d\n",sizeof(int));//size of int
    printf("%d\n",sizeof(float));//size of float
    printf("%d\n",sizeof(char));//size of char
    
    return 0;
}