#include<stdio.h>
int main(){
	int number1 = 45;
	int number2 = 9;
	int add , subtract, multiply;
	add = number1 + number2;
	subtract = number1 - number2;
	multiply = number1 * number2;
    printf("%d + %d = %d\n",number1, number2, add);
    printf("%d - %d = %d\n",number1, number2, subtract);
    printf("%d x %d = %d\n",number1, number2, multiply);
    return 0;
}
