#include <stdio.h>

int main() {
    int num1, num2, sum; // Declares integer variables
    printf("Enter first number: ");
    scanf("%d", &num1); // Reads the first integer from user input
    printf("Enter second number: ");
    scanf("%d", &num2); // Reads the second integer from user input
    sum = num1 + num2; // Calculates the sum
    printf("Sum: %d\n", sum); // Prints the sum
    return 0;
}
