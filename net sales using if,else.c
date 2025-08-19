#include <stdio.h>
#include <conio.h>
int main ()
{
float netSales,grossSales,discount;
printf ("enter the amount of gross sales");
scanf ("%f",&grossSales);
if (grossSales>20000)
{
        discount=grossSales*0.15;
}
else if (grossSales>10000)
{
    discount=grossSales*0.10;
}
else
{
    discount=grossSales*0.05;
}
netSales=grossSales-discount;
printf ("the total amount of net sales is %.3f",netSales);
return 0;
}

