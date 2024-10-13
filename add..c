#include <stdio.h>

int main() {
    // Declare variables to store the two numbers
    double num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    double sum = num1 + num2;

    // Display the result
    printf("Sum: %.2d\n", sum);

    return 0;
}
