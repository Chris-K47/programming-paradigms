#include <stdio.h>

// Function prototype
int add(int a, int b);

int main() {
    int num1, num2, result;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Use the declarative add function to get the result
    result = add(num1, num2);

    // Output the result
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function to add two numbers
int add(int a, int b) {
    return a + b;  // The addition operation is abstracted
}
