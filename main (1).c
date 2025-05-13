#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Ask the user for the Celsius temperature
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
