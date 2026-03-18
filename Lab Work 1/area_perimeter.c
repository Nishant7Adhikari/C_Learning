#include<stdio.h>
int main(){
    float length = 14.5;
    float width = 6.0;
    float area = length * width;
    float perimeter = 2 * (length + width);
    printf("Length: %.2f\n",length);
    printf("Width: %d\n", (int)width);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
