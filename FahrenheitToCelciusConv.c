// Fahrenheit to Celsius temperature converter
#include <stdio.h>
int main(void)
{	
    float c, f;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%f", &f) != 1) {
        printf("Invalid input!\n");
        return 0;
    }
    c = (f - 32) * 5 / 9;
    printf("Temperature in Celsius: %.0f\n", c);
    return 0;	
}
