#include<stdio.h>
int main()
{
    int a=5,b=7;
    printf("Bitwise AND : (a&b) %d\n",a&b);
    printf("Bitwise OR : (a|b) %d\n",a|b);
    printf("Bitwise XOR : (a^b) %d\n",a^b);
    printf("Bitwise NOT : ~(a) %d\n",~a);
    printf("Bitwise Left Shift : (a<<1) %d\n",a<<1);
    printf("Bitwise Right Shift : (a>>1) %d\n",a>>1);
    return 0;
}