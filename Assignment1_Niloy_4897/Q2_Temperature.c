#include <stdio.h>

int main() {
    // Declare variables for Celsius and Fahrenheit temperatures
    float celsius, fahrenheit;

    // Input temperature in Celsius from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the formula F = (C × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("Temperature in Fahrenheit = %f\n", fahrenheit);

    return 0;
}
