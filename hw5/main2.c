#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0.0;    // Variable to store calculated pi
    double term;        // Current term
    double sign = 1;    // Alternating sign: +1 or -1
    int x;              // Number of terms (integer for `for` loop)

    for (x = 0; fabs(pi - 3.14159) >= 0.000001; x++) { // fabs:make the positive value 
        term = 4.0 / (2 * x + 1); // Calculate the current term
        pi += sign * term;        // Add or subtract the term
        sign = -sign;             // Flip the sign
    }

    printf("π = %.5f\n", pi);
    printf("Number of terms (x) = %d\n", x);

    return 0;
}

