#include <stdio.h>

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Find maximum and minimum of the integers
    int max_val = max(num1, num2);
    int min_val = min(num1, num2);

    // Print results
    printf("Maximum value: %d\n", max_val);
    printf("Minimum value: %d\n", min_val);

    return 0;
}