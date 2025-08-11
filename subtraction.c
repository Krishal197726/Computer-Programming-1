#include <stdio.h>
#include <conio.h>
int main() {
    int num1, num2, minus;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    minus = num1 - num2;
    printf("The subtraction of %d and %d is %d\n", num1, num2, minus);
    return 0;
}
