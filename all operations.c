#include <stdio.h>
#include <conio.h>
int main()
{
    float num1, num2;
    float sum, difference, product, quotient;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1/num2;
    printf("Sum: %.2f\n", sum);
    printf("sutraction %.2f\n", difference);
    printf("multiply %.2f\n", product);
    printf("divide %.2f\n", quotient);

    return 0;
}
