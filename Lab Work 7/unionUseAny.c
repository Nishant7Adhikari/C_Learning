#include <stdio.h>
union StudentID {
    int dlNumber; // Driving License Number
    long citizenshipNumber; // Citizenship Number
    char passportNumber[20]; // Passport Number
};
int main() {
    union StudentID student1;
    
    // Storing a driving license number
    student1.dlNumber = 123456789;
    printf("Driving License Number: %d\n", student1.dlNumber);
    
    // Storing a citizenship number (this will overwrite the previous value)
    student1.citizenshipNumber = 987654321012345678;
    printf("Citizenship Number: %ld\n", student1.citizenshipNumber);
    
    // Storing a passport number (this will overwrite the previous value)
    snprintf(student1.passportNumber, sizeof(student1.passportNumber), "P1234567");
    printf("Passport Number: %s\n", student1.passportNumber);
    
    return 0;
}