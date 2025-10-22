#include <stdio.h>

int main() {
    // Declare variables for length and width
    float length, width;

    // Input length and width value from user
    printf("Enter temperature in length: ");
    scanf("%f", &length);
    printf("Enter temperature in width: ");
    scanf("%f", &width);

    // calculate Area
    float area = length * width;

    // calculate Perimeter
    float perimeter = 2* (length + width);


    // Display the area
    printf("The area of this Rectangle = %f\n", area);

    // Display the Perimeter
    printf("The Perimeter of this Rectangle = %f\n", perimeter);

    return 0;
}