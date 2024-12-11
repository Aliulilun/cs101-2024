#include <stdio.h>
#include <math.h>

int main() {
    int i = 12345; // Input number
    int thousands = 0, ones = 0; // To store the extracted digits
    int temp = i; // Temporary variable to manipulate the number
    int digitCount = 0; // Number of digits in the number
    int result = 0; // To store the final result

    // Count the number of digits
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }

    // Handle cases based on digit count
    if (digitCount > 3) {
        thousands = (i / (int)pow(10, digitCount - 4)) % 10; // Extract the thousands digit
    }
    ones = i % 10; // Extract the ones digit

    // Remove thousands and ones from the number
    int middlePart = (i % (int)pow(10, digitCount - 1)) / 10;

    // Construct the new number
    result = ones * (int)pow(10, digitCount - 1) + middlePart * 10 + thousands;

    // Output the result
    printf("Original number: %d\n", i);
    printf("Modified number: %d\n", result);

    return 0;
}
