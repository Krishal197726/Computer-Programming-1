#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, divide;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    divide= num1 + num2;
    printf("The division of %d and %d is %d\n", num1, num2, divide);
    return 0;
}
