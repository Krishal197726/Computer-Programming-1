#include <stdio.h>
#include <conio.h>
int main() {
    int num1, num2, multiply;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    multiply = num1 * num2;
    printf("The multiplication of %d and %d is %d\n", num1, num2, multiply);
    return 0;
}
