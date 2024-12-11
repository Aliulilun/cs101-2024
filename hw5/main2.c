#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0.0; // Variable to store calculated pi
    double term;     // Current term 
    double sign = 1;    // Alternating sign: +1 or -1
    double x = 0;       // Number of terms

    do {
        term = 4.0 / (2 * x + 1); // Calculate the current term
        pi += sign * term;        // Add or subtract the term
        sign = -sign;            
        x++;                      
    } while (fabs(pi - 3.14159) >= 0.000001); // fabs:make the positive value 

    printf(" π = %.5f\n", pi);

    return 0;
}
