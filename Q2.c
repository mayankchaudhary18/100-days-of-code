// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    float num1, num2, sum, diff, product, quotient;
    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nSum = %.2f\n", sum);
        printf("\nDifference = %.2f\n", diff);
        printf("\nProduct = %.2f\n", product);
        printf("\nQuotient = %.2f\n", quotient);
    } else {
        printf("\nSum = %.2f", sum);
        printf("\nDifference = %.2f", diff);
        printf("\nProduct = %.2f", product);
        printf("\nError: Division by zero is not allowed.\n");
    }

    return 0;
}