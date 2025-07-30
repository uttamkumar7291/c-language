#include <stdio.h>
// question:-2.take float as input and print the fractional part of the real number.
int main() {
    float a; // by:er. uttam kumar

    printf("Enter the number: ");
    scanf("%f", &a);
    int y;
    y = a;
    // Calculate the fractional part
    float fractionalPart = a - y;

    // Print the fractional part
    printf("Fractional part of the number: %f\n", fractionalPart);

    return 0;
}
