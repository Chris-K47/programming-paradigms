#include <stdio.h>

// Function prototype for adding two numbers
void addAndPrintSum(int a, int b);

int main() {
    int num1, num2;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to add the numbers and print the result
    addAndPrintSum(num1, num2);

    return 0;
}

// Function to add two integers and print the result
void addAndPrintSum(int a, int b) {
    int sum = a + b;  // Calculate the sum
    printf("The sum of %d and %d is %d\n", a, b, sum);  // Print the result
}
