#include <stdio.h>
#include <conio.h>
int main() {
    int a;
    float b;
    printf("Enter weight in grams: ");
    scanf("%d", &a);
    b= a / 1000.0;
    printf("%d grams is equal to %.2f kilograms.\n", a, b);
    return 0;
}
