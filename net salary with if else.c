#include <stdio.h>
#include <conio.h>
int main()
{
    float grossSalary,allowance,deduction,netSalary;
    printf("Enter your gross salary: ");
    scanf("%f", &grossSalary);
    if (grossSalary > 10000)
    {
        allowance = grossSalary * 0.10;
        deduction = grossSalary * 0.03;
    }
    else(grossSalary > 5000)
    {
        allowance = grossSalary * 0.07;
        deduction = grossSalary * 0.02;
    }
    netSalary = grossSalary + allowance - deduction;
    printf("Gross Salary is %.2f\n", grossSalary);
    return 0;
}
