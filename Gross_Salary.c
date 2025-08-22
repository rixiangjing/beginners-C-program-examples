#include <stdio.h>
int main(void)
{
    float agp, b, da, gs;
    printf("Enter the Basic Salary: ");
    if (scanf("%f", &b) != 1 || b < 0) {
        printf("Invalid input!\n");
        return 0;
    }
    printf("Enter the AGP: ");
    if (scanf("%f", &agp) != 1 || agp < 0) {
        printf("Invalid input!\n");
        return 0;
    }
    printf("Enter the DA (%%): ");
    if (scanf("%f", &da) != 1 || da < 0) {
        printf("Invalid input!\n");
        return 0;
    }
    gs = (b + agp) * (1 + da / 100.0f);
    printf("Gross Salary = %.2f\n", gs);
    return 0;
}
