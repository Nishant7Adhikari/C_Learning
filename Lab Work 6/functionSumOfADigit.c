#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to sum	
        num /= 10; // Remove the last digit
    }
    return sum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = sumOfDigits(number);
    printf("Sum of digits of %d is: %d\n", number, result);
    return 0;
}
