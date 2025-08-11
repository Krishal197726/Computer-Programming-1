#include <stdio.h>
#include <conio.h>
int main() {
    float grams;
    float kilograms;
    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilograms);
    grams = kilograms * 1000.0;
    printf("%.2f kilograms is equal to %.2f grams.\n", kilograms, grams);

    return 0;
}
