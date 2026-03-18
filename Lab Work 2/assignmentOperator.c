#include<stdio.h>
int main()
{
    int num = 20;
    printf("num = %d\n", num);
    num += 5;
    printf("num += 5 :  %d\n", num);
    num -= 5;
    printf("num -= 5 : %d\n", num);
    num *= 2;
    printf("num *= 2 : %d\n", num);
    num /= 4;
    printf("num /= 4 : %d\n", num);
    num %= 2;
    printf("num %%= 2 : %d\n", num);
    return 0;
}
