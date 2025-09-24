#include <stdio.h>

int main() {
    int age;
    float income;

    // prompt the user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // prompt the user for income
    printf("Enter your annual income in sh: ");
    scanf("%f", &income);

    // check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}