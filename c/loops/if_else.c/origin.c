#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int ld;

    // Prompt user for input
    printf("Enter a number: ");
    
    // Use & to pass the address of n to scanf
    scanf("%d", &n);

    // Handle negative numbers by taking absolute value
    if (n < 0) {
        n = -n;
    }

    // Process each digit of the number
    while (n != 0) {
        ld = n % 10;       // Get the last digit
        if (ld % 2 == 0) { // Check if the digit is even
            sum += ld;     // Add to sum if even
        }
        n /= 10;           // Remove the last digit
    }

    // Output the result
    printf("Sum of all even digits: %d\n", sum);

    return 0;
}